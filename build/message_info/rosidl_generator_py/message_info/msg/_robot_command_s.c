// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from message_info:msg/RobotCommand.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "message_info/msg/detail/robot_command__struct.h"
#include "message_info/msg/detail/robot_command__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool message_info__msg__robot_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("message_info.msg._robot_command.RobotCommand", full_classname_dest, 44) == 0);
  }
  message_info__msg__RobotCommand * ros_message = _ros_message;
  {  // robot_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robot_id = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // vel_surge
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_surge");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_surge = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel_sway
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_sway");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_sway = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel_angular
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_angular");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_angular = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // kick_power
    PyObject * field = PyObject_GetAttrString(_pymsg, "kick_power");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kick_power = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // chip_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "chip_enable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->chip_enable = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dribble_power
    PyObject * field = PyObject_GetAttrString(_pymsg, "dribble_power");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dribble_power = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_yellow
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_yellow");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_yellow = (Py_True == field);
    Py_DECREF(field);
  }
  {  // finish
    PyObject * field = PyObject_GetAttrString(_pymsg, "finish");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->finish = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * message_info__msg__robot_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("message_info.msg._robot_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  message_info__msg__RobotCommand * ros_message = (message_info__msg__RobotCommand *)raw_ros_message;
  {  // robot_id
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->robot_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_surge
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_surge);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_surge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_sway
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_sway);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_sway", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_angular
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_angular);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_angular", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kick_power
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kick_power);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kick_power", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chip_enable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->chip_enable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chip_enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dribble_power
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dribble_power);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dribble_power", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_yellow
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_yellow ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_yellow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // finish
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->finish ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "finish", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
