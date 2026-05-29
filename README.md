# ROS2 StarCraft II Bridge

Bridge a ROS2 Humble system to a StarCraft II process so individual SC2 units
can be treated as commandable robot agents via ROS2 actions, services, and topics.

## Architecture

**Critical constraint:** SC2 only allows **one WebSocket connection per process**.
The ROS2 bridge is the sole SC2 API client — there is no separate renderer process
connected to SC2.

```
sc2-server container
├── launch_sc2.py  →  SC2 process (EGL offscreen rendering, port 8167)
└── display_frames.py  →  pygame window (reads frame.bin from shared volume)
                                ↑
sc2-bridge container            │  /tmp/sc2-signals/ (Docker bind-mount)
└── bridge_node.py  ──WebSocket──→  SC2
    • creates game (Interloper LE, Terran vs VeryEasy computer)
    • joins as sole participant
    • fog of war OFF, god mode ON
    • requests 1024×768 RGB render frames
    • writes frame.bin atomically → display_frames.py shows them
    • publishes ROS2 topics / serves actions
```

### Signal files (`./sc2-signals/`)

| File | Written by | Read by | Purpose |
|------|-----------|---------|---------|
| `frame.bin` | bridge | display_frames.py | Latest 1024×768 RGB frame |
| `frame_meta.txt` | bridge | display_frames.py | Frame dimensions `w,h` |

These are cleaned automatically on bridge startup.

## Quick start

```bash
docker compose up
```

SC2 starts, the bridge connects, creates the game, and a pygame window opens
showing the game. Allow ~15 s for the full startup sequence.

## Entering the bridge container

```bash
docker exec -it sc2-bridge bash
source /home/ros/ws/ros2_ws/install/setup.bash
```

All ROS2 commands below assume this environment.

## Unit Ownership

| `alliance` value | `owner` value | Who |
|-----------------|--------------|-----|
| `1` — SELF | `1` | **You** (bridge/Terran). These get aliases `unit_0`, `unit_1`, … |
| `4` — ENEMY | `2` | Computer opponent |
| `3` — NEUTRAL | `16` | Minerals, gas geysers, destructibles |

Check your units:
```bash
ros2 topic echo /sc2/units --once | grep -A8 "alias: unit_0"
```

## Map

**Interloper LE** — playable area `(10, 14)` → `(142, 154)` in world coordinates.
Terran starts in one corner; the VeryEasy computer starts in the opposite corner.

## ROS2 Interfaces

### Topics

| Topic | Type | Notes |
|-------|------|-------|
| `/sc2/units` | `sc2_bridge_interfaces/msg/UnitStateArray` | **Your units only** (all have aliases) |
| `/sc2/contacts` | `sc2_bridge_interfaces/msg/UnitStateArray` | Visible enemy/neutral units |
| `/sc2/marks` | `sc2_bridge_interfaces/msg/ContactMarkArray` | Persistent contact marks (transient-local) |
| `/sc2/mark_markers` | `visualization_msgs/msg/MarkerArray` | RViz spheres for marks |
| `/sc2/game_info` | `sc2_bridge_interfaces/msg/GameInfo` | Map name, bounds, version (transient-local) |
| `/sc2/camera_target` | `geometry_msgs/msg/Point` | **Publish here to move the camera** |
| `/<alias>/state` | `sc2_bridge_interfaces/msg/UnitState` | Per-unit state |

### Services

| Service | Type | Notes |
|---------|------|-------|
| `/sc2/spawn_units` | `sc2_bridge_interfaces/srv/SpawnUnits` | Debug-spawn units at positions |
| `/sc2/kill_units` | `sc2_bridge_interfaces/srv/KillUnits` | Kill units by alias |
| `/sc2/restart_game` | `std_srvs/srv/Trigger` | Restart game, reset bridge state |

### Actions

