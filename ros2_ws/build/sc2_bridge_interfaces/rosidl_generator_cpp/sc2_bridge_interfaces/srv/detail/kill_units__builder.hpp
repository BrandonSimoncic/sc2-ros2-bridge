// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sc2_bridge_interfaces:srv/KillUnits.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__SRV__DETAIL__KILL_UNITS__BUILDER_HPP_
#define SC2_BRIDGE_INTERFACES__SRV__DETAIL__KILL_UNITS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sc2_bridge_interfaces/srv/detail/kill_units__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sc2_bridge_interfaces
{

namespace srv
{

namespace builder
{

class Init_KillUnits_Request_aliases
{
public:
  Init_KillUnits_Request_aliases()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sc2_bridge_interfaces::srv::KillUnits_Request aliases(::sc2_bridge_interfaces::srv::KillUnits_Request::_aliases_type arg)
  {
    msg_.aliases = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sc2_bridge_interfaces::srv::KillUnits_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sc2_bridge_interfaces::srv::KillUnits_Request>()
{
  return sc2_bridge_interfaces::srv::builder::Init_KillUnits_Request_aliases();
}

}  // namespace sc2_bridge_interfaces


namespace sc2_bridge_interfaces
{

namespace srv
{

namespace builder
{

class Init_KillUnits_Response_message
{
public:
  explicit Init_KillUnits_Response_message(::sc2_bridge_interfaces::srv::KillUnits_Response & msg)
  : msg_(msg)
  {}
  ::sc2_bridge_interfaces::srv::KillUnits_Response message(::sc2_bridge_interfaces::srv::KillUnits_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sc2_bridge_interfaces::srv::KillUnits_Response msg_;
};

class Init_KillUnits_Response_success
{
public:
  Init_KillUnits_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KillUnits_Response_message success(::sc2_bridge_interfaces::srv::KillUnits_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_KillUnits_Response_message(msg_);
  }

private:
  ::sc2_bridge_interfaces::srv::KillUnits_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sc2_bridge_interfaces::srv::KillUnits_Response>()
{
  return sc2_bridge_interfaces::srv::builder::Init_KillUnits_Response_success();
}

}  // namespace sc2_bridge_interfaces

#endif  // SC2_BRIDGE_INTERFACES__SRV__DETAIL__KILL_UNITS__BUILDER_HPP_
