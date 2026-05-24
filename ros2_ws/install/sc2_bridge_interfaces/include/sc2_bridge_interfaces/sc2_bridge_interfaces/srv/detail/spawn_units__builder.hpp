// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sc2_bridge_interfaces:srv/SpawnUnits.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__SRV__DETAIL__SPAWN_UNITS__BUILDER_HPP_
#define SC2_BRIDGE_INTERFACES__SRV__DETAIL__SPAWN_UNITS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sc2_bridge_interfaces/srv/detail/spawn_units__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sc2_bridge_interfaces
{

namespace srv
{

namespace builder
{

class Init_SpawnUnits_Request_positions
{
public:
  explicit Init_SpawnUnits_Request_positions(::sc2_bridge_interfaces::srv::SpawnUnits_Request & msg)
  : msg_(msg)
  {}
  ::sc2_bridge_interfaces::srv::SpawnUnits_Request positions(::sc2_bridge_interfaces::srv::SpawnUnits_Request::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sc2_bridge_interfaces::srv::SpawnUnits_Request msg_;
};

class Init_SpawnUnits_Request_owner
{
public:
  explicit Init_SpawnUnits_Request_owner(::sc2_bridge_interfaces::srv::SpawnUnits_Request & msg)
  : msg_(msg)
  {}
  Init_SpawnUnits_Request_positions owner(::sc2_bridge_interfaces::srv::SpawnUnits_Request::_owner_type arg)
  {
    msg_.owner = std::move(arg);
    return Init_SpawnUnits_Request_positions(msg_);
  }

private:
  ::sc2_bridge_interfaces::srv::SpawnUnits_Request msg_;
};

class Init_SpawnUnits_Request_unit_type
{
public:
  Init_SpawnUnits_Request_unit_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnUnits_Request_owner unit_type(::sc2_bridge_interfaces::srv::SpawnUnits_Request::_unit_type_type arg)
  {
    msg_.unit_type = std::move(arg);
    return Init_SpawnUnits_Request_owner(msg_);
  }

private:
  ::sc2_bridge_interfaces::srv::SpawnUnits_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sc2_bridge_interfaces::srv::SpawnUnits_Request>()
{
  return sc2_bridge_interfaces::srv::builder::Init_SpawnUnits_Request_unit_type();
}

}  // namespace sc2_bridge_interfaces


namespace sc2_bridge_interfaces
{

namespace srv
{

namespace builder
{

class Init_SpawnUnits_Response_message
{
public:
  explicit Init_SpawnUnits_Response_message(::sc2_bridge_interfaces::srv::SpawnUnits_Response & msg)
  : msg_(msg)
  {}
  ::sc2_bridge_interfaces::srv::SpawnUnits_Response message(::sc2_bridge_interfaces::srv::SpawnUnits_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sc2_bridge_interfaces::srv::SpawnUnits_Response msg_;
};

class Init_SpawnUnits_Response_success
{
public:
  explicit Init_SpawnUnits_Response_success(::sc2_bridge_interfaces::srv::SpawnUnits_Response & msg)
  : msg_(msg)
  {}
  Init_SpawnUnits_Response_message success(::sc2_bridge_interfaces::srv::SpawnUnits_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SpawnUnits_Response_message(msg_);
  }

private:
  ::sc2_bridge_interfaces::srv::SpawnUnits_Response msg_;
};

class Init_SpawnUnits_Response_tags
{
public:
  explicit Init_SpawnUnits_Response_tags(::sc2_bridge_interfaces::srv::SpawnUnits_Response & msg)
  : msg_(msg)
  {}
  Init_SpawnUnits_Response_success tags(::sc2_bridge_interfaces::srv::SpawnUnits_Response::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return Init_SpawnUnits_Response_success(msg_);
  }

private:
  ::sc2_bridge_interfaces::srv::SpawnUnits_Response msg_;
};

class Init_SpawnUnits_Response_aliases
{
public:
  Init_SpawnUnits_Response_aliases()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnUnits_Response_tags aliases(::sc2_bridge_interfaces::srv::SpawnUnits_Response::_aliases_type arg)
  {
    msg_.aliases = std::move(arg);
    return Init_SpawnUnits_Response_tags(msg_);
  }

private:
  ::sc2_bridge_interfaces::srv::SpawnUnits_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sc2_bridge_interfaces::srv::SpawnUnits_Response>()
{
  return sc2_bridge_interfaces::srv::builder::Init_SpawnUnits_Response_aliases();
}

}  // namespace sc2_bridge_interfaces

#endif  // SC2_BRIDGE_INTERFACES__SRV__DETAIL__SPAWN_UNITS__BUILDER_HPP_
