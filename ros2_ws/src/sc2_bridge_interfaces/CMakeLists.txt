cmake_minimum_required(VERSION 3.8)
project(sc2_bridge_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(std_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/ContactMark.msg"
  "msg/ContactMarkArray.msg"
  "msg/GameInfo.msg"
  "msg/UnitState.msg"
  "msg/UnitStateArray.msg"
  "srv/KillUnits.srv"
  "srv/SpawnUnits.srv"
  "action/Attack.action"
  "action/Move.action"
  DEPENDENCIES builtin_interfaces geometry_msgs std_msgs
)

ament_export_dependencies(rosidl_default_runtime)
ament_package()
