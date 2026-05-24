// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sc2_bridge_interfaces:msg/ContactMark.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__MSG__DETAIL__CONTACT_MARK__FUNCTIONS_H_
#define SC2_BRIDGE_INTERFACES__MSG__DETAIL__CONTACT_MARK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sc2_bridge_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "sc2_bridge_interfaces/msg/detail/contact_mark__struct.h"

/// Initialize msg/ContactMark message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sc2_bridge_interfaces__msg__ContactMark
 * )) before or use
 * sc2_bridge_interfaces__msg__ContactMark__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__msg__ContactMark__init(sc2_bridge_interfaces__msg__ContactMark * msg);

/// Finalize msg/ContactMark message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__msg__ContactMark__fini(sc2_bridge_interfaces__msg__ContactMark * msg);

/// Create msg/ContactMark message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sc2_bridge_interfaces__msg__ContactMark__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
sc2_bridge_interfaces__msg__ContactMark *
sc2_bridge_interfaces__msg__ContactMark__create();

/// Destroy msg/ContactMark message.
/**
 * It calls
 * sc2_bridge_interfaces__msg__ContactMark__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__msg__ContactMark__destroy(sc2_bridge_interfaces__msg__ContactMark * msg);

/// Check for msg/ContactMark message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__msg__ContactMark__are_equal(const sc2_bridge_interfaces__msg__ContactMark * lhs, const sc2_bridge_interfaces__msg__ContactMark * rhs);

/// Copy a msg/ContactMark message.
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
sc2_bridge_interfaces__msg__ContactMark__copy(
  const sc2_bridge_interfaces__msg__ContactMark * input,
  sc2_bridge_interfaces__msg__ContactMark * output);

/// Initialize array of msg/ContactMark messages.
/**
 * It allocates the memory for the number of elements and calls
 * sc2_bridge_interfaces__msg__ContactMark__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__msg__ContactMark__Sequence__init(sc2_bridge_interfaces__msg__ContactMark__Sequence * array, size_t size);

/// Finalize array of msg/ContactMark messages.
/**
 * It calls
 * sc2_bridge_interfaces__msg__ContactMark__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__msg__ContactMark__Sequence__fini(sc2_bridge_interfaces__msg__ContactMark__Sequence * array);

/// Create array of msg/ContactMark messages.
/**
 * It allocates the memory for the array and calls
 * sc2_bridge_interfaces__msg__ContactMark__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
sc2_bridge_interfaces__msg__ContactMark__Sequence *
sc2_bridge_interfaces__msg__ContactMark__Sequence__create(size_t size);

/// Destroy array of msg/ContactMark messages.
/**
 * It calls
 * sc2_bridge_interfaces__msg__ContactMark__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
void
sc2_bridge_interfaces__msg__ContactMark__Sequence__destroy(sc2_bridge_interfaces__msg__ContactMark__Sequence * array);

/// Check for msg/ContactMark message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sc2_bridge_interfaces
bool
sc2_bridge_interfaces__msg__ContactMark__Sequence__are_equal(const sc2_bridge_interfaces__msg__ContactMark__Sequence * lhs, const sc2_bridge_interfaces__msg__ContactMark__Sequence * rhs);

/// Copy an array of msg/ContactMark messages.
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
sc2_bridge_interfaces__msg__ContactMark__Sequence__copy(
  const sc2_bridge_interfaces__msg__ContactMark__Sequence * input,
  sc2_bridge_interfaces__msg__ContactMark__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SC2_BRIDGE_INTERFACES__MSG__DETAIL__CONTACT_MARK__FUNCTIONS_H_
