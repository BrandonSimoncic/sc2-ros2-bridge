// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sc2_bridge_interfaces:msg/UnitState.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__MSG__DETAIL__UNIT_STATE__TRAITS_HPP_
#define SC2_BRIDGE_INTERFACES__MSG__DETAIL__UNIT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sc2_bridge_interfaces/msg/detail/unit_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace sc2_bridge_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const UnitState & msg,
  std::ostream & out)
{
  out << "{";
  // member: tag
  {
    out << "tag: ";
    rosidl_generator_traits::value_to_yaml(msg.tag, out);
    out << ", ";
  }

  // member: alias
  {
    out << "alias: ";
    rosidl_generator_traits::value_to_yaml(msg.alias, out);
    out << ", ";
  }

  // member: unit_type
  {
    out << "unit_type: ";
    rosidl_generator_traits::value_to_yaml(msg.unit_type, out);
    out << ", ";
  }

  // member: owner
  {
    out << "owner: ";
    rosidl_generator_traits::value_to_yaml(msg.owner, out);
    out << ", ";
  }

  // member: alliance
  {
    out << "alliance: ";
    rosidl_generator_traits::value_to_yaml(msg.alliance, out);
    out << ", ";
  }

  // member: display_type
  {
    out << "display_type: ";
    rosidl_generator_traits::value_to_yaml(msg.display_type, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: facing
  {
    out << "facing: ";
    rosidl_generator_traits::value_to_yaml(msg.facing, out);
    out << ", ";
  }

  // member: radius
  {
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << ", ";
  }

  // member: health
  {
    out << "health: ";
    rosidl_generator_traits::value_to_yaml(msg.health, out);
    out << ", ";
  }

  // member: health_max
  {
    out << "health_max: ";
    rosidl_generator_traits::value_to_yaml(msg.health_max, out);
    out << ", ";
  }

  // member: energy
  {
    out << "energy: ";
    rosidl_generator_traits::value_to_yaml(msg.energy, out);
    out << ", ";
  }

  // member: energy_max
  {
    out << "energy_max: ";
    rosidl_generator_traits::value_to_yaml(msg.energy_max, out);
    out << ", ";
  }

  // member: is_alive
  {
    out << "is_alive: ";
    rosidl_generator_traits::value_to_yaml(msg.is_alive, out);
    out << ", ";
  }

  // member: order_ability_ids
  {
    if (msg.order_ability_ids.size() == 0) {
      out << "order_ability_ids: []";
    } else {
      out << "order_ability_ids: [";
      size_t pending_items = msg.order_ability_ids.size();
      for (auto item : msg.order_ability_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UnitState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tag: ";
    rosidl_generator_traits::value_to_yaml(msg.tag, out);
    out << "\n";
  }

  // member: alias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alias: ";
    rosidl_generator_traits::value_to_yaml(msg.alias, out);
    out << "\n";
  }

  // member: unit_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unit_type: ";
    rosidl_generator_traits::value_to_yaml(msg.unit_type, out);
    out << "\n";
  }

  // member: owner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "owner: ";
    rosidl_generator_traits::value_to_yaml(msg.owner, out);
    out << "\n";
  }

  // member: alliance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alliance: ";
    rosidl_generator_traits::value_to_yaml(msg.alliance, out);
    out << "\n";
  }

  // member: display_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "display_type: ";
    rosidl_generator_traits::value_to_yaml(msg.display_type, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: facing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "facing: ";
    rosidl_generator_traits::value_to_yaml(msg.facing, out);
    out << "\n";
  }

  // member: radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << "\n";
  }

  // member: health
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "health: ";
    rosidl_generator_traits::value_to_yaml(msg.health, out);
    out << "\n";
  }

  // member: health_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "health_max: ";
    rosidl_generator_traits::value_to_yaml(msg.health_max, out);
    out << "\n";
  }

  // member: energy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "energy: ";
    rosidl_generator_traits::value_to_yaml(msg.energy, out);
    out << "\n";
  }

  // member: energy_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "energy_max: ";
    rosidl_generator_traits::value_to_yaml(msg.energy_max, out);
    out << "\n";
  }

  // member: is_alive
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_alive: ";
    rosidl_generator_traits::value_to_yaml(msg.is_alive, out);
    out << "\n";
  }

  // member: order_ability_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.order_ability_ids.size() == 0) {
      out << "order_ability_ids: []\n";
    } else {
      out << "order_ability_ids:\n";
      for (auto item : msg.order_ability_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UnitState & msg, bool use_flow_style = false)
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
  const sc2_bridge_interfaces::msg::UnitState & msg,
  std::ostream & out, size_t indentation = 0)
{
  sc2_bridge_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sc2_bridge_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const sc2_bridge_interfaces::msg::UnitState & msg)
{
  return sc2_bridge_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sc2_bridge_interfaces::msg::UnitState>()
{
  return "sc2_bridge_interfaces::msg::UnitState";
}

template<>
inline const char * name<sc2_bridge_interfaces::msg::UnitState>()
{
  return "sc2_bridge_interfaces/msg/UnitState";
}

template<>
struct has_fixed_size<sc2_bridge_interfaces::msg::UnitState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sc2_bridge_interfaces::msg::UnitState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sc2_bridge_interfaces::msg::UnitState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SC2_BRIDGE_INTERFACES__MSG__DETAIL__UNIT_STATE__TRAITS_HPP_
