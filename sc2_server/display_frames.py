#!/usr/bin/env python3
"""SC2 main-view display: subscribes to /sc2/render (sensor_msgs/Image) and
renders it via pygame. WASD / arrow keys publish /sc2/camera_target to scroll
the camera. rclpy spins in a daemon thread; pygame runs on the main thread."""
import sys
import threading
import time

import pygame
import rclpy
from geometry_msgs.msg import Point
from rclpy.node import Node
from rclpy.qos import DurabilityPolicy, QoSProfile, ReliabilityPolicy
from sensor_msgs.msg import Image

try:
    from sc2_bridge_interfaces.msg import GameInfo
    _HAVE_GAME_INFO = True
except ImportError:
    _HAVE_GAME_INFO = False

POLL_HZ = 30
CAM_STEP = 8.0  # world units per keypress

_KEY_MAP = {
    pygame.K_w:     (0.0,  +CAM_STEP),
    pygame.K_UP:    (0.0,  +CAM_STEP),
    pygame.K_s:     (0.0,  -CAM_STEP),
    pygame.K_DOWN:  (0.0,  -CAM_STEP),
    pygame.K_a:     (-CAM_STEP, 0.0),
    pygame.K_LEFT:  (-CAM_STEP, 0.0),
    pygame.K_d:     (+CAM_STEP, 0.0),
    pygame.K_RIGHT: (+CAM_STEP, 0.0),
}


class DisplayNode(Node):
    def __init__(self) -> None:
        super().__init__('sc2_display')

        sensor_qos = QoSProfile(
            depth=10,
            reliability=ReliabilityPolicy.BEST_EFFORT,
        )
        latched_qos = QoSProfile(
            depth=1,
            reliability=ReliabilityPolicy.RELIABLE,
            durability=DurabilityPolicy.TRANSIENT_LOCAL,
        )

        self._cam_pub = self.create_publisher(Point, '/sc2/camera_target', 10)

        self.create_subscription(Image, '/sc2/render', self._on_render, sensor_qos)
        self.create_subscription(Point, '/sc2/camera_pos', self._on_cam_pos, sensor_qos)

        if _HAVE_GAME_INFO:
            self.create_subscription(GameInfo, '/sc2/game_info', self._on_game_info, latched_qos)

        # Shared state — written by spin thread, read by pygame thread.
        # Plain attribute assignment is atomic under the GIL.
        self.frame_bytes: bytes = b''
        self.frame_w: int = 0
        self.frame_h: int = 0
        self.cam_x: float = 32.0
        self.cam_y: float = 32.0
        self.map_w: float = 64.0
        self.map_h: float = 64.0

    def _on_render(self, msg: Image) -> None:
        self.frame_bytes = bytes(msg.data)
        self.frame_w = msg.width
        self.frame_h = msg.height

    def _on_cam_pos(self, msg: Point) -> None:
        self.cam_x = msg.x
        self.cam_y = msg.y

    def _on_game_info(self, msg: 'GameInfo') -> None:
        if msg.playable_max.x > 0:
            self.map_w = msg.playable_max.x
        if msg.playable_max.y > 0:
            self.map_h = msg.playable_max.y

    def move_camera(self, dx: float, dy: float) -> None:
        self.cam_x = max(0.0, min(self.map_w, self.cam_x + dx))
        self.cam_y = max(0.0, min(self.map_h, self.cam_y + dy))
        pt = Point()
        pt.x = self.cam_x
        pt.y = self.cam_y
        self._cam_pub.publish(pt)


def main() -> None:
    rclpy.init()
    node = DisplayNode()

    spin_thread = threading.Thread(target=rclpy.spin, args=(node,), daemon=True)
    spin_thread.start()

    pygame.init()
    screen = None
    clock = pygame.time.Clock()

    print('SC2 display ready — waiting for /sc2/render ...', flush=True)

    try:
        while rclpy.ok():
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    return
                if event.type == pygame.KEYDOWN:
                    if event.key == pygame.K_ESCAPE:
                        return
                    delta = _KEY_MAP.get(event.key)
                    if delta is not None:
                        node.move_camera(*delta)

            w, h = node.frame_w, node.frame_h
            data = node.frame_bytes

            if w > 0 and h > 0 and len(data) == w * h * 3:
                if screen is None or screen.get_size() != (w, h):
                    screen = pygame.display.set_mode((w, h))
                    pygame.display.set_caption('SC2 — Main View  [WASD/Arrows to pan]')
                    print(f'Display window opened at {w}×{h}', flush=True)

                surf = pygame.image.frombuffer(data, (w, h), 'RGB')
                screen.blit(surf, (0, 0))
                pygame.display.flip()

            clock.tick(POLL_HZ)
    finally:
        pygame.quit()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
