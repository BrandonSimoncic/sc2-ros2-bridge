from __future__ import annotations

from dataclasses import dataclass
from math import hypot
from threading import RLock
from typing import Dict, Iterable, List, Optional, Sequence, Set, Tuple

ALLIANCE_SELF = 1
ALLIANCE_ALLY = 2
ALLIANCE_NEUTRAL = 3
ALLIANCE_ENEMY = 4

DISPLAY_VISIBLE = 1
DISPLAY_SNAPSHOT = 2
DISPLAY_HIDDEN = 3
DISPLAY_PLACEHOLDER = 4

MARK_VISIBLE = 0
MARK_FOGGED = 1
MARK_DESTROYED = 2


@dataclass(frozen=True)
class Position:
    x: float
    y: float
    z: float = 0.0

    def distance_xy(self, other: "Position") -> float:
        return hypot(self.x - other.x, self.y - other.y)


@dataclass(frozen=True)
class UnitSnapshot:
    tag: int
    alias: str
    unit_type: int
    owner: int
    alliance: int
    display_type: int
    position: Position
    facing: float
    radius: float
    health: float
    health_max: float
    energy: float
    energy_max: float
    is_alive: bool
    order_ability_ids: Tuple[int, ...]


@dataclass(frozen=True)
class ContactMarkSnapshot:
    mark_id: int
    tag: int
    unit_type: int
    alliance: int
    position: Position
    first_seen_nsec: int
    last_seen_nsec: int
    status: int


class AliasRegistry:
    """Monotonic alias assignment for self-unit tags."""

    def __init__(self, prefix: str = "unit") -> None:
        self._prefix = prefix
        self._next_id = 0
        self._tag_to_alias: Dict[int, str] = {}
        self._alias_to_tag: Dict[str, int] = {}
        self._retired_aliases: Set[str] = set()
        self._lock = RLock()

    def alias_for_tag(self, tag: int) -> Tuple[str, bool]:
        with self._lock:
            if tag in self._tag_to_alias:
                return self._tag_to_alias[tag], False

            alias = f"{self._prefix}_{self._next_id}"
            self._next_id += 1
            self._tag_to_alias[tag] = alias
            self._alias_to_tag[alias] = tag
            return alias, True

    def tag_for_alias(self, alias: str) -> Optional[int]:
        with self._lock:
            return self._alias_to_tag.get(alias)

    def retire_tag(self, tag: int) -> Optional[str]:
        with self._lock:
            alias = self._tag_to_alias.pop(tag, None)
            if alias is None:
                return None
            self._alias_to_tag.pop(alias, None)
            self._retired_aliases.add(alias)
            return alias

    def active_aliases(self) -> List[str]:
        with self._lock:
            return sorted(self._alias_to_tag.keys())

    def active_tags(self) -> Set[int]:
        with self._lock:
            return set(self._tag_to_alias.keys())

    def retired_aliases(self) -> Set[str]:
        with self._lock:
            return set(self._retired_aliases)


class UnitStore:
    """Thread-safe latest-state store used by action callbacks."""

    def __init__(self) -> None:
        self._by_alias: Dict[str, UnitSnapshot] = {}
        self._by_tag: Dict[int, UnitSnapshot] = {}
        self._lock = RLock()

    def update(self, units: Sequence[UnitSnapshot]) -> None:
        with self._lock:
            self._by_alias = {unit.alias: unit for unit in units if unit.alias}
            self._by_tag = {unit.tag: unit for unit in units}

    def remove_alias(self, alias: str) -> None:
        with self._lock:
            unit = self._by_alias.pop(alias, None)
            if unit is not None:
                self._by_tag.pop(unit.tag, None)

    def by_alias(self, alias: str) -> Optional[UnitSnapshot]:
        with self._lock:
            return self._by_alias.get(alias)

    def by_tag(self, tag: int) -> Optional[UnitSnapshot]:
        with self._lock:
            return self._by_tag.get(tag)


class DiscoveryMarkRegistry:
    """Persistent last-known-contact registry independent of SC2 fog snapshots."""

    def __init__(
        self,
        mark_alliances: Iterable[int] = (ALLIANCE_ENEMY,),
        staleness_nsec: int = 0,
    ) -> None:
        self._mark_alliances = set(mark_alliances)
        self._staleness_nsec = staleness_nsec
        self._next_mark_id = 0
        self._marks: Dict[int, ContactMarkSnapshot] = {}
        self._lock = RLock()

    def process(
        self,
        contacts: Sequence[UnitSnapshot],
        dead_tags: Iterable[int],
        now_nsec: int,
    ) -> Tuple[bool, List[ContactMarkSnapshot]]:
        visible_tags: Set[int] = set()
        changed = False

        with self._lock:
            for contact in contacts:
                if contact.alliance not in self._mark_alliances:
                    continue
                if contact.display_type != DISPLAY_VISIBLE:
                    continue

                visible_tags.add(contact.tag)
                previous = self._marks.get(contact.tag)
                if previous is None:
                    self._marks[contact.tag] = ContactMarkSnapshot(
                        mark_id=self._next_mark_id,
                        tag=contact.tag,
                        unit_type=contact.unit_type,
                        alliance=contact.alliance,
                        position=contact.position,
                        first_seen_nsec=now_nsec,
                        last_seen_nsec=now_nsec,
                        status=MARK_VISIBLE,
                    )
                    self._next_mark_id += 1
                    changed = True
                    continue

                updated = ContactMarkSnapshot(
                    mark_id=previous.mark_id,
                    tag=previous.tag,
                    unit_type=contact.unit_type,
                    alliance=contact.alliance,
                    position=contact.position,
                    first_seen_nsec=previous.first_seen_nsec,
                    last_seen_nsec=now_nsec,
                    status=MARK_VISIBLE,
                )
                if updated != previous:
                    self._marks[contact.tag] = updated
                    changed = True

            for tag, mark in list(self._marks.items()):
                if tag in visible_tags or mark.status == MARK_DESTROYED:
                    continue
                fogged = ContactMarkSnapshot(
                    mark_id=mark.mark_id,
                    tag=mark.tag,
                    unit_type=mark.unit_type,
                    alliance=mark.alliance,
                    position=mark.position,
                    first_seen_nsec=mark.first_seen_nsec,
                    last_seen_nsec=mark.last_seen_nsec,
                    status=MARK_FOGGED,
                )
                if fogged != mark:
                    self._marks[tag] = fogged
                    changed = True

            for tag in dead_tags:
                mark = self._marks.get(int(tag))
                if mark is None:
                    continue
                destroyed = ContactMarkSnapshot(
                    mark_id=mark.mark_id,
                    tag=mark.tag,
                    unit_type=mark.unit_type,
                    alliance=mark.alliance,
                    position=mark.position,
                    first_seen_nsec=mark.first_seen_nsec,
                    last_seen_nsec=now_nsec,
                    status=MARK_DESTROYED,
                )
                if destroyed != mark:
                    self._marks[int(tag)] = destroyed
                    changed = True

            if self._staleness_nsec > 0:
                for tag, mark in list(self._marks.items()):
                    if mark.status != MARK_FOGGED:
                        continue
                    if now_nsec - mark.last_seen_nsec > self._staleness_nsec:
                        del self._marks[tag]
                        changed = True

            return changed, sorted(self._marks.values(), key=lambda mark: mark.mark_id)

    def snapshots(self) -> List[ContactMarkSnapshot]:
        with self._lock:
            return sorted(self._marks.values(), key=lambda mark: mark.mark_id)
