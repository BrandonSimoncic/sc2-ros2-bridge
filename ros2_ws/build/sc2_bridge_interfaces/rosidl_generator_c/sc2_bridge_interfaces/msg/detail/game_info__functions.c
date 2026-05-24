// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sc2_bridge_interfaces:msg/GameInfo.idl
// generated code does not contain a copyright notice
#include "sc2_bridge_interfaces/msg/detail/game_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `map_name`
// Member `game_version`
// Member `world_frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `playable_min`
// Member `playable_max`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
sc2_bridge_interfaces__msg__GameInfo__init(sc2_bridge_interfaces__msg__GameInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sc2_bridge_interfaces__msg__GameInfo__fini(msg);
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__init(&msg->map_name)) {
    sc2_bridge_interfaces__msg__GameInfo__fini(msg);
    return false;
  }
  // game_version
  if (!rosidl_runtime_c__String__init(&msg->game_version)) {
    sc2_bridge_interfaces__msg__GameInfo__fini(msg);
    return false;
  }
  // realtime
  // world_frame_id
  if (!rosidl_runtime_c__String__init(&msg->world_frame_id)) {
    sc2_bridge_interfaces__msg__GameInfo__fini(msg);
    return false;
  }
  // playable_min
  if (!geometry_msgs__msg__Point__init(&msg->playable_min)) {
    sc2_bridge_interfaces__msg__GameInfo__fini(msg);
    return false;
  }
  // playable_max
  if (!geometry_msgs__msg__Point__init(&msg->playable_max)) {
    sc2_bridge_interfaces__msg__GameInfo__fini(msg);
    return false;
  }
  return true;
}

void
sc2_bridge_interfaces__msg__GameInfo__fini(sc2_bridge_interfaces__msg__GameInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // map_name
  rosidl_runtime_c__String__fini(&msg->map_name);
  // game_version
  rosidl_runtime_c__String__fini(&msg->game_version);
  // realtime
  // world_frame_id
  rosidl_runtime_c__String__fini(&msg->world_frame_id);
  // playable_min
  geometry_msgs__msg__Point__fini(&msg->playable_min);
  // playable_max
  geometry_msgs__msg__Point__fini(&msg->playable_max);
}

bool
sc2_bridge_interfaces__msg__GameInfo__are_equal(const sc2_bridge_interfaces__msg__GameInfo * lhs, const sc2_bridge_interfaces__msg__GameInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map_name), &(rhs->map_name)))
  {
    return false;
  }
  // game_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->game_version), &(rhs->game_version)))
  {
    return false;
  }
  // realtime
  if (lhs->realtime != rhs->realtime) {
    return false;
  }
  // world_frame_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->world_frame_id), &(rhs->world_frame_id)))
  {
    return false;
  }
  // playable_min
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->playable_min), &(rhs->playable_min)))
  {
    return false;
  }
  // playable_max
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->playable_max), &(rhs->playable_max)))
  {
    return false;
  }
  return true;
}

bool
sc2_bridge_interfaces__msg__GameInfo__copy(
  const sc2_bridge_interfaces__msg__GameInfo * input,
  sc2_bridge_interfaces__msg__GameInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__copy(
      &(input->map_name), &(output->map_name)))
  {
    return false;
  }
  // game_version
  if (!rosidl_runtime_c__String__copy(
      &(input->game_version), &(output->game_version)))
  {
    return false;
  }
  // realtime
  output->realtime = input->realtime;
  // world_frame_id
  if (!rosidl_runtime_c__String__copy(
      &(input->world_frame_id), &(output->world_frame_id)))
  {
    return false;
  }
  // playable_min
  if (!geometry_msgs__msg__Point__copy(
      &(input->playable_min), &(output->playable_min)))
  {
    return false;
  }
  // playable_max
  if (!geometry_msgs__msg__Point__copy(
      &(input->playable_max), &(output->playable_max)))
  {
    return false;
  }
  return true;
}

sc2_bridge_interfaces__msg__GameInfo *
sc2_bridge_interfaces__msg__GameInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sc2_bridge_interfaces__msg__GameInfo * msg = (sc2_bridge_interfaces__msg__GameInfo *)allocator.allocate(sizeof(sc2_bridge_interfaces__msg__GameInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sc2_bridge_interfaces__msg__GameInfo));
  bool success = sc2_bridge_interfaces__msg__GameInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sc2_bridge_interfaces__msg__GameInfo__destroy(sc2_bridge_interfaces__msg__GameInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sc2_bridge_interfaces__msg__GameInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sc2_bridge_interfaces__msg__GameInfo__Sequence__init(sc2_bridge_interfaces__msg__GameInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sc2_bridge_interfaces__msg__GameInfo * data = NULL;

  if (size) {
    data = (sc2_bridge_interfaces__msg__GameInfo *)allocator.zero_allocate(size, sizeof(sc2_bridge_interfaces__msg__GameInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sc2_bridge_interfaces__msg__GameInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sc2_bridge_interfaces__msg__GameInfo__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sc2_bridge_interfaces__msg__GameInfo__Sequence__fini(sc2_bridge_interfaces__msg__GameInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sc2_bridge_interfaces__msg__GameInfo__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sc2_bridge_interfaces__msg__GameInfo__Sequence *
sc2_bridge_interfaces__msg__GameInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sc2_bridge_interfaces__msg__GameInfo__Sequence * array = (sc2_bridge_interfaces__msg__GameInfo__Sequence *)allocator.allocate(sizeof(sc2_bridge_interfaces__msg__GameInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sc2_bridge_interfaces__msg__GameInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sc2_bridge_interfaces__msg__GameInfo__Sequence__destroy(sc2_bridge_interfaces__msg__GameInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sc2_bridge_interfaces__msg__GameInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sc2_bridge_interfaces__msg__GameInfo__Sequence__are_equal(const sc2_bridge_interfaces__msg__GameInfo__Sequence * lhs, const sc2_bridge_interfaces__msg__GameInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sc2_bridge_interfaces__msg__GameInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sc2_bridge_interfaces__msg__GameInfo__Sequence__copy(
  const sc2_bridge_interfaces__msg__GameInfo__Sequence * input,
  sc2_bridge_interfaces__msg__GameInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sc2_bridge_interfaces__msg__GameInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sc2_bridge_interfaces__msg__GameInfo * data =
      (sc2_bridge_interfaces__msg__GameInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sc2_bridge_interfaces__msg__GameInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sc2_bridge_interfaces__msg__GameInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sc2_bridge_interfaces__msg__GameInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
