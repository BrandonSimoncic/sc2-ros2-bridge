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

- `sc2-server`: StarCraft II API server image (`alkurbatov/sc2`) listening on port `8167`
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

The bridge defaults to `SC2_HOST=sc2-server`, `SC2_PORT=8167`, and the sandbox map
`/StarCraftII/maps/Flat482Spawns.SC2Map` from the `alkurbatov/sc2` image.

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

## Tests

From the host, use the containerized ROS environment:

```bash
docker compose run --rm ros2-bridge colcon test --event-handlers console_direct+
```

The unit tests cover alias lifecycle, persistent discovery marks, and the serialized
SC2 client lock behavior. Live SC2 integration still requires a working SC2 server and map
inside the `sc2-server` image.
