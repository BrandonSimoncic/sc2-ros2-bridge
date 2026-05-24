// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sc2_bridge_interfaces:msg/GameInfo.idl
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
#include "sc2_bridge_interfaces/msg/detail/game_info__struct.h"
#include "sc2_bridge_interfaces/msg/detail/game_info__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sc2_bridge_interfaces__msg__game_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("sc2_bridge_interfaces.msg._game_info.GameInfo", full_classname_dest, 45) == 0);
  }
  sc2_bridge_interfaces__msg__GameInfo * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // map_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "map_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->map_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // game_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "game_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->game_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // realtime
    PyObject * field = PyObject_GetAttrString(_pymsg, "realtime");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->realtime = (Py_True == field);
    Py_DECREF(field);
  }
  {  // world_frame_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "world_frame_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->world_frame_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // playable_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "playable_min");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->playable_min)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // playable_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "playable_max");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->playable_max)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sc2_bridge_interfaces__msg__game_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GameInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sc2_bridge_interfaces.msg._game_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GameInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sc2_bridge_interfaces__msg__GameInfo * ros_message = (sc2_bridge_interfaces__msg__GameInfo *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // map_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->map_name.data,
      strlen(ros_message->map_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "map_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // game_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->game_version.data,
      strlen(ros_message->game_version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "game_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // realtime
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->realtime ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "realtime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // world_frame_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->world_frame_id.data,
      strlen(ros_message->world_frame_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "world_frame_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // playable_min
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->playable_min);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "playable_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // playable_max
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->playable_max);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "playable_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
