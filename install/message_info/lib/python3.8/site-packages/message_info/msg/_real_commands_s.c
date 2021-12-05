// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from message_info:msg/RealCommands.idl
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
#include "message_info/msg/detail/real_commands__struct.h"
#include "message_info/msg/detail/real_commands__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool message_info__msg__real_commands__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("message_info.msg._real_commands.RealCommands", full_classname_dest, 44) == 0);
  }
  message_info__msg__RealCommands * ros_message = _ros_message;
  {  // ball_catch
    PyObject * field = PyObject_GetAttrString(_pymsg, "ball_catch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ball_catch = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // degree_ball_robot
    PyObject * field = PyObject_GetAttrString(_pymsg, "degree_ball_robot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->degree_ball_robot = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * message_info__msg__real_commands__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RealCommands */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("message_info.msg._real_commands");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RealCommands");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  message_info__msg__RealCommands * ros_message = (message_info__msg__RealCommands *)raw_ros_message;
  {  // ball_catch
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->ball_catch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ball_catch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // degree_ball_robot
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->degree_ball_robot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "degree_ball_robot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
