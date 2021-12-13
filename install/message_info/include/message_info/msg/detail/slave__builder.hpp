// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message_info:msg/Slave.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__SLAVE__BUILDER_HPP_
#define MESSAGE_INFO__MSG__DETAIL__SLAVE__BUILDER_HPP_

#include "message_info/msg/detail/slave__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace message_info
{

namespace msg
{

namespace builder
{

class Init_Slave_sw3
{
public:
  explicit Init_Slave_sw3(::message_info::msg::Slave & msg)
  : msg_(msg)
  {}
  ::message_info::msg::Slave sw3(::message_info::msg::Slave::_sw3_type arg)
  {
    msg_.sw3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message_info::msg::Slave msg_;
};

class Init_Slave_sw2
{
public:
  explicit Init_Slave_sw2(::message_info::msg::Slave & msg)
  : msg_(msg)
  {}
  Init_Slave_sw3 sw2(::message_info::msg::Slave::_sw2_type arg)
  {
    msg_.sw2 = std::move(arg);
    return Init_Slave_sw3(msg_);
  }

private:
  ::message_info::msg::Slave msg_;
};

class Init_Slave_sw1
{
public:
  explicit Init_Slave_sw1(::message_info::msg::Slave & msg)
  : msg_(msg)
  {}
  Init_Slave_sw2 sw1(::message_info::msg::Slave::_sw1_type arg)
  {
    msg_.sw1 = std::move(arg);
    return Init_Slave_sw2(msg_);
  }

private:
  ::message_info::msg::Slave msg_;
};

class Init_Slave_imu
{
public:
  explicit Init_Slave_imu(::message_info::msg::Slave & msg)
  : msg_(msg)
  {}
  Init_Slave_sw1 imu(::message_info::msg::Slave::_imu_type arg)
  {
    msg_.imu = std::move(arg);
    return Init_Slave_sw1(msg_);
  }

private:
  ::message_info::msg::Slave msg_;
};

class Init_Slave_decide
{
public:
  explicit Init_Slave_decide(::message_info::msg::Slave & msg)
  : msg_(msg)
  {}
  Init_Slave_imu decide(::message_info::msg::Slave::_decide_type arg)
  {
    msg_.decide = std::move(arg);
    return Init_Slave_imu(msg_);
  }

private:
  ::message_info::msg::Slave msg_;
};

class Init_Slave_right
{
public:
  explicit Init_Slave_right(::message_info::msg::Slave & msg)
  : msg_(msg)
  {}
  Init_Slave_decide right(::message_info::msg::Slave::_right_type arg)
  {
    msg_.right = std::move(arg);
    return Init_Slave_decide(msg_);
  }

private:
  ::message_info::msg::Slave msg_;
};

class Init_Slave_left
{
public:
  explicit Init_Slave_left(::message_info::msg::Slave & msg)
  : msg_(msg)
  {}
  Init_Slave_right left(::message_info::msg::Slave::_left_type arg)
  {
    msg_.left = std::move(arg);
    return Init_Slave_right(msg_);
  }

private:
  ::message_info::msg::Slave msg_;
};

class Init_Slave_touch
{
public:
  explicit Init_Slave_touch(::message_info::msg::Slave & msg)
  : msg_(msg)
  {}
  Init_Slave_left touch(::message_info::msg::Slave::_touch_type arg)
  {
    msg_.touch = std::move(arg);
    return Init_Slave_left(msg_);
  }

private:
  ::message_info::msg::Slave msg_;
};

class Init_Slave_find
{
public:
  explicit Init_Slave_find(::message_info::msg::Slave & msg)
  : msg_(msg)
  {}
  Init_Slave_touch find(::message_info::msg::Slave::_find_type arg)
  {
    msg_.find = std::move(arg);
    return Init_Slave_touch(msg_);
  }

private:
  ::message_info::msg::Slave msg_;
};

class Init_Slave_lidar_degree
{
public:
  explicit Init_Slave_lidar_degree(::message_info::msg::Slave & msg)
  : msg_(msg)
  {}
  Init_Slave_find lidar_degree(::message_info::msg::Slave::_lidar_degree_type arg)
  {
    msg_.lidar_degree = std::move(arg);
    return Init_Slave_find(msg_);
  }

private:
  ::message_info::msg::Slave msg_;
};

class Init_Slave_camera_degree
{
public:
  explicit Init_Slave_camera_degree(::message_info::msg::Slave & msg)
  : msg_(msg)
  {}
  Init_Slave_lidar_degree camera_degree(::message_info::msg::Slave::_camera_degree_type arg)
  {
    msg_.camera_degree = std::move(arg);
    return Init_Slave_lidar_degree(msg_);
  }

private:
  ::message_info::msg::Slave msg_;
};

class Init_Slave_appear
{
public:
  explicit Init_Slave_appear(::message_info::msg::Slave & msg)
  : msg_(msg)
  {}
  Init_Slave_camera_degree appear(::message_info::msg::Slave::_appear_type arg)
  {
    msg_.appear = std::move(arg);
    return Init_Slave_camera_degree(msg_);
  }

private:
  ::message_info::msg::Slave msg_;
};

class Init_Slave_imu_degree
{
public:
  Init_Slave_imu_degree()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Slave_appear imu_degree(::message_info::msg::Slave::_imu_degree_type arg)
  {
    msg_.imu_degree = std::move(arg);
    return Init_Slave_appear(msg_);
  }

private:
  ::message_info::msg::Slave msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::message_info::msg::Slave>()
{
  return message_info::msg::builder::Init_Slave_imu_degree();
}

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__SLAVE__BUILDER_HPP_
