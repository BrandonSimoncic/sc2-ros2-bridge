#!/usr/bin/env python3
"""Start SC2 as an API server with native X11 window for the ROS2 bridge.

The bridge is the sole WebSocket client (SC2 only allows one connection).
SC2 renders its native game window via X11 once the bridge joins a game.
No pysc2 pygame renderer is used — SC2's own window is the display."""
import os
import sys
import time

os.environ.setdefault('SC2PATH', '/root/StarCraftII/')
os.environ.setdefault('PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION', 'python')

sys.argv = ['launch_sc2']
from absl import flags
flags.FLAGS(sys.argv)

from pysc2 import run_configs

cfg = run_configs.get()

# want_rgb=True: pysc2 adds -eglpath so SC2 initialises EGL for offscreen
# rendering.  The bridge's join request will request 1024x768 RGB frames,
# which SC2 will render to EGL and return via the WebSocket.  Those frames
# are written to /tmp/sc2-signals/frame.bin by the bridge so the display
# script running in this container can show them.
# connect=False: the bridge will be the sole WebSocket client.
with cfg.start(want_rgb=True, host='0.0.0.0', port=8167, connect=False):
    print('SC2 running on 0.0.0.0:8167 — waiting for bridge to connect', flush=True)
    while True:
        time.sleep(5)
