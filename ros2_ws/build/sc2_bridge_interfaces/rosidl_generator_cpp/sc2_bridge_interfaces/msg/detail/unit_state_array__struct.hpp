// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sc2_bridge_interfaces:msg/UnitStateArray.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__MSG__DETAIL__UNIT_STATE_ARRAY__STRUCT_HPP_
#define SC2_BRIDGE_INTERFACES__MSG__DETAIL__UNIT_STATE_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'units'
#include "sc2_bridge_interfaces/msg/detail/unit_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sc2_bridge_interfaces__msg__UnitStateArray __attribute__((deprecated))
#else
# define DEPRECATED__sc2_bridge_interfaces__msg__UnitStateArray __declspec(deprecated)
#endif

namespace sc2_bridge_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UnitStateArray_
{
  using Type = UnitStateArray_<ContainerAllocator>;

  explicit UnitStateArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->game_loop = 0ul;
    }
  }

  explicit UnitStateArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->game_loop = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _game_loop_type =
    uint32_t;
  _game_loop_type game_loop;
  using _units_type =
    std::vector<sc2_bridge_interfaces::msg::UnitState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sc2_bridge_interfaces::msg::UnitState_<ContainerAllocator>>>;
  _units_type units;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__game_loop(
    const uint32_t & _arg)
  {
    this->game_loop = _arg;
    return *this;
  }
  Type & set__units(
    const std::vector<sc2_bridge_interfaces::msg::UnitState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sc2_bridge_interfaces::msg::UnitState_<ContainerAllocator>>> & _arg)
  {
    this->units = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sc2_bridge_interfaces::msg::UnitStateArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const sc2_bridge_interfaces::msg::UnitStateArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sc2_bridge_interfaces::msg::UnitStateArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sc2_bridge_interfaces::msg::UnitStateArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sc2_bridge_interfaces::msg::UnitStateArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sc2_bridge_interfaces::msg::UnitStateArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sc2_bridge_interfaces::msg::UnitStateArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sc2_bridge_interfaces::msg::UnitStateArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sc2_bridge_interfaces::msg::UnitStateArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sc2_bridge_interfaces::msg::UnitStateArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sc2_bridge_interfaces__msg__UnitStateArray
    std::shared_ptr<sc2_bridge_interfaces::msg::UnitStateArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sc2_bridge_interfaces__msg__UnitStateArray
    std::shared_ptr<sc2_bridge_interfaces::msg::UnitStateArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UnitStateArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->game_loop != other.game_loop) {
      return false;
    }
    if (this->units != other.units) {
      return false;
    }
    return true;
  }
  bool operator!=(const UnitStateArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UnitStateArray_

// alias to use template instance with default allocator
using UnitStateArray =
  sc2_bridge_interfaces::msg::UnitStateArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sc2_bridge_interfaces

#endif  // SC2_BRIDGE_INTERFACES__MSG__DETAIL__UNIT_STATE_ARRAY__STRUCT_HPP_
