// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from sc2_bridge_interfaces:msg/GameInfo.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "sc2_bridge_interfaces/msg/detail/game_info__struct.h"
#include "sc2_bridge_interfaces/msg/detail/game_info__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace sc2_bridge_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _GameInfo_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GameInfo_type_support_ids_t;

static const _GameInfo_type_support_ids_t _GameInfo_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GameInfo_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GameInfo_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GameInfo_type_support_symbol_names_t _GameInfo_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sc2_bridge_interfaces, msg, GameInfo)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sc2_bridge_interfaces, msg, GameInfo)),
  }
};

typedef struct _GameInfo_type_support_data_t
{
  void * data[2];
} _GameInfo_type_support_data_t;

static _GameInfo_type_support_data_t _GameInfo_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GameInfo_message_typesupport_map = {
  2,
  "sc2_bridge_interfaces",
  &_GameInfo_message_typesupport_ids.typesupport_identifier[0],
  &_GameInfo_message_typesupport_symbol_names.symbol_name[0],
  &_GameInfo_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GameInfo_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GameInfo_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace sc2_bridge_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, sc2_bridge_interfaces, msg, GameInfo)() {
  return &::sc2_bridge_interfaces::msg::rosidl_typesupport_c::GameInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
