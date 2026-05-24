from __future__ import annotations

import math
import os
import threading
import time
from dataclasses import dataclass
from typing import Any, Dict, Iterable, List, Optional, Sequence, Tuple

import rclpy
from builtin_interfaces.msg import Time
from geometry_msgs.msg import Point, TransformStamped
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup, ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from rclpy.qos import DurabilityPolicy, QoSProfile, ReliabilityPolicy
from std_msgs.msg import Header
from tf2_ros import TransformBroadcaster
from visualization_msgs.msg import Marker, MarkerArray

from sc2_bridge import abilities
from sc2_bridge.sc2_client import Sc2ClientError, SerializedSc2Client
from sc2_bridge.state import (
    ALLIANCE_ENEMY,
    ALLIANCE_SELF,
    DISPLAY_SNAPSHOT,
    DISPLAY_VISIBLE,
    AliasRegistry,
    ContactMarkSnapshot,
    DiscoveryMarkRegistry,
    Position,
    UnitSnapshot,
    UnitStore,
)
from sc2_bridge_interfaces.action import Attack, Move
from sc2_bridge_interfaces.msg import (
    ContactMark,
    ContactMarkArray,
    GameInfo,
    UnitState,
    UnitStateArray,
)
from sc2_bridge_interfaces.srv import KillUnits, SpawnUnits


@dataclass
class UnitInterfaces:
    state_publisher: Any
    move_action: ActionServer
    attack_action: ActionServer


