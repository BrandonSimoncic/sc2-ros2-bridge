// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sc2_bridge_interfaces:msg/UnitState.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__MSG__DETAIL__UNIT_STATE__STRUCT_HPP_
#define SC2_BRIDGE_INTERFACES__MSG__DETAIL__UNIT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sc2_bridge_interfaces__msg__UnitState __attribute__((deprecated))
#else
# define DEPRECATED__sc2_bridge_interfaces__msg__UnitState __declspec(deprecated)
#endif

namespace sc2_bridge_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UnitState_
{
  using Type = UnitState_<ContainerAllocator>;

  explicit UnitState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tag = 0ull;
      this->alias = "";
      this->unit_type = 0ul;
      this->owner = 0ul;
      this->alliance = 0;
      this->display_type = 0;
      this->facing = 0.0f;
      this->radius = 0.0f;
      this->health = 0.0f;
      this->health_max = 0.0f;
      this->energy = 0.0f;
      this->energy_max = 0.0f;
      this->is_alive = false;
    }
  }

  explicit UnitState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : alias(_alloc),
    position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tag = 0ull;
      this->alias = "";
      this->unit_type = 0ul;
      this->owner = 0ul;
      this->alliance = 0;
      this->display_type = 0;
      this->facing = 0.0f;
      this->radius = 0.0f;
      this->health = 0.0f;
      this->health_max = 0.0f;
      this->energy = 0.0f;
      this->energy_max = 0.0f;
      this->is_alive = false;
    }
  }

  // field types and members
  using _tag_type =
    uint64_t;
  _tag_type tag;
  using _alias_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _alias_type alias;
  using _unit_type_type =
    uint32_t;
  _unit_type_type unit_type;
  using _owner_type =
    uint32_t;
  _owner_type owner;
  using _alliance_type =
    uint8_t;
  _alliance_type alliance;
  using _display_type_type =
    uint8_t;
  _display_type_type display_type;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _facing_type =
    float;
  _facing_type facing;
  using _radius_type =
    float;
  _radius_type radius;
  using _health_type =
    float;
  _health_type health;
  using _health_max_type =
    float;
  _health_max_type health_max;
  using _energy_type =
    float;
  _energy_type energy;
  using _energy_max_type =
    float;
  _energy_max_type energy_max;
  using _is_alive_type =
    bool;
  _is_alive_type is_alive;
  using _order_ability_ids_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _order_ability_ids_type order_ability_ids;

  // setters for named parameter idiom
  Type & set__tag(
    const uint64_t & _arg)
  {
    this->tag = _arg;
    return *this;
  }
  Type & set__alias(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->alias = _arg;
    return *this;
  }
  Type & set__unit_type(
    const uint32_t & _arg)
  {
    this->unit_type = _arg;
    return *this;
  }
  Type & set__owner(
    const uint32_t & _arg)
  {
    this->owner = _arg;
    return *this;
  }
  Type & set__alliance(
    const uint8_t & _arg)
  {
    this->alliance = _arg;
    return *this;
  }
  Type & set__display_type(
    const uint8_t & _arg)
  {
    this->display_type = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__facing(
    const float & _arg)
  {
    this->facing = _arg;
    return *this;
  }
  Type & set__radius(
    const float & _arg)
  {
    this->radius = _arg;
    return *this;
  }
  Type & set__health(
    const float & _arg)
  {
    this->health = _arg;
    return *this;
  }
  Type & set__health_max(
    const float & _arg)
  {
    this->health_max = _arg;
    return *this;
  }
  Type & set__energy(
    const float & _arg)
  {
    this->energy = _arg;
    return *this;
  }
  Type & set__energy_max(
    const float & _arg)
  {
    this->energy_max = _arg;
    return *this;
  }
  Type & set__is_alive(
    const bool & _arg)
  {
    this->is_alive = _arg;
    return *this;
  }
  Type & set__order_ability_ids(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->order_ability_ids = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ALLIANCE_SELF =
    1u;
  static constexpr uint8_t ALLIANCE_ALLY =
    2u;
  static constexpr uint8_t ALLIANCE_NEUTRAL =
    3u;
  static constexpr uint8_t ALLIANCE_ENEMY =
    4u;
  static constexpr uint8_t DISPLAY_VISIBLE =
    1u;
  static constexpr uint8_t DISPLAY_SNAPSHOT =
    2u;
  static constexpr uint8_t DISPLAY_HIDDEN =
    3u;
  static constexpr uint8_t DISPLAY_PLACEHOLDER =
    4u;

  // pointer types
  using RawPtr =
    sc2_bridge_interfaces::msg::UnitState_<ContainerAllocator> *;
  using ConstRawPtr =
    const sc2_bridge_interfaces::msg::UnitState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sc2_bridge_interfaces::msg::UnitState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sc2_bridge_interfaces::msg::UnitState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sc2_bridge_interfaces::msg::UnitState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sc2_bridge_interfaces::msg::UnitState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sc2_bridge_interfaces::msg::UnitState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sc2_bridge_interfaces::msg::UnitState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sc2_bridge_interfaces::msg::UnitState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sc2_bridge_interfaces::msg::UnitState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sc2_bridge_interfaces__msg__UnitState
    std::shared_ptr<sc2_bridge_interfaces::msg::UnitState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sc2_bridge_interfaces__msg__UnitState
    std::shared_ptr<sc2_bridge_interfaces::msg::UnitState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UnitState_ & other) const
  {
    if (this->tag != other.tag) {
      return false;
    }
    if (this->alias != other.alias) {
      return false;
    }
    if (this->unit_type != other.unit_type) {
      return false;
    }
    if (this->owner != other.owner) {
      return false;
    }
    if (this->alliance != other.alliance) {
      return false;
    }
    if (this->display_type != other.display_type) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->facing != other.facing) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    if (this->health != other.health) {
      return false;
    }
    if (this->health_max != other.health_max) {
      return false;
    }
    if (this->energy != other.energy) {
      return false;
    }
    if (this->energy_max != other.energy_max) {
      return false;
    }
    if (this->is_alive != other.is_alive) {
      return false;
    }
    if (this->order_ability_ids != other.order_ability_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const UnitState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UnitState_

// alias to use template instance with default allocator
using UnitState =
  sc2_bridge_interfaces::msg::UnitState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UnitState_<ContainerAllocator>::ALLIANCE_SELF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UnitState_<ContainerAllocator>::ALLIANCE_ALLY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UnitState_<ContainerAllocator>::ALLIANCE_NEUTRAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UnitState_<ContainerAllocator>::ALLIANCE_ENEMY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UnitState_<ContainerAllocator>::DISPLAY_VISIBLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UnitState_<ContainerAllocator>::DISPLAY_SNAPSHOT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UnitState_<ContainerAllocator>::DISPLAY_HIDDEN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UnitState_<ContainerAllocator>::DISPLAY_PLACEHOLDER;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace sc2_bridge_interfaces

#endif  // SC2_BRIDGE_INTERFACES__MSG__DETAIL__UNIT_STATE__STRUCT_HPP_
