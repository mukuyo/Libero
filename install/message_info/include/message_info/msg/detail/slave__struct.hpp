// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from message_info:msg/Slave.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__SLAVE__STRUCT_HPP_
#define MESSAGE_INFO__MSG__DETAIL__SLAVE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__message_info__msg__Slave __attribute__((deprecated))
#else
# define DEPRECATED__message_info__msg__Slave __declspec(deprecated)
#endif

namespace message_info
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Slave_
{
  using Type = Slave_<ContainerAllocator>;

  explicit Slave_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->imu_degree = 0.0;
      this->appear = 0ll;
      this->camera_degree = 0ll;
      this->lidar_degree = 0.0;
      this->find = 0ll;
      this->touch = 0ll;
      this->left = 0.0;
      this->right = 0.0;
      this->decide = 0ll;
      this->imu = 0ll;
    }
  }

  explicit Slave_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->imu_degree = 0.0;
      this->appear = 0ll;
      this->camera_degree = 0ll;
      this->lidar_degree = 0.0;
      this->find = 0ll;
      this->touch = 0ll;
      this->left = 0.0;
      this->right = 0.0;
      this->decide = 0ll;
      this->imu = 0ll;
    }
  }

  // field types and members
  using _imu_degree_type =
    double;
  _imu_degree_type imu_degree;
  using _appear_type =
    int64_t;
  _appear_type appear;
  using _camera_degree_type =
    int64_t;
  _camera_degree_type camera_degree;
  using _lidar_degree_type =
    double;
  _lidar_degree_type lidar_degree;
  using _find_type =
    int64_t;
  _find_type find;
  using _touch_type =
    int64_t;
  _touch_type touch;
  using _left_type =
    double;
  _left_type left;
  using _right_type =
    double;
  _right_type right;
  using _decide_type =
    int64_t;
  _decide_type decide;
  using _imu_type =
    int64_t;
  _imu_type imu;

  // setters for named parameter idiom
  Type & set__imu_degree(
    const double & _arg)
  {
    this->imu_degree = _arg;
    return *this;
  }
  Type & set__appear(
    const int64_t & _arg)
  {
    this->appear = _arg;
    return *this;
  }
  Type & set__camera_degree(
    const int64_t & _arg)
  {
    this->camera_degree = _arg;
    return *this;
  }
  Type & set__lidar_degree(
    const double & _arg)
  {
    this->lidar_degree = _arg;
    return *this;
  }
  Type & set__find(
    const int64_t & _arg)
  {
    this->find = _arg;
    return *this;
  }
  Type & set__touch(
    const int64_t & _arg)
  {
    this->touch = _arg;
    return *this;
  }
  Type & set__left(
    const double & _arg)
  {
    this->left = _arg;
    return *this;
  }
  Type & set__right(
    const double & _arg)
  {
    this->right = _arg;
    return *this;
  }
  Type & set__decide(
    const int64_t & _arg)
  {
    this->decide = _arg;
    return *this;
  }
  Type & set__imu(
    const int64_t & _arg)
  {
    this->imu = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    message_info::msg::Slave_<ContainerAllocator> *;
  using ConstRawPtr =
    const message_info::msg::Slave_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<message_info::msg::Slave_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<message_info::msg::Slave_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      message_info::msg::Slave_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::Slave_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      message_info::msg::Slave_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::Slave_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<message_info::msg::Slave_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<message_info::msg::Slave_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__message_info__msg__Slave
    std::shared_ptr<message_info::msg::Slave_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__message_info__msg__Slave
    std::shared_ptr<message_info::msg::Slave_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Slave_ & other) const
  {
    if (this->imu_degree != other.imu_degree) {
      return false;
    }
    if (this->appear != other.appear) {
      return false;
    }
    if (this->camera_degree != other.camera_degree) {
      return false;
    }
    if (this->lidar_degree != other.lidar_degree) {
      return false;
    }
    if (this->find != other.find) {
      return false;
    }
    if (this->touch != other.touch) {
      return false;
    }
    if (this->left != other.left) {
      return false;
    }
    if (this->right != other.right) {
      return false;
    }
    if (this->decide != other.decide) {
      return false;
    }
    if (this->imu != other.imu) {
      return false;
    }
    return true;
  }
  bool operator!=(const Slave_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Slave_

// alias to use template instance with default allocator
using Slave =
  message_info::msg::Slave_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__SLAVE__STRUCT_HPP_
