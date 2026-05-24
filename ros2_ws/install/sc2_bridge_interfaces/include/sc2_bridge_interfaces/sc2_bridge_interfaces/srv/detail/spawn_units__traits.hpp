// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sc2_bridge_interfaces:srv/SpawnUnits.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__SRV__DETAIL__SPAWN_UNITS__TRAITS_HPP_
#define SC2_BRIDGE_INTERFACES__SRV__DETAIL__SPAWN_UNITS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sc2_bridge_interfaces/srv/detail/spawn_units__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'positions'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace sc2_bridge_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SpawnUnits_Request & msg,
  std::ostream & out)
{
  out << "{";
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

  // member: positions
  {
    if (msg.positions.size() == 0) {
      out << "positions: []";
    } else {
      out << "positions: [";
      size_t pending_items = msg.positions.size();
      for (auto item : msg.positions) {
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
  const SpawnUnits_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.positions.size() == 0) {
      out << "positions: []\n";
    } else {
      out << "positions:\n";
      for (auto item : msg.positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpawnUnits_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace sc2_bridge_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use sc2_bridge_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sc2_bridge_interfaces::srv::SpawnUnits_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  sc2_bridge_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sc2_bridge_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const sc2_bridge_interfaces::srv::SpawnUnits_Request & msg)
{
  return sc2_bridge_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sc2_bridge_interfaces::srv::SpawnUnits_Request>()
{
  return "sc2_bridge_interfaces::srv::SpawnUnits_Request";
}

template<>
inline const char * name<sc2_bridge_interfaces::srv::SpawnUnits_Request>()
{
  return "sc2_bridge_interfaces/srv/SpawnUnits_Request";
}

template<>
struct has_fixed_size<sc2_bridge_interfaces::srv::SpawnUnits_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sc2_bridge_interfaces::srv::SpawnUnits_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sc2_bridge_interfaces::srv::SpawnUnits_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace sc2_bridge_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SpawnUnits_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: aliases
  {
    if (msg.aliases.size() == 0) {
      out << "aliases: []";
    } else {
      out << "aliases: [";
      size_t pending_items = msg.aliases.size();
      for (auto item : msg.aliases) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tags
  {
    if (msg.tags.size() == 0) {
      out << "tags: []";
    } else {
      out << "tags: [";
      size_t pending_items = msg.tags.size();
      for (auto item : msg.tags) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpawnUnits_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: aliases
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.aliases.size() == 0) {
      out << "aliases: []\n";
    } else {
      out << "aliases:\n";
      for (auto item : msg.aliases) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tags.size() == 0) {
      out << "tags: []\n";
    } else {
      out << "tags:\n";
      for (auto item : msg.tags) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpawnUnits_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace sc2_bridge_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use sc2_bridge_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sc2_bridge_interfaces::srv::SpawnUnits_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  sc2_bridge_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sc2_bridge_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const sc2_bridge_interfaces::srv::SpawnUnits_Response & msg)
{
  return sc2_bridge_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sc2_bridge_interfaces::srv::SpawnUnits_Response>()
{
  return "sc2_bridge_interfaces::srv::SpawnUnits_Response";
}

template<>
inline const char * name<sc2_bridge_interfaces::srv::SpawnUnits_Response>()
{
  return "sc2_bridge_interfaces/srv/SpawnUnits_Response";
}

template<>
struct has_fixed_size<sc2_bridge_interfaces::srv::SpawnUnits_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sc2_bridge_interfaces::srv::SpawnUnits_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sc2_bridge_interfaces::srv::SpawnUnits_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sc2_bridge_interfaces::srv::SpawnUnits>()
{
  return "sc2_bridge_interfaces::srv::SpawnUnits";
}

template<>
inline const char * name<sc2_bridge_interfaces::srv::SpawnUnits>()
{
  return "sc2_bridge_interfaces/srv/SpawnUnits";
}

template<>
struct has_fixed_size<sc2_bridge_interfaces::srv::SpawnUnits>
  : std::integral_constant<
    bool,
    has_fixed_size<sc2_bridge_interfaces::srv::SpawnUnits_Request>::value &&
    has_fixed_size<sc2_bridge_interfaces::srv::SpawnUnits_Response>::value
  >
{
};

template<>
struct has_bounded_size<sc2_bridge_interfaces::srv::SpawnUnits>
  : std::integral_constant<
    bool,
    has_bounded_size<sc2_bridge_interfaces::srv::SpawnUnits_Request>::value &&
    has_bounded_size<sc2_bridge_interfaces::srv::SpawnUnits_Response>::value
  >
{
};

template<>
struct is_service<sc2_bridge_interfaces::srv::SpawnUnits>
  : std::true_type
{
};

template<>
struct is_service_request<sc2_bridge_interfaces::srv::SpawnUnits_Request>
  : std::true_type
{
};

template<>
struct is_service_response<sc2_bridge_interfaces::srv::SpawnUnits_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SC2_BRIDGE_INTERFACES__SRV__DETAIL__SPAWN_UNITS__TRAITS_HPP_
