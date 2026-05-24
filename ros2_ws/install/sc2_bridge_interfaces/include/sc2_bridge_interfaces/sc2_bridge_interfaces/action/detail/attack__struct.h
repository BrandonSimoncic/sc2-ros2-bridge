// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sc2_bridge_interfaces:action/Attack.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__ACTION__DETAIL__ATTACK__STRUCT_H_
#define SC2_BRIDGE_INTERFACES__ACTION__DETAIL__ATTACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_point'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in action/Attack in the package sc2_bridge_interfaces.
typedef struct sc2_bridge_interfaces__action__Attack_Goal
{
  uint64_t target_tag;
  geometry_msgs__msg__Point target_point;
  bool queue;
} sc2_bridge_interfaces__action__Attack_Goal;

// Struct for a sequence of sc2_bridge_interfaces__action__Attack_Goal.
typedef struct sc2_bridge_interfaces__action__Attack_Goal__Sequence
{
  sc2_bridge_interfaces__action__Attack_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sc2_bridge_interfaces__action__Attack_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Attack in the package sc2_bridge_interfaces.
typedef struct sc2_bridge_interfaces__action__Attack_Result
{
  bool success;
  rosidl_runtime_c__String message;
} sc2_bridge_interfaces__action__Attack_Result;

// Struct for a sequence of sc2_bridge_interfaces__action__Attack_Result.
typedef struct sc2_bridge_interfaces__action__Attack_Result__Sequence
{
  sc2_bridge_interfaces__action__Attack_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sc2_bridge_interfaces__action__Attack_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Attack in the package sc2_bridge_interfaces.
typedef struct sc2_bridge_interfaces__action__Attack_Feedback
{
  float distance_to_target;
  bool engaged;
} sc2_bridge_interfaces__action__Attack_Feedback;

// Struct for a sequence of sc2_bridge_interfaces__action__Attack_Feedback.
typedef struct sc2_bridge_interfaces__action__Attack_Feedback__Sequence
{
  sc2_bridge_interfaces__action__Attack_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sc2_bridge_interfaces__action__Attack_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "sc2_bridge_interfaces/action/detail/attack__struct.h"

/// Struct defined in action/Attack in the package sc2_bridge_interfaces.
typedef struct sc2_bridge_interfaces__action__Attack_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  sc2_bridge_interfaces__action__Attack_Goal goal;
} sc2_bridge_interfaces__action__Attack_SendGoal_Request;

// Struct for a sequence of sc2_bridge_interfaces__action__Attack_SendGoal_Request.
typedef struct sc2_bridge_interfaces__action__Attack_SendGoal_Request__Sequence
{
  sc2_bridge_interfaces__action__Attack_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sc2_bridge_interfaces__action__Attack_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Attack in the package sc2_bridge_interfaces.
typedef struct sc2_bridge_interfaces__action__Attack_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} sc2_bridge_interfaces__action__Attack_SendGoal_Response;

// Struct for a sequence of sc2_bridge_interfaces__action__Attack_SendGoal_Response.
typedef struct sc2_bridge_interfaces__action__Attack_SendGoal_Response__Sequence
{
  sc2_bridge_interfaces__action__Attack_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sc2_bridge_interfaces__action__Attack_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Attack in the package sc2_bridge_interfaces.
typedef struct sc2_bridge_interfaces__action__Attack_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} sc2_bridge_interfaces__action__Attack_GetResult_Request;

// Struct for a sequence of sc2_bridge_interfaces__action__Attack_GetResult_Request.
typedef struct sc2_bridge_interfaces__action__Attack_GetResult_Request__Sequence
{
  sc2_bridge_interfaces__action__Attack_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sc2_bridge_interfaces__action__Attack_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__struct.h"

/// Struct defined in action/Attack in the package sc2_bridge_interfaces.
typedef struct sc2_bridge_interfaces__action__Attack_GetResult_Response
{
  int8_t status;
  sc2_bridge_interfaces__action__Attack_Result result;
} sc2_bridge_interfaces__action__Attack_GetResult_Response;

// Struct for a sequence of sc2_bridge_interfaces__action__Attack_GetResult_Response.
typedef struct sc2_bridge_interfaces__action__Attack_GetResult_Response__Sequence
{
  sc2_bridge_interfaces__action__Attack_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sc2_bridge_interfaces__action__Attack_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "sc2_bridge_interfaces/action/detail/attack__struct.h"

/// Struct defined in action/Attack in the package sc2_bridge_interfaces.
typedef struct sc2_bridge_interfaces__action__Attack_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  sc2_bridge_interfaces__action__Attack_Feedback feedback;
} sc2_bridge_interfaces__action__Attack_FeedbackMessage;

// Struct for a sequence of sc2_bridge_interfaces__action__Attack_FeedbackMessage.
typedef struct sc2_bridge_interfaces__action__Attack_FeedbackMessage__Sequence
{
  sc2_bridge_interfaces__action__Attack_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sc2_bridge_interfaces__action__Attack_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SC2_BRIDGE_INTERFACES__ACTION__DETAIL__ATTACK__STRUCT_H_