class Sc2BridgeNode(Node):
    """Bridge one SC2 raw API connection into ROS2 unit namespaces."""

    def __init__(self) -> None:
        super().__init__("sc2_bridge")

        self._declare_parameters()
        self._read_parameters()

        self._sensor_qos = QoSProfile(
            depth=10,
            reliability=ReliabilityPolicy.BEST_EFFORT,
        )
        self._latched_qos = QoSProfile(
            depth=1,
            reliability=ReliabilityPolicy.RELIABLE,
            durability=DurabilityPolicy.TRANSIENT_LOCAL,
        )

        self._timer_group = MutuallyExclusiveCallbackGroup()
        self._service_group = ReentrantCallbackGroup()
        self._action_group = ReentrantCallbackGroup()

        self._aliases = AliasRegistry()
        self._unit_store = UnitStore()
        self._mark_registry = DiscoveryMarkRegistry(
            mark_alliances=self.mark_alliances,
            staleness_nsec=int(self.mark_staleness_sec * 1_000_000_000),
        )
        self._unit_interfaces: Dict[str, UnitInterfaces] = {}
        self._interfaces_lock = threading.RLock()
        self._connected = False
        self._game_started = False

        self._client = SerializedSc2Client(
            host=self.sc2_host,
            port=self.sc2_port,
            timeout_seconds=self.sc2_timeout_sec,
            retry_timeout_seconds=self.sc2_retry_timeout_sec,
        )

        self._units_pub = self.create_publisher(
            UnitStateArray, "/sc2/units", self._sensor_qos
        )
        self._contacts_pub = self.create_publisher(
            UnitStateArray, "/sc2/contacts", self._sensor_qos
        )
        self._marks_pub = self.create_publisher(
            ContactMarkArray, "/sc2/marks", self._latched_qos
        )
        self._markers_pub = self.create_publisher(
            MarkerArray, "/sc2/mark_markers", self._latched_qos
        )
        self._game_info_pub = self.create_publisher(
            GameInfo, "/sc2/game_info", self._latched_qos
        )
        self._spawn_srv = self.create_service(
            SpawnUnits,
            "/sc2/spawn_units",
            self._handle_spawn_units,
            callback_group=self._service_group,
        )
        self._kill_srv = self.create_service(
            KillUnits,
            "/sc2/kill_units",
            self._handle_kill_units,
            callback_group=self._service_group,
        )

        self._tf_broadcaster = TransformBroadcaster(self) if self.publish_tf else None

        if self.autostart:
            try:
                self._start_game()
            except Sc2ClientError as exc:
                self.get_logger().error(str(exc))

        period = 1.0 / max(self.publish_rate_hz, 0.1)
        self._timer = self.create_timer(
            period, self._on_timer, callback_group=self._timer_group
        )

    def destroy_node(self) -> bool:
        if hasattr(self, "_timer"):
            self._timer.cancel()
            self.destroy_timer(self._timer)
        with self._interfaces_lock:
            for alias in list(self._unit_interfaces.keys()):
                self._destroy_unit_interfaces(alias)
        self._client.quit()
        return super().destroy_node()

    def _declare_parameters(self) -> None:
        self.declare_parameter("sc2_host", os.environ.get("SC2_HOST", "sc2-server"))
        self.declare_parameter("sc2_port", int(os.environ.get("SC2_PORT", "8167")))
        self.declare_parameter(
            "map_name",
            os.environ.get("SC2_MAP", "/StarCraftII/maps/Flat482Spawns.SC2Map"),
        )
        self.declare_parameter("realtime", False)
        self.declare_parameter("step_size", 2)
        self.declare_parameter("publish_rate_hz", 10.0)
        self.declare_parameter("world_frame_id", "sc2_map")
        self.declare_parameter("publish_tf", True)
        self.declare_parameter("arrival_tolerance", 0.5)
        self.declare_parameter("god_mode", True)
        self.declare_parameter("mark_alliances", [ALLIANCE_ENEMY])
        self.declare_parameter("mark_staleness_sec", 0.0)
        self.declare_parameter("publish_contacts", True)
        self.declare_parameter("autostart", True)
        self.declare_parameter("computer_opponent", True)
        self.declare_parameter("move_ability_id", abilities.MOVE)
        self.declare_parameter("attack_ability_id", abilities.ATTACK)
        self.declare_parameter("sc2_timeout_sec", 10.0)
        self.declare_parameter("sc2_retry_timeout_sec", 120.0)

    def _read_parameters(self) -> None:
        self.sc2_host = str(self.get_parameter("sc2_host").value)
        self.sc2_port = int(self.get_parameter("sc2_port").value)
        self.map_name = str(self.get_parameter("map_name").value)
        self.realtime = bool(self.get_parameter("realtime").value)
        self.step_size = int(self.get_parameter("step_size").value)
        self.publish_rate_hz = float(self.get_parameter("publish_rate_hz").value)
        self.world_frame_id = str(self.get_parameter("world_frame_id").value)
        self.publish_tf = bool(self.get_parameter("publish_tf").value)
        self.arrival_tolerance = float(self.get_parameter("arrival_tolerance").value)
        self.god_mode = bool(self.get_parameter("god_mode").value)
        self.mark_alliances = [
            int(value) for value in self.get_parameter("mark_alliances").value
        ]
        self.mark_staleness_sec = float(self.get_parameter("mark_staleness_sec").value)
        self.publish_contacts = bool(self.get_parameter("publish_contacts").value)
        self.autostart = bool(self.get_parameter("autostart").value)
        self.computer_opponent = bool(self.get_parameter("computer_opponent").value)
        self.move_ability_id = int(self.get_parameter("move_ability_id").value)
        self.attack_ability_id = int(self.get_parameter("attack_ability_id").value)
        self.sc2_timeout_sec = float(self.get_parameter("sc2_timeout_sec").value)
        self.sc2_retry_timeout_sec = float(
            self.get_parameter("sc2_retry_timeout_sec").value
        )

    def _start_game(self) -> None:
        self.get_logger().info(
            f"Connecting to SC2 API at {self.sc2_host}:{self.sc2_port}"
        )
        ping = self._client.connect()
        self._connected = True
        self.get_logger().info(
            "SC2 ping successful: "
            f"version='{ping.game_version}' base_build={ping.base_build}"
        )

        try:
            from s2clientprotocol import common_pb2 as common_pb
            from s2clientprotocol import sc2api_pb2 as sc_pb
        except ImportError as exc:
            raise Sc2ClientError(
                "s2clientprotocol is not installed; install pysc2 dependencies first"
            ) from exc

        create = sc_pb.RequestCreateGame(
            realtime=self.realtime,
            disable_fog=False,
        )
        create.local_map.map_path = self.map_name

        participant = create.player_setup.add()
        participant.type = sc_pb.Participant

        if self.computer_opponent:
            opponent = create.player_setup.add()
            opponent.type = sc_pb.Computer
            opponent.race = common_pb.Random
            opponent.difficulty = sc_pb.VeryEasy

        join = sc_pb.RequestJoinGame()
        join.race = common_pb.Terran
        join.options.raw = True
        join.options.score = False

        self._client.create_game(create)
        self._client.join_game(join)
        self._game_started = True
        self.get_logger().info(
            f"Joined SC2 game on map '{self.map_name}' "
            f"({'realtime' if self.realtime else 'stepped'})"
        )

        if self.god_mode:
            self._try_enable_god_mode()

        self._publish_game_info()

    def _try_enable_god_mode(self) -> None:
        try:
            from s2clientprotocol import debug_pb2 as debug_pb
            from s2clientprotocol import sc2api_pb2 as sc_pb

            request = sc_pb.RequestDebug()
            command = request.debug.add()
            if hasattr(debug_pb.DebugGameState, "Value"):
                command.game_state = debug_pb.DebugGameState.Value("god")
            else:
                command.game_state = debug_pb.god
            self._client.debug(request)
            self.get_logger().info("Enabled SC2 debug god mode")
        except Exception as exc:
            self.get_logger().warning(
                f"Could not enable SC2 debug god mode; continuing without it ({exc})"
            )

    def _publish_game_info(self) -> None:
        msg = GameInfo()
        msg.header = self._header()
        msg.map_name = self.map_name
        msg.game_version = self._client.ping_info.game_version
        msg.realtime = self.realtime
        msg.world_frame_id = self.world_frame_id

        try:
            response = self._client.game_info()
            info = getattr(response, "game_info", response)
            msg.map_name = str(getattr(info, "map_name", self.map_name)) or self.map_name
            playable = getattr(getattr(info, "start_raw", None), "playable_area", None)
            if playable is not None:
                msg.playable_min = self._point_from_proto(getattr(playable, "p0", None))
                msg.playable_max = self._point_from_proto(getattr(playable, "p1", None))
        except Exception as exc:
            self.get_logger().warning(f"Could not read SC2 game_info: {exc}")

        self._game_info_pub.publish(msg)

    def _on_timer(self) -> None:
        if not self._game_started:
            return

        try:
            if not self.realtime:
                self._client.step(self.step_size)
            observation = self._client.observe()
            self._process_observation(observation)
        except Exception as exc:
            self.get_logger().error(f"SC2 observation tick failed: {exc}")
            self._game_started = False
            self._connected = False

    def _process_observation(self, response: Any) -> None:
        observation = getattr(response, "observation", response)
        raw_data = getattr(observation, "raw_data", None)
        if raw_data is None:
            self.get_logger().warning("Observation did not include raw_data")
            return

        game_loop = int(getattr(observation, "game_loop", 0))
        dead_tags = [int(tag) for tag in getattr(getattr(raw_data, "event", None), "dead_units", [])]

        unit_snapshots: List[UnitSnapshot] = []
        self_units: List[UnitSnapshot] = []
        contacts: List[UnitSnapshot] = []

        for raw_unit in getattr(raw_data, "units", []):
            snapshot = self._snapshot_from_raw_unit(raw_unit)
            if snapshot.alliance == ALLIANCE_SELF:
                alias, created = self._aliases.alias_for_tag(snapshot.tag)
                snapshot = UnitSnapshot(
                    tag=snapshot.tag,
                    alias=alias,
                    unit_type=snapshot.unit_type,
                    owner=snapshot.owner,
                    alliance=snapshot.alliance,
                    display_type=snapshot.display_type,
                    position=snapshot.position,
                    facing=snapshot.facing,
                    radius=snapshot.radius,
                    health=snapshot.health,
                    health_max=snapshot.health_max,
                    energy=snapshot.energy,
                    energy_max=snapshot.energy_max,
                    is_alive=snapshot.is_alive,
                    order_ability_ids=snapshot.order_ability_ids,
                )
                if created:
                    self._create_unit_interfaces(alias)
                    self.get_logger().info(
                        f"Assigned alias '{alias}' to SC2 unit tag {snapshot.tag}"
                    )
                self_units.append(snapshot)
            elif snapshot.display_type in (DISPLAY_VISIBLE, DISPLAY_SNAPSHOT):
                contacts.append(snapshot)

            unit_snapshots.append(snapshot)

        observed_self_tags = {unit.tag for unit in self_units}
        retired_tags = set(dead_tags) | (self._aliases.active_tags() - observed_self_tags)
        for tag in retired_tags:
            alias = self._aliases.retire_tag(tag)
            if alias is None:
                continue
            self._unit_store.remove_alias(alias)
            self._destroy_unit_interfaces(alias)
            self.get_logger().info(f"Retired alias '{alias}' for tag {tag}")

        self._unit_store.update(self_units)
        self._publish_units(game_loop, unit_snapshots, self_units, contacts)
        self._process_marks(contacts, dead_tags)

    def _snapshot_from_raw_unit(self, raw_unit: Any) -> UnitSnapshot:
        orders = tuple(
            int(getattr(order, "ability_id", 0))
            for order in getattr(raw_unit, "orders", [])
            if int(getattr(order, "ability_id", 0)) > 0
        )
        pos = getattr(raw_unit, "pos", None)
        return UnitSnapshot(
            tag=int(getattr(raw_unit, "tag", 0)),
            alias="",
            unit_type=int(getattr(raw_unit, "unit_type", 0)),
            owner=int(getattr(raw_unit, "owner", 0)),
            alliance=int(getattr(raw_unit, "alliance", 0)),
            display_type=int(getattr(raw_unit, "display_type", 0)),
            position=Position(
                x=float(getattr(pos, "x", 0.0)),
                y=float(getattr(pos, "y", 0.0)),
                z=float(getattr(pos, "z", 0.0)),
            ),
            facing=float(getattr(raw_unit, "facing", 0.0)),
            radius=float(getattr(raw_unit, "radius", 0.0)),
            health=float(getattr(raw_unit, "health", 0.0)),
            health_max=float(getattr(raw_unit, "health_max", 0.0)),
            energy=float(getattr(raw_unit, "energy", 0.0)),
            energy_max=float(getattr(raw_unit, "energy_max", 0.0)),
            is_alive=bool(getattr(raw_unit, "health", 1.0) > 0.0),
            order_ability_ids=orders,
        )

    def _publish_units(
        self,
        game_loop: int,
        unit_snapshots: Sequence[UnitSnapshot],
        self_units: Sequence[UnitSnapshot],
        contacts: Sequence[UnitSnapshot],
    ) -> None:
        header = self._header()

        aggregate = UnitStateArray()
        aggregate.header = header
        aggregate.game_loop = game_loop
        aggregate.units = [self._unit_msg(unit) for unit in unit_snapshots]
        self._units_pub.publish(aggregate)

        if self.publish_contacts:
            contact_msg = UnitStateArray()
            contact_msg.header = header
            contact_msg.game_loop = game_loop
            contact_msg.units = [self._unit_msg(contact) for contact in contacts]
            self._contacts_pub.publish(contact_msg)

        with self._interfaces_lock:
            for unit in self_units:
                interfaces = self._unit_interfaces.get(unit.alias)
                if interfaces is not None:
                    interfaces.state_publisher.publish(self._unit_msg(unit))

        if self._tf_broadcaster is not None:
            transforms = [self._transform_msg(unit, header) for unit in self_units]
            if transforms:
                self._tf_broadcaster.sendTransform(transforms)

    def _process_marks(
        self, contacts: Sequence[UnitSnapshot], dead_tags: Iterable[int]
    ) -> None:
        now_nsec = self.get_clock().now().nanoseconds
        changed, marks = self._mark_registry.process(contacts, dead_tags, now_nsec)
        if changed:
            self._publish_marks(marks)

    def _publish_marks(self, marks: Sequence[ContactMarkSnapshot]) -> None:
        header = self._header()
        msg = ContactMarkArray()
        msg.header = header
        msg.marks = [self._contact_mark_msg(mark) for mark in marks]
        self._marks_pub.publish(msg)
        self._markers_pub.publish(self._marker_array_msg(header, marks))

    def _create_unit_interfaces(self, alias: str) -> None:
        with self._interfaces_lock:
            if alias in self._unit_interfaces:
                return
            state_pub = self.create_publisher(
                UnitState, f"/{alias}/state", self._sensor_qos
            )
            move_action = ActionServer(
                self,
                Move,
                f"/{alias}/move",
                execute_callback=lambda goal_handle, unit_alias=alias: self._execute_move(
                    unit_alias, goal_handle
                ),
                goal_callback=self._accept_goal,
                cancel_callback=self._accept_cancel,
                callback_group=self._action_group,
            )
            attack_action = ActionServer(
                self,
                Attack,
                f"/{alias}/attack",
                execute_callback=lambda goal_handle, unit_alias=alias: self._execute_attack(
                    unit_alias, goal_handle
                ),
                goal_callback=self._accept_goal,
                cancel_callback=self._accept_cancel,
                callback_group=self._action_group,
            )
            self._unit_interfaces[alias] = UnitInterfaces(
                state_publisher=state_pub,
                move_action=move_action,
                attack_action=attack_action,
            )

    def _destroy_unit_interfaces(self, alias: str, destroy_actions: bool = True) -> None:
        interfaces = self._unit_interfaces.pop(alias, None)
        if interfaces is None:
            return
        try:
            if destroy_actions:
                interfaces.move_action.destroy()
                interfaces.attack_action.destroy()
            self.destroy_publisher(interfaces.state_publisher)
        except Exception:
            self.get_logger().debug(
                f"Ignoring cleanup failure for alias '{alias}'", exc_info=True
            )

    def _accept_goal(self, goal_request: Any) -> GoalResponse:
        del goal_request
        return GoalResponse.ACCEPT

    def _accept_cancel(self, goal_handle: Any) -> CancelResponse:
        del goal_handle
        return CancelResponse.ACCEPT

    def _execute_move(self, alias: str, goal_handle: Any) -> Move.Result:
        goal = goal_handle.request
        target = Position(goal.target.x, goal.target.y, goal.target.z)
        tolerance = (
            float(goal.tolerance)
            if float(goal.tolerance) > 0.0
            else self.arrival_tolerance
        )

        state = self._unit_store.by_alias(alias)
        if state is None:
            return self._abort_move(goal_handle, f"Unit '{alias}' is not alive")

        try:
            self._send_unit_command(
                state.tag,
                self.move_ability_id,
                target_point=target,
                queue=bool(goal.queue),
            )
        except Exception as exc:
            return self._abort_move(goal_handle, f"Failed to issue move order: {exc}")

        while rclpy.ok():
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                result = Move.Result()
                result.success = False
                result.message = "Move canceled"
                return result

            current = self._unit_store.by_alias(alias)
            if current is None or not current.is_alive:
                return self._abort_move(goal_handle, f"Unit '{alias}' died")

            remaining = current.position.distance_xy(target)
            feedback = Move.Feedback()
            feedback.distance_remaining = float(remaining)
            feedback.arrived = remaining <= tolerance
            goal_handle.publish_feedback(feedback)

            if remaining <= tolerance:
                goal_handle.succeed()
                result = Move.Result()
                result.success = True
                result.message = "Arrived"
                return result

            time.sleep(1.0 / max(self.publish_rate_hz, 1.0))

        return self._abort_move(goal_handle, "ROS shutdown")

    def _execute_attack(self, alias: str, goal_handle: Any) -> Attack.Result:
        goal = goal_handle.request
        state = self._unit_store.by_alias(alias)
        if state is None:
            return self._abort_attack(goal_handle, f"Unit '{alias}' is not alive")

        try:
            if int(goal.target_tag) > 0:
                self._send_unit_command(
                    state.tag,
                    self.attack_ability_id,
                    target_tag=int(goal.target_tag),
                    queue=bool(goal.queue),
                )
            else:
                self._send_unit_command(
                    state.tag,
                    self.attack_ability_id,
                    target_point=Position(
                        goal.target_point.x,
                        goal.target_point.y,
                        goal.target_point.z,
                    ),
                    queue=bool(goal.queue),
                )
        except Exception as exc:
            return self._abort_attack(goal_handle, f"Failed to issue attack order: {exc}")

        while rclpy.ok():
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                result = Attack.Result()
                result.success = False
                result.message = "Attack canceled"
                return result

            current = self._unit_store.by_alias(alias)
            if current is None or not current.is_alive:
                return self._abort_attack(goal_handle, f"Unit '{alias}' died")

            distance = 0.0
            engaged = bool(current.order_ability_ids)
            if int(goal.target_tag) > 0:
                target = self._unit_store.by_tag(int(goal.target_tag))
                if target is None or not target.is_alive:
                    goal_handle.succeed()
                    result = Attack.Result()
                    result.success = True
                    result.message = "Target no longer alive or visible"
                    return result
                distance = current.position.distance_xy(target.position)
            else:
                target_point = Position(
                    goal.target_point.x,
                    goal.target_point.y,
                    goal.target_point.z,
                )
                distance = current.position.distance_xy(target_point)

            feedback = Attack.Feedback()
            feedback.distance_to_target = float(distance)
            feedback.engaged = engaged
            goal_handle.publish_feedback(feedback)
            time.sleep(1.0 / max(self.publish_rate_hz, 1.0))

        return self._abort_attack(goal_handle, "ROS shutdown")

    def _abort_move(self, goal_handle: Any, message: str) -> Move.Result:
        goal_handle.abort()
        result = Move.Result()
        result.success = False
        result.message = message
        return result

    def _abort_attack(self, goal_handle: Any, message: str) -> Attack.Result:
        goal_handle.abort()
        result = Attack.Result()
        result.success = False
        result.message = message
        return result

    def _send_unit_command(
        self,
        unit_tag: int,
        ability_id: int,
        *,
        target_point: Optional[Position] = None,
        target_tag: Optional[int] = None,
        queue: bool = False,
    ) -> None:
        from s2clientprotocol import sc2api_pb2 as sc_pb

        request = sc_pb.RequestAction()
        command = request.actions.add().action_raw.unit_command
        command.ability_id = int(ability_id)
        command.unit_tags.append(int(unit_tag))
        command.queue_command = bool(queue)
        if target_tag is not None:
            command.target_unit_tag = int(target_tag)
        elif target_point is not None:
            command.target_world_space_pos.x = float(target_point.x)
            command.target_world_space_pos.y = float(target_point.y)
        else:
            raise ValueError("unit command requires a target point or target tag")
        self._client.actions(request)

    def _handle_spawn_units(
        self, request: SpawnUnits.Request, response: SpawnUnits.Response
    ) -> SpawnUnits.Response:
        if not self._game_started:
            response.success = False
            response.message = "SC2 game is not started"
            return response

        if not request.positions:
            response.success = False
            response.message = "No spawn positions provided"
            return response

        try:
            from s2clientprotocol import sc2api_pb2 as sc_pb

            before_tags = self._aliases.active_tags()
            debug_request = sc_pb.RequestDebug()
            for position in request.positions:
                command = debug_request.debug.add().create_unit
                command.unit_type = int(request.unit_type)
                command.owner = int(request.owner)
                command.quantity = 1
                command.pos.x = float(position.x)
                command.pos.y = float(position.y)
                if hasattr(command.pos, "z"):
                    command.pos.z = float(position.z)

            self._client.debug(debug_request)
            observation = self._client.observe()
            self._process_observation(observation)

            created = [
                self._unit_store.by_alias(alias)
                for alias in self._aliases.active_aliases()
                if (self._aliases.tag_for_alias(alias) or 0) not in before_tags
            ]
            created_units = [unit for unit in created if unit is not None]
            response.aliases = [unit.alias for unit in created_units]
            response.tags = [unit.tag for unit in created_units]
            response.success = len(created_units) == len(request.positions)
            response.message = (
                f"Spawned {len(created_units)} unit(s)"
                if created_units
                else "Debug spawn completed, but no new controllable self-units were observed"
            )
        except Exception as exc:
            response.success = False
            response.message = f"Failed to spawn units: {exc}"

        return response

    def _handle_kill_units(
        self, request: KillUnits.Request, response: KillUnits.Response
    ) -> KillUnits.Response:
        if not self._game_started:
            response.success = False
            response.message = "SC2 game is not started"
            return response

        missing = [alias for alias in request.aliases if self._aliases.tag_for_alias(alias) is None]
        if missing:
            response.success = False
            response.message = f"Unknown aliases: {', '.join(missing)}"
            return response

        try:
            from s2clientprotocol import sc2api_pb2 as sc_pb

            debug_request = sc_pb.RequestDebug()
            kill = debug_request.debug.add().kill_unit
            kill.tag.extend(
                int(self._aliases.tag_for_alias(alias)) for alias in request.aliases
            )
            self._client.debug(debug_request)

            observation = self._client.observe()
            self._process_observation(observation)
            response.success = True
            response.message = f"Killed {len(request.aliases)} unit(s)"
        except Exception as exc:
            response.success = False
            response.message = f"Failed to kill units: {exc}"

        return response

    def _unit_msg(self, snapshot: UnitSnapshot) -> UnitState:
        msg = UnitState()
        msg.tag = snapshot.tag
        msg.alias = snapshot.alias
        msg.unit_type = snapshot.unit_type
        msg.owner = snapshot.owner
        msg.alliance = snapshot.alliance
        msg.display_type = snapshot.display_type
        msg.position = self._point_msg(snapshot.position)
        msg.facing = float(snapshot.facing)
        msg.radius = float(snapshot.radius)
        msg.health = float(snapshot.health)
        msg.health_max = float(snapshot.health_max)
        msg.energy = float(snapshot.energy)
        msg.energy_max = float(snapshot.energy_max)
        msg.is_alive = snapshot.is_alive
        msg.order_ability_ids = list(snapshot.order_ability_ids)
        return msg

    def _contact_mark_msg(self, snapshot: ContactMarkSnapshot) -> ContactMark:
        msg = ContactMark()
        msg.mark_id = snapshot.mark_id
        msg.tag = snapshot.tag
        msg.unit_type = snapshot.unit_type
        msg.alliance = snapshot.alliance
        msg.position = self._point_msg(snapshot.position)
        msg.first_seen = self._time_msg(snapshot.first_seen_nsec)
        msg.last_seen = self._time_msg(snapshot.last_seen_nsec)
        msg.status = snapshot.status
        return msg

    def _marker_array_msg(
        self, header: Header, marks: Sequence[ContactMarkSnapshot]
    ) -> MarkerArray:
        array = MarkerArray()
        clear = Marker()
        clear.action = Marker.DELETEALL
        array.markers.append(clear)

        for mark in marks:
            marker = Marker()
            marker.header = header
            marker.ns = "sc2_marks"
            marker.id = int(mark.mark_id)
            marker.type = Marker.SPHERE
            marker.action = Marker.ADD
            marker.pose.position = self._point_msg(mark.position)
            marker.pose.orientation.w = 1.0
            marker.scale.x = 0.7
            marker.scale.y = 0.7
            marker.scale.z = 0.7
            marker.color.a = 0.85
            if mark.status == ContactMark.STATUS_VISIBLE:
                marker.color.r = 1.0
                marker.color.g = 0.15
                marker.color.b = 0.05
            elif mark.status == ContactMark.STATUS_FOGGED:
                marker.color.r = 1.0
                marker.color.g = 0.75
                marker.color.b = 0.1
            else:
                marker.color.r = 0.25
                marker.color.g = 0.25
                marker.color.b = 0.25
            array.markers.append(marker)

        return array

    def _transform_msg(self, snapshot: UnitSnapshot, header: Header) -> TransformStamped:
        transform = TransformStamped()
        transform.header = header
        transform.child_frame_id = snapshot.alias
        transform.transform.translation.x = snapshot.position.x
        transform.transform.translation.y = snapshot.position.y
        transform.transform.translation.z = snapshot.position.z
        transform.transform.rotation.z = math.sin(snapshot.facing / 2.0)
        transform.transform.rotation.w = math.cos(snapshot.facing / 2.0)
        return transform

    def _header(self) -> Header:
        header = Header()
        header.stamp = self.get_clock().now().to_msg()
        header.frame_id = self.world_frame_id
        return header

    def _point_msg(self, position: Position) -> Point:
        point = Point()
        point.x = float(position.x)
        point.y = float(position.y)
        point.z = float(position.z)
        return point

    def _point_from_proto(self, proto_point: Any) -> Point:
        point = Point()
        if proto_point is not None:
            point.x = float(getattr(proto_point, "x", 0.0))
            point.y = float(getattr(proto_point, "y", 0.0))
            point.z = float(getattr(proto_point, "z", 0.0))
        return point

    def _time_msg(self, nanoseconds: int) -> Time:
        msg = Time()
        msg.sec = int(nanoseconds // 1_000_000_000)
        msg.nanosec = int(nanoseconds % 1_000_000_000)
        return msg


def main(args: Optional[Sequence[str]] = None) -> None:
    rclpy.init(args=args)
    node = Sc2BridgeNode()
    executor = MultiThreadedExecutor()
    executor.add_node(node)

    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        executor.shutdown()
        executor.remove_node(node)
        node.destroy_node()
        try:
            if rclpy.ok():
                rclpy.shutdown()
        except Exception:
            pass


if __name__ == "__main__":
    main()
