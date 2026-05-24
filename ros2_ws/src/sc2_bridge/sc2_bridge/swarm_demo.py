from __future__ import annotations

import math
from typing import List, Optional, Sequence

import rclpy
from geometry_msgs.msg import Point
from rclpy.action import ActionClient
from rclpy.node import Node

from sc2_bridge_interfaces.action import Move
from sc2_bridge_interfaces.msg import ContactMarkArray
from sc2_bridge_interfaces.srv import SpawnUnits


class SwarmDemo(Node):
    """Spawn a small group and command each unit through its ROS namespace."""

    def __init__(self) -> None:
        super().__init__("sc2_swarm_demo")
        self.declare_parameter("unit_type", 48)  # Marine
        self.declare_parameter("owner", 1)
        self.declare_parameter("count", 5)
        self.declare_parameter("spawn_x", 32.0)
        self.declare_parameter("spawn_y", 32.0)
        self.declare_parameter("spawn_spacing", 1.5)
        self.declare_parameter("formation_x", 42.0)
        self.declare_parameter("formation_y", 42.0)
        self.declare_parameter("formation_spacing", 2.0)

        self._spawn_client = self.create_client(SpawnUnits, "/sc2/spawn_units")
        self._marks_sub = self.create_subscription(
            ContactMarkArray, "/sc2/marks", self._on_marks, 10
        )

    def run(self) -> None:
        self.get_logger().info("Waiting for /sc2/spawn_units")
        self._spawn_client.wait_for_service()

        request = SpawnUnits.Request()
        request.unit_type = int(self.get_parameter("unit_type").value)
        request.owner = int(self.get_parameter("owner").value)
        request.positions = self._spawn_positions()

        future = self._spawn_client.call_async(request)
        rclpy.spin_until_future_complete(self, future)
        response = future.result()
        if response is None or not response.success:
            message = response.message if response is not None else "no response"
            self.get_logger().error(f"Spawn failed: {message}")
            return

        self.get_logger().info(
            f"Spawned {len(response.aliases)} unit(s): {', '.join(response.aliases)}"
        )
        self._send_formation_goals(list(response.aliases))

    def _spawn_positions(self) -> List[Point]:
        count = int(self.get_parameter("count").value)
        origin_x = float(self.get_parameter("spawn_x").value)
        origin_y = float(self.get_parameter("spawn_y").value)
        spacing = float(self.get_parameter("spawn_spacing").value)
        side = max(1, math.ceil(math.sqrt(count)))
        positions: List[Point] = []
        for index in range(count):
            point = Point()
            point.x = origin_x + (index % side) * spacing
            point.y = origin_y + (index // side) * spacing
            point.z = 0.0
            positions.append(point)
        return positions

    def _send_formation_goals(self, aliases: Sequence[str]) -> None:
        center_x = float(self.get_parameter("formation_x").value)
        center_y = float(self.get_parameter("formation_y").value)
        spacing = float(self.get_parameter("formation_spacing").value)

        for index, alias in enumerate(aliases):
            client = ActionClient(self, Move, f"/{alias}/move")
            if not client.wait_for_server(timeout_sec=10.0):
                self.get_logger().error(f"Move action for {alias} did not appear")
                continue

            goal = Move.Goal()
            goal.target.x = center_x + (index - (len(aliases) - 1) / 2.0) * spacing
            goal.target.y = center_y
            goal.target.z = 0.0
            goal.queue = False
            goal.tolerance = 0.5
            client.send_goal_async(goal)
            self.get_logger().info(
                f"Sent {alias} to ({goal.target.x:.1f}, {goal.target.y:.1f})"
            )

    def _on_marks(self, message: ContactMarkArray) -> None:
        if message.marks:
            self.get_logger().info(f"Demo observed {len(message.marks)} discovery mark(s)")


def main(args: Optional[Sequence[str]] = None) -> None:
    rclpy.init(args=args)
    node = SwarmDemo()
    try:
        node.run()
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
