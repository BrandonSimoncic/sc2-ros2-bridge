from sc2_bridge.state import (
    ALLIANCE_ENEMY,
    ALLIANCE_NEUTRAL,
    DISPLAY_SNAPSHOT,
    DISPLAY_VISIBLE,
    MARK_DESTROYED,
    MARK_FOGGED,
    MARK_VISIBLE,
    AliasRegistry,
    DiscoveryMarkRegistry,
    Position,
    UnitSnapshot,
)


def unit(tag, alliance=ALLIANCE_ENEMY, display=DISPLAY_VISIBLE, x=1.0, y=2.0):
    return UnitSnapshot(
        tag=tag,
        alias="",
        unit_type=48,
        owner=2,
        alliance=alliance,
        display_type=display,
        position=Position(x, y, 0.0),
        facing=0.0,
        radius=0.5,
        health=45.0,
        health_max=45.0,
        energy=0.0,
        energy_max=0.0,
        is_alive=True,
        order_ability_ids=(),
    )


def test_aliases_are_monotonic_and_not_reused():
    registry = AliasRegistry()

    alias_10, created_10 = registry.alias_for_tag(10)
    alias_11, created_11 = registry.alias_for_tag(11)
    assert (alias_10, created_10) == ("unit_0", True)
    assert (alias_11, created_11) == ("unit_1", True)

    assert registry.alias_for_tag(10) == ("unit_0", False)
    assert registry.retire_tag(10) == "unit_0"

    alias_12, created_12 = registry.alias_for_tag(12)
    assert (alias_12, created_12) == ("unit_2", True)
    assert "unit_0" in registry.retired_aliases()


def test_discovery_marks_persist_through_fog_and_resolve_on_death():
    registry = DiscoveryMarkRegistry(mark_alliances=[ALLIANCE_ENEMY])

    changed, marks = registry.process([unit(99, x=5.0, y=6.0)], [], now_nsec=1)
    assert changed is True
    assert len(marks) == 1
    assert marks[0].mark_id == 0
    assert marks[0].status == MARK_VISIBLE
    assert marks[0].position == Position(5.0, 6.0, 0.0)

    changed, marks = registry.process(
        [unit(99, display=DISPLAY_SNAPSHOT, x=100.0, y=100.0)], [], now_nsec=2
    )
    assert changed is True
    assert marks[0].status == MARK_FOGGED
    assert marks[0].position == Position(5.0, 6.0, 0.0)

    changed, marks = registry.process([], [99], now_nsec=3)
    assert changed is True
    assert marks[0].status == MARK_DESTROYED
    assert marks[0].last_seen_nsec == 3


def test_discovery_marks_filter_alliances_by_config():
    registry = DiscoveryMarkRegistry(mark_alliances=[ALLIANCE_ENEMY])

    changed, marks = registry.process([unit(7, alliance=ALLIANCE_NEUTRAL)], [], now_nsec=1)
    assert changed is False
    assert marks == []


def test_fogged_marks_can_expire():
    registry = DiscoveryMarkRegistry(
        mark_alliances=[ALLIANCE_ENEMY],
        staleness_nsec=10,
    )

    registry.process([unit(1)], [], now_nsec=1)
    registry.process([], [], now_nsec=2)
    changed, marks = registry.process([], [], now_nsec=12)

    assert changed is True
    assert marks == []
