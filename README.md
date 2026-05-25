# ROS2 StarCraft II Bridge

Bridge a ROS2 Humble system to a standalone StarCraft II API server so individual
SC2 units can be treated like commandable robot agents.

The project is organized as a ROS2 workspace:

```text
ros2_ws/src/sc2_bridge_interfaces  # ROS messages, services, actions
ros2_ws/src/sc2_bridge             # rclpy bridge node and demo tooling
```

## Containers

The compose file runs two services on the `sc2net` bridge network:

- `pysc2-docker`: StarCraft II API server image listening on port `8167`
- `ros2-bridge`: ROS2 Humble development/build image for the workspace

Start the stack:

```bash
docker compose up --build
```

Run the bridge manually from the ROS2 container:

```bash
docker compose run --rm ros2-bridge bash
colcon build --symlink-install
source install/setup.bash
ros2 launch sc2_bridge sc2_bridge.launch.py
```

The bridge defaults to `SC2_HOST=pysc2-docker`, `SC2_PORT=8167`, and the sandbox map
`/StarCraftII/maps/Flat482Spawns.SC2Map` from the `pysc2-docker` image.

## Useful ROS Interfaces

- `/sc2/units` (`sc2_bridge_interfaces/msg/UnitStateArray`)
- `/sc2/contacts` (`sc2_bridge_interfaces/msg/UnitStateArray`)
- `/sc2/marks` (`sc2_bridge_interfaces/msg/ContactMarkArray`, transient local)
- `/sc2/mark_markers` (`visualization_msgs/msg/MarkerArray`)
- `/sc2/game_info` (`sc2_bridge_interfaces/msg/GameInfo`, transient local)
- `/sc2/spawn_units` (`sc2_bridge_interfaces/srv/SpawnUnits`)
- `/sc2/kill_units` (`sc2_bridge_interfaces/srv/KillUnits`)
- `/<alias>/state` (`sc2_bridge_interfaces/msg/UnitState`)
- `/<alias>/move` (`sc2_bridge_interfaces/action/Move`)
- `/<alias>/attack` (`sc2_bridge_interfaces/action/Attack`)

Aliases are assigned monotonically (`unit_0`, `unit_1`, ...) when self-units are first
observed and are never reused.

## Moving a Unit

Each self-unit gets a Move action server at `/<alias>/move`.

**Action type:** `sc2_bridge_interfaces/action/Move`

```
# Goal
geometry_msgs/Point target   # world-space destination (x, y, z)
bool queue                   # queue behind current orders
float32 tolerance            # arrival radius in map units (0 = node default: 0.5)
---
# Result
bool success
string message
---
# Feedback
float32 distance_remaining
bool arrived
```

From the CLI:

```bash
ros2 action send_goal /unit_0/move sc2_bridge_interfaces/action/Move \
  "{target: {x: 42.0, y: 42.0, z: 0.0}, queue: false, tolerance: 0.5}"
```

From Python:

```python
from rclpy.action import ActionClient
from sc2_bridge_interfaces.action import Move

client = ActionClient(node, Move, "/unit_0/move")
client.wait_for_server()

goal = Move.Goal()
goal.target.x = 42.0
goal.target.y = 42.0
goal.target.z = 0.0
goal.queue = False
goal.tolerance = 0.5

future = client.send_goal_async(goal)
```

The action publishes feedback every tick until `distance_remaining <= tolerance`, then
succeeds. It aborts if the unit dies or ROS shuts down. See `swarm_demo.py` for a complete
example that spawns units and fans them into a formation.

## Attacking with a Unit

Each self-unit gets an Attack action server at `/<alias>/attack`.

**Action type:** `sc2_bridge_interfaces/action/Attack`

```
# Goal
uint64 target_tag            # tag of the enemy unit to attack (0 = use target_point)
geometry_msgs/Point target_point  # world-space attack-move position (used when target_tag == 0)
bool queue                   # queue behind current orders
---
# Result
bool success
string message
---
# Feedback
float32 distance_to_target
bool engaged                 # true when the unit has active orders
```

Attack by unit tag (tracks a specific enemy):

```bash
ros2 action send_goal /unit_0/attack sc2_bridge_interfaces/action/Attack \
  "{target_tag: 4294967298, target_point: {x: 0.0, y: 0.0, z: 0.0}, queue: false}"
```

Attack-move to a position (when you don't have a specific tag):

```bash
ros2 action send_goal /unit_0/attack sc2_bridge_interfaces/action/Attack \
  "{target_tag: 0, target_point: {x: 55.0, y: 55.0, z: 0.0}, queue: false}"
```

From Python:

```python
from rclpy.action import ActionClient
from sc2_bridge_interfaces.action import Attack

client = ActionClient(node, Attack, "/unit_0/attack")
client.wait_for_server()

# Attack a specific unit by tag
goal = Attack.Goal()
goal.target_tag = 4294967298   # tag from /sc2/contacts
goal.queue = False
future = client.send_goal_async(goal)

# — or — attack-move to a point
goal = Attack.Goal()
goal.target_tag = 0
goal.target_point.x = 55.0
goal.target_point.y = 55.0
goal.target_point.z = 0.0
goal.queue = False
future = client.send_goal_async(goal)
```

When `target_tag > 0` the action succeeds once the target is no longer alive or visible.
When using `target_point` the action runs indefinitely until canceled or the unit dies.
Enemy unit tags are available on the `/sc2/contacts` topic.

## Tests

From the host, use the containerized ROS environment:

```bash
docker compose run --rm ros2-bridge colcon test --event-handlers console_direct+
```

The unit tests cover alias lifecycle, persistent discovery marks, and the serialized
SC2 client lock behavior. Live SC2 integration still requires a working SC2 server and map
inside the `pysc2-docker` image.
