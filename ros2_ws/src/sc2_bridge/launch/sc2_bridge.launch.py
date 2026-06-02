from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    config_file = PathJoinSubstitution(
        [FindPackageShare("sc2_bridge"), "config", "bridge.yaml"]
    )

    return LaunchDescription(
        [
            DeclareLaunchArgument(
                "params_file",
                default_value=config_file,
                description="YAML file with sc2_bridge parameters",
            ),
            Node(
                package="sc2_bridge",
                executable="sc2_bridge_node",
                name="sc2_bridge",
                output="screen",
                parameters=[LaunchConfiguration("params_file")],
            ),
            Node(
                package="sc2_bridge",
                executable="sc2_display",
                name="sc2_display",
                output="screen",
            ),
            Node(
                package="sc2_bridge",
                executable="sc2_minimap",
                name="sc2_minimap",
                output="screen",
            ),
        ]
    )
