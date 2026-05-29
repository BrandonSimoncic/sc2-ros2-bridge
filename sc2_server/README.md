# SC2 Server

Scripts that run inside the `pysc2` Docker image in the `sc2-server` container.

## Scripts

### `launch_sc2.py`

Starts SC2 as an API server with EGL offscreen rendering enabled (`want_rgb=True`).
Does **not** connect to SC2 — the ROS2 bridge is the sole WebSocket client.
Keeps SC2 alive indefinitely.

SC2 listens on `0.0.0.0:8167`.

### `display_frames.py`

Polls `./sc2-signals/frame.bin` at 30 Hz and displays the latest 1024×768 RGB frame
in a pygame window via X11. Opens the window once `frame_meta.txt` appears (written
by the bridge on first observation). The window title is **SC2 — ROS2 Bridge View**.

### `play_sc2.py`

Legacy script — kept for reference. Not used in the current compose setup.
Originally connected to SC2 as Player 1 with a pysc2 pygame renderer, but SC2 only
allows one WebSocket connection per process so this conflicted with the bridge.

## Why two scripts instead of one renderer?

SC2's API server accepts **exactly one WebSocket connection**. The bridge needs
that connection to create the game and control units. Rendering is therefore done
out-of-band: bridge → `frame.bin` → `display_frames.py` → pygame window.
