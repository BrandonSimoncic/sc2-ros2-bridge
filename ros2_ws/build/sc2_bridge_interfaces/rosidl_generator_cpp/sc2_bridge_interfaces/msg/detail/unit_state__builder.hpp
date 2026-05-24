// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sc2_bridge_interfaces:msg/UnitState.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__MSG__DETAIL__UNIT_STATE__BUILDER_HPP_
#define SC2_BRIDGE_INTERFACES__MSG__DETAIL__UNIT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sc2_bridge_interfaces/msg/detail/unit_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sc2_bridge_interfaces
{

namespace msg
{

namespace builder
{

class Init_UnitState_order_ability_ids
{
public:
  explicit Init_UnitState_order_ability_ids(::sc2_bridge_interfaces::msg::UnitState & msg)
  : msg_(msg)
  {}
  ::sc2_bridge_interfaces::msg::UnitState order_ability_ids(::sc2_bridge_interfaces::msg::UnitState::_order_ability_ids_type arg)
  {
    msg_.order_ability_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::UnitState msg_;
};

class Init_UnitState_is_alive
{
public:
  explicit Init_UnitState_is_alive(::sc2_bridge_interfaces::msg::UnitState & msg)
  : msg_(msg)
  {}
  Init_UnitState_order_ability_ids is_alive(::sc2_bridge_interfaces::msg::UnitState::_is_alive_type arg)
  {
    msg_.is_alive = std::move(arg);
    return Init_UnitState_order_ability_ids(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::UnitState msg_;
};

class Init_UnitState_energy_max
{
public:
  explicit Init_UnitState_energy_max(::sc2_bridge_interfaces::msg::UnitState & msg)
  : msg_(msg)
  {}
  Init_UnitState_is_alive energy_max(::sc2_bridge_interfaces::msg::UnitState::_energy_max_type arg)
  {
    msg_.energy_max = std::move(arg);
    return Init_UnitState_is_alive(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::UnitState msg_;
};

class Init_UnitState_energy
{
public:
  explicit Init_UnitState_energy(::sc2_bridge_interfaces::msg::UnitState & msg)
  : msg_(msg)
  {}
  Init_UnitState_energy_max energy(::sc2_bridge_interfaces::msg::UnitState::_energy_type arg)
  {
    msg_.energy = std::move(arg);
    return Init_UnitState_energy_max(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::UnitState msg_;
};

class Init_UnitState_health_max
{
public:
  explicit Init_UnitState_health_max(::sc2_bridge_interfaces::msg::UnitState & msg)
  : msg_(msg)
  {}
  Init_UnitState_energy health_max(::sc2_bridge_interfaces::msg::UnitState::_health_max_type arg)
  {
    msg_.health_max = std::move(arg);
    return Init_UnitState_energy(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::UnitState msg_;
};

class Init_UnitState_health
{
public:
  explicit Init_UnitState_health(::sc2_bridge_interfaces::msg::UnitState & msg)
  : msg_(msg)
  {}
  Init_UnitState_health_max health(::sc2_bridge_interfaces::msg::UnitState::_health_type arg)
  {
    msg_.health = std::move(arg);
    return Init_UnitState_health_max(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::UnitState msg_;
};

class Init_UnitState_radius
{
public:
  explicit Init_UnitState_radius(::sc2_bridge_interfaces::msg::UnitState & msg)
  : msg_(msg)
  {}
  Init_UnitState_health radius(::sc2_bridge_interfaces::msg::UnitState::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_UnitState_health(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::UnitState msg_;
};

class Init_UnitState_facing
{
public:
  explicit Init_UnitState_facing(::sc2_bridge_interfaces::msg::UnitState & msg)
  : msg_(msg)
  {}
  Init_UnitState_radius facing(::sc2_bridge_interfaces::msg::UnitState::_facing_type arg)
  {
    msg_.facing = std::move(arg);
    return Init_UnitState_radius(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::UnitState msg_;
};

class Init_UnitState_position
{
public:
  explicit Init_UnitState_position(::sc2_bridge_interfaces::msg::UnitState & msg)
  : msg_(msg)
  {}
  Init_UnitState_facing position(::sc2_bridge_interfaces::msg::UnitState::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_UnitState_facing(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::UnitState msg_;
};

class Init_UnitState_display_type
{
public:
  explicit Init_UnitState_display_type(::sc2_bridge_interfaces::msg::UnitState & msg)
  : msg_(msg)
  {}
  Init_UnitState_position display_type(::sc2_bridge_interfaces::msg::UnitState::_display_type_type arg)
  {
    msg_.display_type = std::move(arg);
    return Init_UnitState_position(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::UnitState msg_;
};

class Init_UnitState_alliance
{
public:
  explicit Init_UnitState_alliance(::sc2_bridge_interfaces::msg::UnitState & msg)
  : msg_(msg)
  {}
  Init_UnitState_display_type alliance(::sc2_bridge_interfaces::msg::UnitState::_alliance_type arg)
  {
    msg_.alliance = std::move(arg);
    return Init_UnitState_display_type(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::UnitState msg_;
};

class Init_UnitState_owner
{
public:
  explicit Init_UnitState_owner(::sc2_bridge_interfaces::msg::UnitState & msg)
  : msg_(msg)
  {}
  Init_UnitState_alliance owner(::sc2_bridge_interfaces::msg::UnitState::_owner_type arg)
  {
    msg_.owner = std::move(arg);
    return Init_UnitState_alliance(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::UnitState msg_;
};

class Init_UnitState_unit_type
{
public:
  explicit Init_UnitState_unit_type(::sc2_bridge_interfaces::msg::UnitState & msg)
  : msg_(msg)
  {}
  Init_UnitState_owner unit_type(::sc2_bridge_interfaces::msg::UnitState::_unit_type_type arg)
  {
    msg_.unit_type = std::move(arg);
    return Init_UnitState_owner(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::UnitState msg_;
};

class Init_UnitState_alias
{
public:
  explicit Init_UnitState_alias(::sc2_bridge_interfaces::msg::UnitState & msg)
  : msg_(msg)
  {}
  Init_UnitState_unit_type alias(::sc2_bridge_interfaces::msg::UnitState::_alias_type arg)
  {
    msg_.alias = std::move(arg);
    return Init_UnitState_unit_type(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::UnitState msg_;
};

class Init_UnitState_tag
{
public:
  Init_UnitState_tag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UnitState_alias tag(::sc2_bridge_interfaces::msg::UnitState::_tag_type arg)
  {
    msg_.tag = std::move(arg);
    return Init_UnitState_alias(msg_);
  }

private:
  ::sc2_bridge_interfaces::msg::UnitState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sc2_bridge_interfaces::msg::UnitState>()
{
  return sc2_bridge_interfaces::msg::builder::Init_UnitState_tag();
}

}  // namespace sc2_bridge_interfaces

#endif  // SC2_BRIDGE_INTERFACES__MSG__DETAIL__UNIT_STATE__BUILDER_HPP_
