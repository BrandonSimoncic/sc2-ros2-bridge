#!/usr/bin/env python3
"""SC2 minimap display: subscribes to /sc2/minimap (sensor_msgs/Image) and
renders it in a separate 512×512 pygame window. A red dot tracks the current
camera center from /sc2/camera_pos. rclpy spins in a daemon thread."""
import threading

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
MINIMAP_SRC_W = 128
MINIMAP_SRC_H = 128
DISPLAY_SIZE = 512          # window width and height
SCALE = DISPLAY_SIZE // MINIMAP_SRC_W   # 4×
DOT_RADIUS = 5


class MinimapNode(Node):
    def __init__(self) -> None:
        super().__init__('sc2_minimap')

        sensor_qos = QoSProfile(
            depth=10,
            reliability=ReliabilityPolicy.BEST_EFFORT,
        )
        latched_qos = QoSProfile(
            depth=1,
            reliability=ReliabilityPolicy.RELIABLE,
            durability=DurabilityPolicy.TRANSIENT_LOCAL,
        )

        self.create_subscription(Image, '/sc2/minimap', self._on_minimap, sensor_qos)
        self.create_subscription(Point, '/sc2/camera_pos', self._on_cam_pos, sensor_qos)

        if _HAVE_GAME_INFO:
            self.create_subscription(GameInfo, '/sc2/game_info', self._on_game_info, latched_qos)

        self.frame_bytes: bytes = b''
        self.cam_x: float = 0.0
        self.cam_y: float = 0.0
        self.map_w: float = 1.0
        self.map_h: float = 1.0

    def _on_minimap(self, msg: Image) -> None:
        self.frame_bytes = bytes(msg.data)

    def _on_cam_pos(self, msg: Point) -> None:
        self.cam_x = msg.x
        self.cam_y = msg.y

    def _on_game_info(self, msg: 'GameInfo') -> None:
        if msg.playable_max.x > 0:
            self.map_w = msg.playable_max.x
        if msg.playable_max.y > 0:
            self.map_h = msg.playable_max.y


def main() -> None:
    rclpy.init()
    node = MinimapNode()

    spin_thread = threading.Thread(target=rclpy.spin, args=(node,), daemon=True)
    spin_thread.start()

    pygame.init()
    screen = pygame.display.set_mode((DISPLAY_SIZE, DISPLAY_SIZE))
    pygame.display.set_caption('SC2 — Minimap')
    clock = pygame.time.Clock()

    print('SC2 minimap ready — waiting for /sc2/minimap ...', flush=True)

    try:
        while rclpy.ok():
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    return
                if event.type == pygame.KEYDOWN and event.key == pygame.K_ESCAPE:
                    return

            data = node.frame_bytes
            expected = MINIMAP_SRC_W * MINIMAP_SRC_H * 3

            if len(data) == expected:
                src = pygame.image.frombuffer(data, (MINIMAP_SRC_W, MINIMAP_SRC_H), 'RGB')
                scaled = pygame.transform.scale(src, (DISPLAY_SIZE, DISPLAY_SIZE))
                screen.blit(scaled, (0, 0))

                # Camera dot — SC2 Y increases upward, pygame Y increases downward
                dot_x = int(node.cam_x / node.map_w * DISPLAY_SIZE)
                dot_y = int((1.0 - node.cam_y / node.map_h) * DISPLAY_SIZE)
                dot_x = max(DOT_RADIUS, min(DISPLAY_SIZE - DOT_RADIUS, dot_x))
                dot_y = max(DOT_RADIUS, min(DISPLAY_SIZE - DOT_RADIUS, dot_y))
                pygame.draw.circle(screen, (255, 50, 50), (dot_x, dot_y), DOT_RADIUS)
                pygame.draw.circle(screen, (255, 255, 255), (dot_x, dot_y), DOT_RADIUS, 1)

                pygame.display.flip()

            clock.tick(POLL_HZ)
    finally:
        pygame.quit()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
