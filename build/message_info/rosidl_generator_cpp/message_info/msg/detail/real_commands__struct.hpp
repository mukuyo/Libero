// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from message_info:msg/RealCommands.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__REAL_COMMANDS__STRUCT_HPP_
#define MESSAGE_INFO__MSG__DETAIL__REAL_COMMANDS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__message_info__msg__RealCommands __attribute__((deprecated))
#else
# define DEPRECATED__message_info__msg__RealCommands __declspec(deprecated)
#endif

namespace message_info
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RealCommands_
{
  using Type = RealCommands_<ContainerAllocator>;

  explicit RealCommands_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ball_catch = 0ll;
      this->degree_ball_robot = 0.0;
    }
  }

  explicit RealCommands_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ball_catch = 0ll;
      this->degree_ball_robot = 0.0;
    }
  }

  // field types and members
  using _ball_catch_type =
    int64_t;
  _ball_catch_type ball_catch;
  using _degree_ball_robot_type =
    double;
  _degree_ball_robot_type degree_ball_robot;

  // setters for named parameter idiom
  Type & set__ball_catch(
    const int64_t & _arg)
  {
    this->ball_catch = _arg;
    return *this;
  }
  Type & set__degree_ball_robot(
    const double & _arg)
  {
    this->degree_ball_robot = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    message_info::msg::RealCommands_<ContainerAllocator> *;
  using ConstRawPtr =
    const message_info::msg::RealCommands_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<message_info::msg::RealCommands_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<message_info::msg::RealCommands_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      message_info::msg::RealCommands_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::RealCommands_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      message_info::msg::RealCommands_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::RealCommands_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<message_info::msg::RealCommands_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<message_info::msg::RealCommands_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__message_info__msg__RealCommands
    std::shared_ptr<message_info::msg::RealCommands_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__message_info__msg__RealCommands
    std::shared_ptr<message_info::msg::RealCommands_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RealCommands_ & other) const
  {
    if (this->ball_catch != other.ball_catch) {
      return false;
    }
    if (this->degree_ball_robot != other.degree_ball_robot) {
      return false;
    }
    return true;
  }
  bool operator!=(const RealCommands_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RealCommands_

// alias to use template instance with default allocator
using RealCommands =
  message_info::msg::RealCommands_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__REAL_COMMANDS__STRUCT_HPP_
