// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from blackboard_interfaces:msg/TaskMsg.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "blackboard_interfaces/msg/detail/task_msg__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace blackboard_interfaces
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _TaskMsg_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TaskMsg_type_support_ids_t;

static const _TaskMsg_type_support_ids_t _TaskMsg_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TaskMsg_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TaskMsg_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TaskMsg_type_support_symbol_names_t _TaskMsg_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, blackboard_interfaces, msg, TaskMsg)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, blackboard_interfaces, msg, TaskMsg)),
  }
};

typedef struct _TaskMsg_type_support_data_t
{
  void * data[2];
} _TaskMsg_type_support_data_t;

static _TaskMsg_type_support_data_t _TaskMsg_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TaskMsg_message_typesupport_map = {
  2,
  "blackboard_interfaces",
  &_TaskMsg_message_typesupport_ids.typesupport_identifier[0],
  &_TaskMsg_message_typesupport_symbol_names.symbol_name[0],
  &_TaskMsg_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TaskMsg_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TaskMsg_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace blackboard_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<blackboard_interfaces::msg::TaskMsg>()
{
  return &::blackboard_interfaces::msg::rosidl_typesupport_cpp::TaskMsg_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, blackboard_interfaces, msg, TaskMsg)() {
  return get_message_type_support_handle<blackboard_interfaces::msg::TaskMsg>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
