// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sc2_bridge_interfaces:msg/ContactMark.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__MSG__DETAIL__CONTACT_MARK__TRAITS_HPP_
#define SC2_BRIDGE_INTERFACES__MSG__DETAIL__CONTACT_MARK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sc2_bridge_interfaces/msg/detail/contact_mark__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'first_seen'
// Member 'last_seen'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace sc2_bridge_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ContactMark & msg,
  std::ostream & out)
{
  out << "{";
  // member: mark_id
  {
    out << "mark_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mark_id, out);
    out << ", ";
  }

  // member: tag
  {
    out << "tag: ";
    rosidl_generator_traits::value_to_yaml(msg.tag, out);
    out << ", ";
  }

  // member: unit_type
  {
    out << "unit_type: ";
    rosidl_generator_traits::value_to_yaml(msg.unit_type, out);
    out << ", ";
  }

  // member: alliance
  {
    out << "alliance: ";
    rosidl_generator_traits::value_to_yaml(msg.alliance, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: first_seen
  {
    out << "first_seen: ";
    to_flow_style_yaml(msg.first_seen, out);
    out << ", ";
  }

  // member: last_seen
  {
    out << "last_seen: ";
    to_flow_style_yaml(msg.last_seen, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ContactMark & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mark_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mark_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mark_id, out);
    out << "\n";
  }

  // member: tag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tag: ";
    rosidl_generator_traits::value_to_yaml(msg.tag, out);
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

  // member: alliance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alliance: ";
    rosidl_generator_traits::value_to_yaml(msg.alliance, out);
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

  // member: first_seen
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "first_seen:\n";
    to_block_style_yaml(msg.first_seen, out, indentation + 2);
  }

  // member: last_seen
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_seen:\n";
    to_block_style_yaml(msg.last_seen, out, indentation + 2);
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ContactMark & msg, bool use_flow_style = false)
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
  const sc2_bridge_interfaces::msg::ContactMark & msg,
  std::ostream & out, size_t indentation = 0)
{
  sc2_bridge_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sc2_bridge_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const sc2_bridge_interfaces::msg::ContactMark & msg)
{
  return sc2_bridge_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sc2_bridge_interfaces::msg::ContactMark>()
{
  return "sc2_bridge_interfaces::msg::ContactMark";
}

template<>
inline const char * name<sc2_bridge_interfaces::msg::ContactMark>()
{
  return "sc2_bridge_interfaces/msg/ContactMark";
}

template<>
struct has_fixed_size<sc2_bridge_interfaces::msg::ContactMark>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<sc2_bridge_interfaces::msg::ContactMark>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<sc2_bridge_interfaces::msg::ContactMark>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SC2_BRIDGE_INTERFACES__MSG__DETAIL__CONTACT_MARK__TRAITS_HPP_
