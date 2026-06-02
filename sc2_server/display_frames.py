#!/usr/bin/env python3
"""SC2 main-view display: subscribes to /sc2/render (sensor_msgs/Image) and
renders it via pygame. WASD / arrow keys publish /sc2/camera_target to scroll
the camera. rclpy spins in a daemon thread; pygame runs on the main thread."""
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
CAM_SPEED = 15.0       # world units per second while key is held
CAM_PUBLISH_HZ = 10.0  # max camera_target publishes per second

# Unit direction vectors; step is scaled by CAM_SPEED / POLL_HZ each frame.
_MOVE_KEYS = {
    pygame.K_w:     ( 0.0, +1.0),
    pygame.K_UP:    ( 0.0, +1.0),
    pygame.K_s:     ( 0.0, -1.0),
    pygame.K_DOWN:  ( 0.0, -1.0),
    pygame.K_a:     (-1.0,  0.0),
    pygame.K_LEFT:  (-1.0,  0.0),
    pygame.K_d:     (+1.0,  0.0),
    pygame.K_RIGHT: (+1.0,  0.0),
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

        if _HAVE_GAME_INFO:
            self.create_subscription(GameInfo, '/sc2/game_info', self._on_game_info, latched_qos)

        # Shared state — written by spin thread, read by pygame thread.
        # cam_x/cam_y is the display node's own target; never overwritten by
        # /sc2/camera_pos feedback to avoid a feedback-loop that snaps the
        # position back before SC2 has processed the move command.
        self.frame_bytes: bytes = b''
        self.frame_w: int = 0
        self.frame_h: int = 0
        self.cam_x: float = 32.0
        self.cam_y: float = 32.0
        self.map_w: float = 64.0
        self.map_h: float = 64.0
        self._next_cam_pub: float = 0.0

    def _on_render(self, msg: Image) -> None:
        self.frame_bytes = bytes(msg.data)
        self.frame_w = msg.width
        self.frame_h = msg.height

    def _on_game_info(self, msg: 'GameInfo') -> None:
        if msg.playable_max.x > 0:
            self.map_w = msg.playable_max.x
        if msg.playable_max.y > 0:
            self.map_h = msg.playable_max.y

    def move_camera(self, dx: float, dy: float) -> None:
        self.cam_x = max(0.0, min(self.map_w, self.cam_x + dx))
        self.cam_y = max(0.0, min(self.map_h, self.cam_y + dy))
        # Rate-limit publishes to CAM_PUBLISH_HZ so the bridge's SC2 client
        # isn't flooded with blocking network calls when keys are held.
        now = time.monotonic()
        if now < self._next_cam_pub:
            return
        self._next_cam_pub = now + 1.0 / CAM_PUBLISH_HZ
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
                if event.type == pygame.KEYDOWN and event.key == pygame.K_ESCAPE:
                    return

            # Continuous movement while keys are held.
            keys = pygame.key.get_pressed()
            dx, dy = 0.0, 0.0
            for key, (kx, ky) in _MOVE_KEYS.items():
                if keys[key]:
                    dx += kx
                    dy += ky
            if dx != 0.0 or dy != 0.0:
                step = CAM_SPEED / POLL_HZ
                node.move_camera(dx * step, dy * step)

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
