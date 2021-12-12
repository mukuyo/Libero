// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from message_info:msg/Slave.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/slave__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "message_info/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "message_info/msg/detail/slave__struct.h"
#include "message_info/msg/detail/slave__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Slave__ros_msg_type = message_info__msg__Slave;

static bool _Slave__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Slave__ros_msg_type * ros_message = static_cast<const _Slave__ros_msg_type *>(untyped_ros_message);
  // Field name: imu_degree
  {
    cdr << ros_message->imu_degree;
  }

  // Field name: appear
  {
    cdr << ros_message->appear;
  }

  // Field name: camera_degree
  {
    cdr << ros_message->camera_degree;
  }

  // Field name: lidar_degree
  {
    cdr << ros_message->lidar_degree;
  }

  // Field name: find
  {
    cdr << ros_message->find;
  }

  // Field name: touch
  {
    cdr << ros_message->touch;
  }

  // Field name: left
  {
    cdr << ros_message->left;
  }

  // Field name: right
  {
    cdr << ros_message->right;
  }

  // Field name: decide
  {
    cdr << ros_message->decide;
  }

  // Field name: imu
  {
    cdr << ros_message->imu;
  }

  return true;
}

static bool _Slave__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Slave__ros_msg_type * ros_message = static_cast<_Slave__ros_msg_type *>(untyped_ros_message);
  // Field name: imu_degree
  {
    cdr >> ros_message->imu_degree;
  }

  // Field name: appear
  {
    cdr >> ros_message->appear;
  }

  // Field name: camera_degree
  {
    cdr >> ros_message->camera_degree;
  }

  // Field name: lidar_degree
  {
    cdr >> ros_message->lidar_degree;
  }

  // Field name: find
  {
    cdr >> ros_message->find;
  }

  // Field name: touch
  {
    cdr >> ros_message->touch;
  }

  // Field name: left
  {
    cdr >> ros_message->left;
  }

  // Field name: right
  {
    cdr >> ros_message->right;
  }

  // Field name: decide
  {
    cdr >> ros_message->decide;
  }

  // Field name: imu
  {
    cdr >> ros_message->imu;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_info
size_t get_serialized_size_message_info__msg__Slave(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Slave__ros_msg_type * ros_message = static_cast<const _Slave__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name imu_degree
  {
    size_t item_size = sizeof(ros_message->imu_degree);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name appear
  {
    size_t item_size = sizeof(ros_message->appear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name camera_degree
  {
    size_t item_size = sizeof(ros_message->camera_degree);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lidar_degree
  {
    size_t item_size = sizeof(ros_message->lidar_degree);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name find
  {
    size_t item_size = sizeof(ros_message->find);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name touch
  {
    size_t item_size = sizeof(ros_message->touch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left
  {
    size_t item_size = sizeof(ros_message->left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right
  {
    size_t item_size = sizeof(ros_message->right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name decide
  {
    size_t item_size = sizeof(ros_message->decide);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu
  {
    size_t item_size = sizeof(ros_message->imu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Slave__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_message_info__msg__Slave(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_info
size_t max_serialized_size_message_info__msg__Slave(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: imu_degree
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: appear
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: camera_degree
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lidar_degree
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: find
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: touch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: decide
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: imu
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Slave__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_message_info__msg__Slave(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Slave = {
  "message_info::msg",
  "Slave",
  _Slave__cdr_serialize,
  _Slave__cdr_deserialize,
  _Slave__get_serialized_size,
  _Slave__max_serialized_size
};

static rosidl_message_type_support_t _Slave__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Slave,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message_info, msg, Slave)() {
  return &_Slave__type_support;
}

#if defined(__cplusplus)
}
#endif
