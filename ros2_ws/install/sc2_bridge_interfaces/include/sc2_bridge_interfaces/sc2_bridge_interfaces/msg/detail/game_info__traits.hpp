// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sc2_bridge_interfaces:msg/GameInfo.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__MSG__DETAIL__GAME_INFO__TRAITS_HPP_
#define SC2_BRIDGE_INTERFACES__MSG__DETAIL__GAME_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sc2_bridge_interfaces/msg/detail/game_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'playable_min'
// Member 'playable_max'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace sc2_bridge_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const GameInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: map_name
  {
    out << "map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.map_name, out);
    out << ", ";
  }

  // member: game_version
  {
    out << "game_version: ";
    rosidl_generator_traits::value_to_yaml(msg.game_version, out);
    out << ", ";
  }

  // member: realtime
  {
    out << "realtime: ";
    rosidl_generator_traits::value_to_yaml(msg.realtime, out);
    out << ", ";
  }

  // member: world_frame_id
  {
    out << "world_frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.world_frame_id, out);
    out << ", ";
  }

  // member: playable_min
  {
    out << "playable_min: ";
    to_flow_style_yaml(msg.playable_min, out);
    out << ", ";
  }

  // member: playable_max
  {
    out << "playable_max: ";
    to_flow_style_yaml(msg.playable_max, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GameInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: map_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.map_name, out);
    out << "\n";
  }

  // member: game_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "game_version: ";
    rosidl_generator_traits::value_to_yaml(msg.game_version, out);
    out << "\n";
  }

  // member: realtime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "realtime: ";
    rosidl_generator_traits::value_to_yaml(msg.realtime, out);
    out << "\n";
  }

  // member: world_frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "world_frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.world_frame_id, out);
    out << "\n";
  }

  // member: playable_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "playable_min:\n";
    to_block_style_yaml(msg.playable_min, out, indentation + 2);
  }

  // member: playable_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "playable_max:\n";
    to_block_style_yaml(msg.playable_max, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GameInfo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sc2_bridge_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use sc2_bridge_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sc2_bridge_interfaces::msg::GameInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  sc2_bridge_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sc2_bridge_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const sc2_bridge_interfaces::msg::GameInfo & msg)
{
  return sc2_bridge_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sc2_bridge_interfaces::msg::GameInfo>()
{
  return "sc2_bridge_interfaces::msg::GameInfo";
}

template<>
inline const char * name<sc2_bridge_interfaces::msg::GameInfo>()
{
  return "sc2_bridge_interfaces/msg/GameInfo";
}

template<>
struct has_fixed_size<sc2_bridge_interfaces::msg::GameInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sc2_bridge_interfaces::msg::GameInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sc2_bridge_interfaces::msg::GameInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SC2_BRIDGE_INTERFACES__MSG__DETAIL__GAME_INFO__TRAITS_HPP_
