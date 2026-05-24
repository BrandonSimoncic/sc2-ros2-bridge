// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sc2_bridge_interfaces:msg/ContactMark.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__MSG__DETAIL__CONTACT_MARK__STRUCT_HPP_
#define SC2_BRIDGE_INTERFACES__MSG__DETAIL__CONTACT_MARK__STRUCT_HPP_

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
// Member 'first_seen'
// Member 'last_seen'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sc2_bridge_interfaces__msg__ContactMark __attribute__((deprecated))
#else
# define DEPRECATED__sc2_bridge_interfaces__msg__ContactMark __declspec(deprecated)
#endif

namespace sc2_bridge_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ContactMark_
{
  using Type = ContactMark_<ContainerAllocator>;

  explicit ContactMark_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    first_seen(_init),
    last_seen(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mark_id = 0ul;
      this->tag = 0ull;
      this->unit_type = 0ul;
      this->alliance = 0;
      this->status = 0;
    }
  }

  explicit ContactMark_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    first_seen(_alloc, _init),
    last_seen(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mark_id = 0ul;
      this->tag = 0ull;
      this->unit_type = 0ul;
      this->alliance = 0;
      this->status = 0;
    }
  }

  // field types and members
  using _mark_id_type =
    uint32_t;
  _mark_id_type mark_id;
  using _tag_type =
    uint64_t;
  _tag_type tag;
  using _unit_type_type =
    uint32_t;
  _unit_type_type unit_type;
  using _alliance_type =
    uint8_t;
  _alliance_type alliance;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _first_seen_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _first_seen_type first_seen;
  using _last_seen_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _last_seen_type last_seen;
  using _status_type =
    uint8_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__mark_id(
    const uint32_t & _arg)
  {
    this->mark_id = _arg;
    return *this;
  }
  Type & set__tag(
    const uint64_t & _arg)
  {
    this->tag = _arg;
    return *this;
  }
  Type & set__unit_type(
    const uint32_t & _arg)
  {
    this->unit_type = _arg;
    return *this;
  }
  Type & set__alliance(
    const uint8_t & _arg)
  {
    this->alliance = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__first_seen(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->first_seen = _arg;
    return *this;
  }
  Type & set__last_seen(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->last_seen = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATUS_VISIBLE =
    0u;
  static constexpr uint8_t STATUS_FOGGED =
    1u;
  static constexpr uint8_t STATUS_DESTROYED =
    2u;

  // pointer types
  using RawPtr =
    sc2_bridge_interfaces::msg::ContactMark_<ContainerAllocator> *;
  using ConstRawPtr =
    const sc2_bridge_interfaces::msg::ContactMark_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sc2_bridge_interfaces::msg::ContactMark_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sc2_bridge_interfaces::msg::ContactMark_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sc2_bridge_interfaces::msg::ContactMark_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sc2_bridge_interfaces::msg::ContactMark_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sc2_bridge_interfaces::msg::ContactMark_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sc2_bridge_interfaces::msg::ContactMark_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sc2_bridge_interfaces::msg::ContactMark_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sc2_bridge_interfaces::msg::ContactMark_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sc2_bridge_interfaces__msg__ContactMark
    std::shared_ptr<sc2_bridge_interfaces::msg::ContactMark_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sc2_bridge_interfaces__msg__ContactMark
    std::shared_ptr<sc2_bridge_interfaces::msg::ContactMark_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ContactMark_ & other) const
  {
    if (this->mark_id != other.mark_id) {
      return false;
    }
    if (this->tag != other.tag) {
      return false;
    }
    if (this->unit_type != other.unit_type) {
      return false;
    }
    if (this->alliance != other.alliance) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->first_seen != other.first_seen) {
      return false;
    }
    if (this->last_seen != other.last_seen) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const ContactMark_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ContactMark_

// alias to use template instance with default allocator
using ContactMark =
  sc2_bridge_interfaces::msg::ContactMark_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ContactMark_<ContainerAllocator>::STATUS_VISIBLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ContactMark_<ContainerAllocator>::STATUS_FOGGED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ContactMark_<ContainerAllocator>::STATUS_DESTROYED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace sc2_bridge_interfaces

#endif  // SC2_BRIDGE_INTERFACES__MSG__DETAIL__CONTACT_MARK__STRUCT_HPP_