| Action | Type | Notes |
|--------|------|-------|
| `/<alias>/move` | `sc2_bridge_interfaces/action/Move` | Move unit to world position |
| `/<alias>/attack` | `sc2_bridge_interfaces/action/Attack` | Attack unit tag or position |

## Camera Control

The camera is **fully manual** — publish a world-coordinate point:

```bash
# Move to map center
ros2 topic pub --once /sc2/camera_target geometry_msgs/msg/Point \
  "{x: 76.0, y: 84.0, z: 0.0}"

# Move to a known unit position (read from /sc2/units first)
ros2 topic pub --once /sc2/camera_target geometry_msgs/msg/Point \
  "{x: 59.0, y: 52.5, z: 0.0}"
```

Coordinates are SC2 world units. The minimap normalization uses the full map
size (from `RequestGameInfo.start_raw.map_size`) so values outside the playable
area are clamped to valid minimap pixels.

## Moving a Unit

```bash
ros2 action send_goal /unit_0/move sc2_bridge_interfaces/action/Move \
  "{target: {x: 50.0, y: 50.0, z: 0.0}, queue: false, tolerance: 1.0}"
```

The action publishes feedback (`distance_remaining`, `arrived`) each tick and
succeeds when `distance_remaining <= tolerance`. It aborts if the unit dies.

**Action definition:**
```
# Goal
geometry_msgs/Point target
bool queue
float32 tolerance          # 0 = node default (0.5 map units)
---
# Result
bool success
string message
---
# Feedback
float32 distance_remaining
bool arrived
```

## Attacking

By unit tag (tracks a specific enemy — get tags from `/sc2/contacts`):
```bash
ros2 action send_goal /unit_0/attack sc2_bridge_interfaces/action/Attack \
  "{target_tag: <tag>, target_point: {x: 0.0, y: 0.0, z: 0.0}, queue: false}"
```

Attack-move to a position:
```bash
ros2 action send_goal /unit_0/attack sc2_bridge_interfaces/action/Attack \
  "{target_tag: 0, target_point: {x: 55.0, y: 55.0, z: 0.0}, queue: false}"
```

## Game Services

Restart the game (resets SC2 state + bridge aliases):
```bash
ros2 service call /sc2/restart_game std_srvs/srv/Trigger {}
```

Spawn units at positions (debug):
```bash
ros2 service call /sc2/spawn_units sc2_bridge_interfaces/srv/SpawnUnits \
  "{unit_type: 54, owner: 1, positions: [{x: 70.0, y: 70.0, z: 0.0}]}"
```

## Configuration (`bridge.yaml`)

Key parameters:

| Parameter | Default | Notes |
|-----------|---------|-------|
| `join_only` | `false` | Bridge creates and joins the game |
| `computer_opponent` | `true` | VeryEasy AI opponent |
| `realtime` | `true` | Game runs at real time, no step calls |
| `god_mode` | `true` | Enables SC2 debug god mode |
| `publish_rate_hz` | `10.0` | Observation / topic publish rate |
| `sc2_retry_timeout_sec` | `120.0` | How long to wait for SC2 on startup |
| `map_name` | `/root/StarCraftII/Maps/InterloperTest.SC2Map` | Map loaded by bridge |

Fog of war is disabled at game creation (`disable_fog=True`) and cannot be
toggled at runtime.

## Display

The pygame window is rendered from SC2's EGL offscreen frames:

- SC2 renders to an EGL surface at 1024×768
- The bridge requests these frames via `join.options.render`
- Frames are written atomically to `./sc2-signals/frame.bin`
- `display_frames.py` (sc2-server container) polls at 30 Hz and blits via pygame

SDL MIT-SHM is disabled (`SDL_VIDEO_X11_MITSHM=0`) to prevent X11 shared-memory
errors when running in Docker.

## Tests

```bash
docker compose run --rm ros2-bridge colcon test --event-handlers console_direct+
```

Unit tests cover alias lifecycle, discovery marks, and SC2 client lock behavior.
Live integration requires a running SC2 server.
