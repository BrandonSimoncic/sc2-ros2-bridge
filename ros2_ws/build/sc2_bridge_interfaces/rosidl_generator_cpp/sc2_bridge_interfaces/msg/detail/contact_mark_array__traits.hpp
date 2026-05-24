// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sc2_bridge_interfaces:msg/ContactMarkArray.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__MSG__DETAIL__CONTACT_MARK_ARRAY__TRAITS_HPP_
#define SC2_BRIDGE_INTERFACES__MSG__DETAIL__CONTACT_MARK_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sc2_bridge_interfaces/msg/detail/contact_mark_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'marks'
#include "sc2_bridge_interfaces/msg/detail/contact_mark__traits.hpp"

namespace sc2_bridge_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ContactMarkArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: marks
  {
    if (msg.marks.size() == 0) {
      out << "marks: []";
    } else {
      out << "marks: [";
      size_t pending_items = msg.marks.size();
      for (auto item : msg.marks) {
        to_flow_style_yaml(item, out);
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
  const ContactMarkArray & msg,
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

  // member: marks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.marks.size() == 0) {
      out << "marks: []\n";
    } else {
      out << "marks:\n";
      for (auto item : msg.marks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ContactMarkArray & msg, bool use_flow_style = false)
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
  const sc2_bridge_interfaces::msg::ContactMarkArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  sc2_bridge_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sc2_bridge_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const sc2_bridge_interfaces::msg::ContactMarkArray & msg)
{
  return sc2_bridge_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sc2_bridge_interfaces::msg::ContactMarkArray>()
{
  return "sc2_bridge_interfaces::msg::ContactMarkArray";
}

template<>
inline const char * name<sc2_bridge_interfaces::msg::ContactMarkArray>()
{
  return "sc2_bridge_interfaces/msg/ContactMarkArray";
}

template<>
struct has_fixed_size<sc2_bridge_interfaces::msg::ContactMarkArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sc2_bridge_interfaces::msg::ContactMarkArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sc2_bridge_interfaces::msg::ContactMarkArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SC2_BRIDGE_INTERFACES__MSG__DETAIL__CONTACT_MARK_ARRAY__TRAITS_HPP_
