// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from sc2_bridge_interfaces:action/Attack.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "sc2_bridge_interfaces/action/detail/attack__struct.h"
#include "sc2_bridge_interfaces/action/detail/attack__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace sc2_bridge_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Attack_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Attack_Goal_type_support_ids_t;

static const _Attack_Goal_type_support_ids_t _Attack_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Attack_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Attack_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Attack_Goal_type_support_symbol_names_t _Attack_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sc2_bridge_interfaces, action, Attack_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sc2_bridge_interfaces, action, Attack_Goal)),
  }
};

typedef struct _Attack_Goal_type_support_data_t
{
  void * data[2];
} _Attack_Goal_type_support_data_t;

static _Attack_Goal_type_support_data_t _Attack_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Attack_Goal_message_typesupport_map = {
  2,
  "sc2_bridge_interfaces",
  &_Attack_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Attack_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Attack_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Attack_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Attack_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace sc2_bridge_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, sc2_bridge_interfaces, action, Attack_Goal)() {
  return &::sc2_bridge_interfaces::action::rosidl_typesupport_c::Attack_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__struct.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sc2_bridge_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Attack_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Attack_Result_type_support_ids_t;

static const _Attack_Result_type_support_ids_t _Attack_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Attack_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Attack_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Attack_Result_type_support_symbol_names_t _Attack_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sc2_bridge_interfaces, action, Attack_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sc2_bridge_interfaces, action, Attack_Result)),
  }
};

typedef struct _Attack_Result_type_support_data_t
{
  void * data[2];
} _Attack_Result_type_support_data_t;

static _Attack_Result_type_support_data_t _Attack_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Attack_Result_message_typesupport_map = {
  2,
  "sc2_bridge_interfaces",
  &_Attack_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Attack_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Attack_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Attack_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Attack_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace sc2_bridge_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, sc2_bridge_interfaces, action, Attack_Result)() {
  return &::sc2_bridge_interfaces::action::rosidl_typesupport_c::Attack_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__struct.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sc2_bridge_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Attack_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Attack_Feedback_type_support_ids_t;

static const _Attack_Feedback_type_support_ids_t _Attack_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Attack_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Attack_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Attack_Feedback_type_support_symbol_names_t _Attack_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sc2_bridge_interfaces, action, Attack_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sc2_bridge_interfaces, action, Attack_Feedback)),
  }
};

typedef struct _Attack_Feedback_type_support_data_t
{
  void * data[2];
} _Attack_Feedback_type_support_data_t;

static _Attack_Feedback_type_support_data_t _Attack_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Attack_Feedback_message_typesupport_map = {
  2,
  "sc2_bridge_interfaces",
  &_Attack_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Attack_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Attack_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Attack_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Attack_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace sc2_bridge_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, sc2_bridge_interfaces, action, Attack_Feedback)() {
  return &::sc2_bridge_interfaces::action::rosidl_typesupport_c::Attack_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__struct.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sc2_bridge_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Attack_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Attack_SendGoal_Request_type_support_ids_t;

static const _Attack_SendGoal_Request_type_support_ids_t _Attack_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Attack_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Attack_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Attack_SendGoal_Request_type_support_symbol_names_t _Attack_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sc2_bridge_interfaces, action, Attack_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sc2_bridge_interfaces, action, Attack_SendGoal_Request)),
  }
};

typedef struct _Attack_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Attack_SendGoal_Request_type_support_data_t;

static _Attack_SendGoal_Request_type_support_data_t _Attack_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Attack_SendGoal_Request_message_typesupport_map = {
  2,
  "sc2_bridge_interfaces",
  &_Attack_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Attack_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Attack_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Attack_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Attack_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace sc2_bridge_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, sc2_bridge_interfaces, action, Attack_SendGoal_Request)() {
  return &::sc2_bridge_interfaces::action::rosidl_typesupport_c::Attack_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__struct.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sc2_bridge_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Attack_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Attack_SendGoal_Response_type_support_ids_t;

static const _Attack_SendGoal_Response_type_support_ids_t _Attack_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Attack_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Attack_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Attack_SendGoal_Response_type_support_symbol_names_t _Attack_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sc2_bridge_interfaces, action, Attack_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sc2_bridge_interfaces, action, Attack_SendGoal_Response)),
  }
};

typedef struct _Attack_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Attack_SendGoal_Response_type_support_data_t;

static _Attack_SendGoal_Response_type_support_data_t _Attack_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Attack_SendGoal_Response_message_typesupport_map = {
  2,
  "sc2_bridge_interfaces",
  &_Attack_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Attack_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Attack_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Attack_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Attack_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace sc2_bridge_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, sc2_bridge_interfaces, action, Attack_SendGoal_Response)() {
  return &::sc2_bridge_interfaces::action::rosidl_typesupport_c::Attack_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sc2_bridge_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Attack_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Attack_SendGoal_type_support_ids_t;

static const _Attack_SendGoal_type_support_ids_t _Attack_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Attack_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Attack_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Attack_SendGoal_type_support_symbol_names_t _Attack_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sc2_bridge_interfaces, action, Attack_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sc2_bridge_interfaces, action, Attack_SendGoal)),
  }
};

