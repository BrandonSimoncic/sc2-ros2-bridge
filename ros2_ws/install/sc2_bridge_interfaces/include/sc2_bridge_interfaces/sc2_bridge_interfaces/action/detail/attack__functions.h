// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sc2_bridge_interfaces:action/Attack.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__ACTION__DETAIL__ATTACK__FUNCTIONS_H_
#define SC2_BRIDGE_INTERFACES__ACTION__DETAIL__ATTACK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sc2_bridge_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "sc2_bridge_interfaces/action/detail/attack__struct.h"

/// Initialize action/Attack message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sc2_bridge_interfaces__action__Attack_Goal
 * )) before or use
 * sc2_bridge_interfaces__action__Attack_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_Goal__init(sc2_bridge_interfaces__action__Attack_Goal * msg);

/// Finalize action/Attack message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_Goal__fini(sc2_bridge_interfaces__action__Attack_Goal * msg);

/// Create action/Attack message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sc2_bridge_interfaces__action__Attack_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
sc2_bridge_interfaces__action__Attack_Goal *
sc2_bridge_interfaces__action__Attack_Goal__create();

/// Destroy action/Attack message.
/**
 * It calls
 * sc2_bridge_interfaces__action__Attack_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_Goal__destroy(sc2_bridge_interfaces__action__Attack_Goal * msg);

/// Check for action/Attack message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_Goal__are_equal(const sc2_bridge_interfaces__action__Attack_Goal * lhs, const sc2_bridge_interfaces__action__Attack_Goal * rhs);

/// Copy a action/Attack message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_Goal__copy(
  const sc2_bridge_interfaces__action__Attack_Goal * input,
  sc2_bridge_interfaces__action__Attack_Goal * output);

/// Initialize array of action/Attack messages.
/**
 * It allocates the memory for the number of elements and calls
 * sc2_bridge_interfaces__action__Attack_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_Goal__Sequence__init(sc2_bridge_interfaces__action__Attack_Goal__Sequence * array, size_t size);

/// Finalize array of action/Attack messages.
/**
 * It calls
 * sc2_bridge_interfaces__action__Attack_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_Goal__Sequence__fini(sc2_bridge_interfaces__action__Attack_Goal__Sequence * array);

/// Create array of action/Attack messages.
/**
 * It allocates the memory for the array and calls
 * sc2_bridge_interfaces__action__Attack_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
sc2_bridge_interfaces__action__Attack_Goal__Sequence *
sc2_bridge_interfaces__action__Attack_Goal__Sequence__create(size_t size);

/// Destroy array of action/Attack messages.
/**
 * It calls
 * sc2_bridge_interfaces__action__Attack_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_Goal__Sequence__destroy(sc2_bridge_interfaces__action__Attack_Goal__Sequence * array);

/// Check for action/Attack message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_Goal__Sequence__are_equal(const sc2_bridge_interfaces__action__Attack_Goal__Sequence * lhs, const sc2_bridge_interfaces__action__Attack_Goal__Sequence * rhs);

/// Copy an array of action/Attack messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_Goal__Sequence__copy(
  const sc2_bridge_interfaces__action__Attack_Goal__Sequence * input,
  sc2_bridge_interfaces__action__Attack_Goal__Sequence * output);

/// Initialize action/Attack message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sc2_bridge_interfaces__action__Attack_Result
 * )) before or use
 * sc2_bridge_interfaces__action__Attack_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_Result__init(sc2_bridge_interfaces__action__Attack_Result * msg);

/// Finalize action/Attack message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_Result__fini(sc2_bridge_interfaces__action__Attack_Result * msg);

/// Create action/Attack message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sc2_bridge_interfaces__action__Attack_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
sc2_bridge_interfaces__action__Attack_Result *
sc2_bridge_interfaces__action__Attack_Result__create();

/// Destroy action/Attack message.
/**
 * It calls
 * sc2_bridge_interfaces__action__Attack_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_Result__destroy(sc2_bridge_interfaces__action__Attack_Result * msg);

/// Check for action/Attack message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_Result__are_equal(const sc2_bridge_interfaces__action__Attack_Result * lhs, const sc2_bridge_interfaces__action__Attack_Result * rhs);

/// Copy a action/Attack message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_Result__copy(
  const sc2_bridge_interfaces__action__Attack_Result * input,
  sc2_bridge_interfaces__action__Attack_Result * output);

/// Initialize array of action/Attack messages.
/**
 * It allocates the memory for the number of elements and calls
 * sc2_bridge_interfaces__action__Attack_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_Result__Sequence__init(sc2_bridge_interfaces__action__Attack_Result__Sequence * array, size_t size);

/// Finalize array of action/Attack messages.
/**
 * It calls
 * sc2_bridge_interfaces__action__Attack_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_Result__Sequence__fini(sc2_bridge_interfaces__action__Attack_Result__Sequence * array);

/// Create array of action/Attack messages.
/**
 * It allocates the memory for the array and calls
 * sc2_bridge_interfaces__action__Attack_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
sc2_bridge_interfaces__action__Attack_Result__Sequence *
sc2_bridge_interfaces__action__Attack_Result__Sequence__create(size_t size);

/// Destroy array of action/Attack messages.
/**
 * It calls
 * sc2_bridge_interfaces__action__Attack_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_Result__Sequence__destroy(sc2_bridge_interfaces__action__Attack_Result__Sequence * array);

/// Check for action/Attack message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_Result__Sequence__are_equal(const sc2_bridge_interfaces__action__Attack_Result__Sequence * lhs, const sc2_bridge_interfaces__action__Attack_Result__Sequence * rhs);

/// Copy an array of action/Attack messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_Result__Sequence__copy(
  const sc2_bridge_interfaces__action__Attack_Result__Sequence * input,
  sc2_bridge_interfaces__action__Attack_Result__Sequence * output);

/// Initialize action/Attack message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sc2_bridge_interfaces__action__Attack_Feedback
 * )) before or use
 * sc2_bridge_interfaces__action__Attack_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_Feedback__init(sc2_bridge_interfaces__action__Attack_Feedback * msg);

/// Finalize action/Attack message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_Feedback__fini(sc2_bridge_interfaces__action__Attack_Feedback * msg);

/// Create action/Attack message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sc2_bridge_interfaces__action__Attack_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
sc2_bridge_interfaces__action__Attack_Feedback *
sc2_bridge_interfaces__action__Attack_Feedback__create();

/// Destroy action/Attack message.
/**
 * It calls
 * sc2_bridge_interfaces__action__Attack_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_Feedback__destroy(sc2_bridge_interfaces__action__Attack_Feedback * msg);

/// Check for action/Attack message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_Feedback__are_equal(const sc2_bridge_interfaces__action__Attack_Feedback * lhs, const sc2_bridge_interfaces__action__Attack_Feedback * rhs);

/// Copy a action/Attack message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_Feedback__copy(
  const sc2_bridge_interfaces__action__Attack_Feedback * input,
  sc2_bridge_interfaces__action__Attack_Feedback * output);

/// Initialize array of action/Attack messages.
/**
 * It allocates the memory for the number of elements and calls
 * sc2_bridge_interfaces__action__Attack_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_Feedback__Sequence__init(sc2_bridge_interfaces__action__Attack_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Attack messages.
/**
 * It calls
 * sc2_bridge_interfaces__action__Attack_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_Feedback__Sequence__fini(sc2_bridge_interfaces__action__Attack_Feedback__Sequence * array);

/// Create array of action/Attack messages.
/**
 * It allocates the memory for the array and calls
 * sc2_bridge_interfaces__action__Attack_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
sc2_bridge_interfaces__action__Attack_Feedback__Sequence *
sc2_bridge_interfaces__action__Attack_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Attack messages.
/**
 * It calls
 * sc2_bridge_interfaces__action__Attack_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_Feedback__Sequence__destroy(sc2_bridge_interfaces__action__Attack_Feedback__Sequence * array);

/// Check for action/Attack message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_Feedback__Sequence__are_equal(const sc2_bridge_interfaces__action__Attack_Feedback__Sequence * lhs, const sc2_bridge_interfaces__action__Attack_Feedback__Sequence * rhs);

/// Copy an array of action/Attack messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_Feedback__Sequence__copy(
  const sc2_bridge_interfaces__action__Attack_Feedback__Sequence * input,
  sc2_bridge_interfaces__action__Attack_Feedback__Sequence * output);

/// Initialize action/Attack message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sc2_bridge_interfaces__action__Attack_SendGoal_Request
 * )) before or use
 * sc2_bridge_interfaces__action__Attack_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_SendGoal_Request__init(sc2_bridge_interfaces__action__Attack_SendGoal_Request * msg);

/// Finalize action/Attack message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_SendGoal_Request__fini(sc2_bridge_interfaces__action__Attack_SendGoal_Request * msg);

/// Create action/Attack message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sc2_bridge_interfaces__action__Attack_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
sc2_bridge_interfaces__action__Attack_SendGoal_Request *
sc2_bridge_interfaces__action__Attack_SendGoal_Request__create();

/// Destroy action/Attack message.
/**
 * It calls
 * sc2_bridge_interfaces__action__Attack_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_SendGoal_Request__destroy(sc2_bridge_interfaces__action__Attack_SendGoal_Request * msg);

/// Check for action/Attack message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_SendGoal_Request__are_equal(const sc2_bridge_interfaces__action__Attack_SendGoal_Request * lhs, const sc2_bridge_interfaces__action__Attack_SendGoal_Request * rhs);

/// Copy a action/Attack message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_SendGoal_Request__copy(
  const sc2_bridge_interfaces__action__Attack_SendGoal_Request * input,
  sc2_bridge_interfaces__action__Attack_SendGoal_Request * output);

/// Initialize array of action/Attack messages.
/**
 * It allocates the memory for the number of elements and calls
 * sc2_bridge_interfaces__action__Attack_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_SendGoal_Request__Sequence__init(sc2_bridge_interfaces__action__Attack_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Attack messages.
/**
 * It calls
 * sc2_bridge_interfaces__action__Attack_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_SendGoal_Request__Sequence__fini(sc2_bridge_interfaces__action__Attack_SendGoal_Request__Sequence * array);

/// Create array of action/Attack messages.
/**
 * It allocates the memory for the array and calls
 * sc2_bridge_interfaces__action__Attack_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
sc2_bridge_interfaces__action__Attack_SendGoal_Request__Sequence *
sc2_bridge_interfaces__action__Attack_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Attack messages.
/**
 * It calls
 * sc2_bridge_interfaces__action__Attack_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_SendGoal_Request__Sequence__destroy(sc2_bridge_interfaces__action__Attack_SendGoal_Request__Sequence * array);

/// Check for action/Attack message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_SendGoal_Request__Sequence__are_equal(const sc2_bridge_interfaces__action__Attack_SendGoal_Request__Sequence * lhs, const sc2_bridge_interfaces__action__Attack_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Attack messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_SendGoal_Request__Sequence__copy(
  const sc2_bridge_interfaces__action__Attack_SendGoal_Request__Sequence * input,
  sc2_bridge_interfaces__action__Attack_SendGoal_Request__Sequence * output);

/// Initialize action/Attack message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sc2_bridge_interfaces__action__Attack_SendGoal_Response
 * )) before or use
 * sc2_bridge_interfaces__action__Attack_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_SendGoal_Response__init(sc2_bridge_interfaces__action__Attack_SendGoal_Response * msg);

/// Finalize action/Attack message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_SendGoal_Response__fini(sc2_bridge_interfaces__action__Attack_SendGoal_Response * msg);

/// Create action/Attack message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sc2_bridge_interfaces__action__Attack_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
sc2_bridge_interfaces__action__Attack_SendGoal_Response *
sc2_bridge_interfaces__action__Attack_SendGoal_Response__create();

/// Destroy action/Attack message.
/**
 * It calls
 * sc2_bridge_interfaces__action__Attack_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_SendGoal_Response__destroy(sc2_bridge_interfaces__action__Attack_SendGoal_Response * msg);

/// Check for action/Attack message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_SendGoal_Response__are_equal(const sc2_bridge_interfaces__action__Attack_SendGoal_Response * lhs, const sc2_bridge_interfaces__action__Attack_SendGoal_Response * rhs);

/// Copy a action/Attack message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_SendGoal_Response__copy(
  const sc2_bridge_interfaces__action__Attack_SendGoal_Response * input,
  sc2_bridge_interfaces__action__Attack_SendGoal_Response * output);

/// Initialize array of action/Attack messages.
/**
 * It allocates the memory for the number of elements and calls
 * sc2_bridge_interfaces__action__Attack_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_SendGoal_Response__Sequence__init(sc2_bridge_interfaces__action__Attack_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Attack messages.
/**
 * It calls
 * sc2_bridge_interfaces__action__Attack_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_SendGoal_Response__Sequence__fini(sc2_bridge_interfaces__action__Attack_SendGoal_Response__Sequence * array);

/// Create array of action/Attack messages.
/**
 * It allocates the memory for the array and calls
 * sc2_bridge_interfaces__action__Attack_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
sc2_bridge_interfaces__action__Attack_SendGoal_Response__Sequence *
sc2_bridge_interfaces__action__Attack_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Attack messages.
/**
 * It calls
 * sc2_bridge_interfaces__action__Attack_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_SendGoal_Response__Sequence__destroy(sc2_bridge_interfaces__action__Attack_SendGoal_Response__Sequence * array);

/// Check for action/Attack message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_SendGoal_Response__Sequence__are_equal(const sc2_bridge_interfaces__action__Attack_SendGoal_Response__Sequence * lhs, const sc2_bridge_interfaces__action__Attack_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Attack messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_SendGoal_Response__Sequence__copy(
  const sc2_bridge_interfaces__action__Attack_SendGoal_Response__Sequence * input,
  sc2_bridge_interfaces__action__Attack_SendGoal_Response__Sequence * output);

/// Initialize action/Attack message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sc2_bridge_interfaces__action__Attack_GetResult_Request
 * )) before or use
 * sc2_bridge_interfaces__action__Attack_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_GetResult_Request__init(sc2_bridge_interfaces__action__Attack_GetResult_Request * msg);

/// Finalize action/Attack message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_GetResult_Request__fini(sc2_bridge_interfaces__action__Attack_GetResult_Request * msg);

/// Create action/Attack message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sc2_bridge_interfaces__action__Attack_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
sc2_bridge_interfaces__action__Attack_GetResult_Request *
sc2_bridge_interfaces__action__Attack_GetResult_Request__create();

/// Destroy action/Attack message.
/**
 * It calls
 * sc2_bridge_interfaces__action__Attack_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_GetResult_Request__destroy(sc2_bridge_interfaces__action__Attack_GetResult_Request * msg);

/// Check for action/Attack message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_GetResult_Request__are_equal(const sc2_bridge_interfaces__action__Attack_GetResult_Request * lhs, const sc2_bridge_interfaces__action__Attack_GetResult_Request * rhs);

/// Copy a action/Attack message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_GetResult_Request__copy(
  const sc2_bridge_interfaces__action__Attack_GetResult_Request * input,
  sc2_bridge_interfaces__action__Attack_GetResult_Request * output);

/// Initialize array of action/Attack messages.
/**
 * It allocates the memory for the number of elements and calls
 * sc2_bridge_interfaces__action__Attack_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_GetResult_Request__Sequence__init(sc2_bridge_interfaces__action__Attack_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Attack messages.
/**
 * It calls
 * sc2_bridge_interfaces__action__Attack_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_GetResult_Request__Sequence__fini(sc2_bridge_interfaces__action__Attack_GetResult_Request__Sequence * array);

/// Create array of action/Attack messages.
/**
 * It allocates the memory for the array and calls
 * sc2_bridge_interfaces__action__Attack_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
sc2_bridge_interfaces__action__Attack_GetResult_Request__Sequence *
sc2_bridge_interfaces__action__Attack_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Attack messages.
/**
 * It calls
 * sc2_bridge_interfaces__action__Attack_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_GetResult_Request__Sequence__destroy(sc2_bridge_interfaces__action__Attack_GetResult_Request__Sequence * array);

/// Check for action/Attack message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_GetResult_Request__Sequence__are_equal(const sc2_bridge_interfaces__action__Attack_GetResult_Request__Sequence * lhs, const sc2_bridge_interfaces__action__Attack_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Attack messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_GetResult_Request__Sequence__copy(
  const sc2_bridge_interfaces__action__Attack_GetResult_Request__Sequence * input,
  sc2_bridge_interfaces__action__Attack_GetResult_Request__Sequence * output);

/// Initialize action/Attack message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sc2_bridge_interfaces__action__Attack_GetResult_Response
 * )) before or use
 * sc2_bridge_interfaces__action__Attack_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_GetResult_Response__init(sc2_bridge_interfaces__action__Attack_GetResult_Response * msg);

/// Finalize action/Attack message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_GetResult_Response__fini(sc2_bridge_interfaces__action__Attack_GetResult_Response * msg);

/// Create action/Attack message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sc2_bridge_interfaces__action__Attack_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
sc2_bridge_interfaces__action__Attack_GetResult_Response *
sc2_bridge_interfaces__action__Attack_GetResult_Response__create();

/// Destroy action/Attack message.
/**
 * It calls
 * sc2_bridge_interfaces__action__Attack_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_GetResult_Response__destroy(sc2_bridge_interfaces__action__Attack_GetResult_Response * msg);

/// Check for action/Attack message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_GetResult_Response__are_equal(const sc2_bridge_interfaces__action__Attack_GetResult_Response * lhs, const sc2_bridge_interfaces__action__Attack_GetResult_Response * rhs);

/// Copy a action/Attack message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_GetResult_Response__copy(
  const sc2_bridge_interfaces__action__Attack_GetResult_Response * input,
  sc2_bridge_interfaces__action__Attack_GetResult_Response * output);

/// Initialize array of action/Attack messages.
/**
 * It allocates the memory for the number of elements and calls
 * sc2_bridge_interfaces__action__Attack_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_GetResult_Response__Sequence__init(sc2_bridge_interfaces__action__Attack_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Attack messages.
/**
 * It calls
 * sc2_bridge_interfaces__action__Attack_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_GetResult_Response__Sequence__fini(sc2_bridge_interfaces__action__Attack_GetResult_Response__Sequence * array);

/// Create array of action/Attack messages.
/**
 * It allocates the memory for the array and calls
 * sc2_bridge_interfaces__action__Attack_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
sc2_bridge_interfaces__action__Attack_GetResult_Response__Sequence *
sc2_bridge_interfaces__action__Attack_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Attack messages.
/**
 * It calls
 * sc2_bridge_interfaces__action__Attack_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_GetResult_Response__Sequence__destroy(sc2_bridge_interfaces__action__Attack_GetResult_Response__Sequence * array);

/// Check for action/Attack message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_GetResult_Response__Sequence__are_equal(const sc2_bridge_interfaces__action__Attack_GetResult_Response__Sequence * lhs, const sc2_bridge_interfaces__action__Attack_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Attack messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_GetResult_Response__Sequence__copy(
  const sc2_bridge_interfaces__action__Attack_GetResult_Response__Sequence * input,
  sc2_bridge_interfaces__action__Attack_GetResult_Response__Sequence * output);

/// Initialize action/Attack message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sc2_bridge_interfaces__action__Attack_FeedbackMessage
 * )) before or use
 * sc2_bridge_interfaces__action__Attack_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_FeedbackMessage__init(sc2_bridge_interfaces__action__Attack_FeedbackMessage * msg);

/// Finalize action/Attack message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_FeedbackMessage__fini(sc2_bridge_interfaces__action__Attack_FeedbackMessage * msg);

/// Create action/Attack message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sc2_bridge_interfaces__action__Attack_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
sc2_bridge_interfaces__action__Attack_FeedbackMessage *
sc2_bridge_interfaces__action__Attack_FeedbackMessage__create();

/// Destroy action/Attack message.
/**
 * It calls
 * sc2_bridge_interfaces__action__Attack_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_FeedbackMessage__destroy(sc2_bridge_interfaces__action__Attack_FeedbackMessage * msg);

/// Check for action/Attack message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_FeedbackMessage__are_equal(const sc2_bridge_interfaces__action__Attack_FeedbackMessage * lhs, const sc2_bridge_interfaces__action__Attack_FeedbackMessage * rhs);

/// Copy a action/Attack message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_FeedbackMessage__copy(
  const sc2_bridge_interfaces__action__Attack_FeedbackMessage * input,
  sc2_bridge_interfaces__action__Attack_FeedbackMessage * output);

/// Initialize array of action/Attack messages.
/**
 * It allocates the memory for the number of elements and calls
 * sc2_bridge_interfaces__action__Attack_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_FeedbackMessage__Sequence__init(sc2_bridge_interfaces__action__Attack_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Attack messages.
/**
 * It calls
 * sc2_bridge_interfaces__action__Attack_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_FeedbackMessage__Sequence__fini(sc2_bridge_interfaces__action__Attack_FeedbackMessage__Sequence * array);

/// Create array of action/Attack messages.
/**
 * It allocates the memory for the array and calls
 * sc2_bridge_interfaces__action__Attack_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
sc2_bridge_interfaces__action__Attack_FeedbackMessage__Sequence *
sc2_bridge_interfaces__action__Attack_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Attack messages.
/**
 * It calls
 * sc2_bridge_interfaces__action__Attack_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__action__Attack_FeedbackMessage__Sequence__destroy(sc2_bridge_interfaces__action__Attack_FeedbackMessage__Sequence * array);

/// Check for action/Attack message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_FeedbackMessage__Sequence__are_equal(const sc2_bridge_interfaces__action__Attack_FeedbackMessage__Sequence * lhs, const sc2_bridge_interfaces__action__Attack_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Attack messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__action__Attack_FeedbackMessage__Sequence__copy(
  const sc2_bridge_interfaces__action__Attack_FeedbackMessage__Sequence * input,
  sc2_bridge_interfaces__action__Attack_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SC2_BRIDGE_INTERFACES__ACTION__DETAIL__ATTACK__FUNCTIONS_H_
