#!/usr/bin/env python3
"""Read RGB render frames written by the ROS2 bridge and show them via pygame.

The bridge writes raw RGB bytes to /tmp/sc2-signals/frame.bin and the
frame dimensions (width,height) to /tmp/sc2-signals/frame_meta.txt.
This script runs in the sc2-server container which already has X11 access."""
import os
import sys
import time

import pygame

FRAME_FILE = '/tmp/sc2-signals/frame.bin'
META_FILE  = '/tmp/sc2-signals/frame_meta.txt'
POLL_HZ    = 30

pygame.init()
screen = None
W = H = 0

print('SC2 display ready — waiting for bridge to start rendering ...', flush=True)

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit(0)

    # Read frame dimensions written by the bridge
    if os.path.exists(META_FILE):
        try:
            w_str, h_str = open(META_FILE).read().strip().split(',')
            new_w, new_h = int(w_str), int(h_str)
            if (new_w, new_h) != (W, H) and new_w > 0 and new_h > 0:
                W, H = new_w, new_h
                screen = pygame.display.set_mode((W, H))
                pygame.display.set_caption('SC2 — ROS2 Bridge View')
                print(f'Display window opened at {W}x{H}', flush=True)
        except Exception:
            pass

    if screen is not None and os.path.exists(FRAME_FILE):
        try:
            data = open(FRAME_FILE, 'rb').read()
            expected = W * H * 3
            if len(data) == expected:
                surf = pygame.image.frombuffer(data, (W, H), 'RGB')
                screen.blit(surf, (0, 0))
                pygame.display.flip()
        except Exception:
            pass

    time.sleep(1 / POLL_HZ)