typedef struct _Attack_SendGoal_type_support_data_t
{
  void * data[2];
} _Attack_SendGoal_type_support_data_t;

static _Attack_SendGoal_type_support_data_t _Attack_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Attack_SendGoal_service_typesupport_map = {
  2,
  "sc2_bridge_interfaces",
  &_Attack_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Attack_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Attack_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Attack_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Attack_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace sc2_bridge_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, sc2_bridge_interfaces, action, Attack_SendGoal)() {
  return &::sc2_bridge_interfaces::action::rosidl_typesupport_c::Attack_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__struct.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sc2_bridge_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Attack_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Attack_GetResult_Request_type_support_ids_t;

static const _Attack_GetResult_Request_type_support_ids_t _Attack_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Attack_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Attack_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Attack_GetResult_Request_type_support_symbol_names_t _Attack_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sc2_bridge_interfaces, action, Attack_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sc2_bridge_interfaces, action, Attack_GetResult_Request)),
  }
};

typedef struct _Attack_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Attack_GetResult_Request_type_support_data_t;

static _Attack_GetResult_Request_type_support_data_t _Attack_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Attack_GetResult_Request_message_typesupport_map = {
  2,
  "sc2_bridge_interfaces",
  &_Attack_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Attack_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Attack_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Attack_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Attack_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace sc2_bridge_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, sc2_bridge_interfaces, action, Attack_GetResult_Request)() {
  return &::sc2_bridge_interfaces::action::rosidl_typesupport_c::Attack_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__struct.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sc2_bridge_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Attack_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Attack_GetResult_Response_type_support_ids_t;

static const _Attack_GetResult_Response_type_support_ids_t _Attack_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Attack_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Attack_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Attack_GetResult_Response_type_support_symbol_names_t _Attack_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sc2_bridge_interfaces, action, Attack_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sc2_bridge_interfaces, action, Attack_GetResult_Response)),
  }
};

typedef struct _Attack_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Attack_GetResult_Response_type_support_data_t;

static _Attack_GetResult_Response_type_support_data_t _Attack_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Attack_GetResult_Response_message_typesupport_map = {
  2,
  "sc2_bridge_interfaces",
  &_Attack_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Attack_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Attack_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Attack_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Attack_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace sc2_bridge_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, sc2_bridge_interfaces, action, Attack_GetResult_Response)() {
  return &::sc2_bridge_interfaces::action::rosidl_typesupport_c::Attack_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sc2_bridge_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Attack_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Attack_GetResult_type_support_ids_t;

static const _Attack_GetResult_type_support_ids_t _Attack_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Attack_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Attack_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Attack_GetResult_type_support_symbol_names_t _Attack_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sc2_bridge_interfaces, action, Attack_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sc2_bridge_interfaces, action, Attack_GetResult)),
  }
};

typedef struct _Attack_GetResult_type_support_data_t
{
  void * data[2];
} _Attack_GetResult_type_support_data_t;

static _Attack_GetResult_type_support_data_t _Attack_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Attack_GetResult_service_typesupport_map = {
  2,
  "sc2_bridge_interfaces",
  &_Attack_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Attack_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Attack_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Attack_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Attack_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace sc2_bridge_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, sc2_bridge_interfaces, action, Attack_GetResult)() {
  return &::sc2_bridge_interfaces::action::rosidl_typesupport_c::Attack_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__struct.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sc2_bridge_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Attack_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Attack_FeedbackMessage_type_support_ids_t;

static const _Attack_FeedbackMessage_type_support_ids_t _Attack_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Attack_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Attack_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Attack_FeedbackMessage_type_support_symbol_names_t _Attack_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sc2_bridge_interfaces, action, Attack_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sc2_bridge_interfaces, action, Attack_FeedbackMessage)),
  }
};

typedef struct _Attack_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Attack_FeedbackMessage_type_support_data_t;

static _Attack_FeedbackMessage_type_support_data_t _Attack_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Attack_FeedbackMessage_message_typesupport_map = {
  2,
  "sc2_bridge_interfaces",
  &_Attack_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Attack_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Attack_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Attack_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Attack_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace sc2_bridge_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, sc2_bridge_interfaces, action, Attack_FeedbackMessage)() {
  return &::sc2_bridge_interfaces::action::rosidl_typesupport_c::Attack_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "sc2_bridge_interfaces/action/attack.h"
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__type_support.h"

static rosidl_action_type_support_t _sc2_bridge_interfaces__action__Attack__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, sc2_bridge_interfaces, action, Attack)()
{
  // Thread-safe by always writing the same values to the static struct
  _sc2_bridge_interfaces__action__Attack__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, sc2_bridge_interfaces, action, Attack_SendGoal)();
  _sc2_bridge_interfaces__action__Attack__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, sc2_bridge_interfaces, action, Attack_GetResult)();
  _sc2_bridge_interfaces__action__Attack__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _sc2_bridge_interfaces__action__Attack__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, sc2_bridge_interfaces, action, Attack_FeedbackMessage)();
  _sc2_bridge_interfaces__action__Attack__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_sc2_bridge_interfaces__action__Attack__typesupport_c;
}

#ifdef __cplusplus
}
#endif
