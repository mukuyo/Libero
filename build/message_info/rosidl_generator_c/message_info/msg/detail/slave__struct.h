// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message_info:msg/Slave.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__SLAVE__STRUCT_H_
#define MESSAGE_INFO__MSG__DETAIL__SLAVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Slave in the package message_info.
typedef struct message_info__msg__Slave
{
  double imu_degree;
  int64_t appear;
  int64_t camera_degree;
  double lidar_degree;
  int64_t find;
  int64_t touch;
  double left;
  double right;
  int64_t decide;
  int64_t imu;
  int64_t sw1;
  int64_t sw2;
  int64_t sw3;
} message_info__msg__Slave;

// Struct for a sequence of message_info__msg__Slave.
typedef struct message_info__msg__Slave__Sequence
{
  message_info__msg__Slave * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message_info__msg__Slave__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE_INFO__MSG__DETAIL__SLAVE__STRUCT_H_
