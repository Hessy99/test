// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from blackboard_interfaces:msg/TaskMsg.idl
// generated code does not contain a copyright notice

#ifndef BLACKBOARD_INTERFACES__MSG__DETAIL__TASK_MSG__BUILDER_HPP_
#define BLACKBOARD_INTERFACES__MSG__DETAIL__TASK_MSG__BUILDER_HPP_

#include "blackboard_interfaces/msg/detail/task_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace blackboard_interfaces
{

namespace msg
{

namespace builder
{

class Init_TaskMsg_pose
{
public:
  explicit Init_TaskMsg_pose(::blackboard_interfaces::msg::TaskMsg & msg)
  : msg_(msg)
  {}
  ::blackboard_interfaces::msg::TaskMsg pose(::blackboard_interfaces::msg::TaskMsg::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::blackboard_interfaces::msg::TaskMsg msg_;
};

class Init_TaskMsg_robotid
{
public:
  explicit Init_TaskMsg_robotid(::blackboard_interfaces::msg::TaskMsg & msg)
  : msg_(msg)
  {}
  Init_TaskMsg_pose robotid(::blackboard_interfaces::msg::TaskMsg::_robotid_type arg)
  {
    msg_.robotid = std::move(arg);
    return Init_TaskMsg_pose(msg_);
  }

private:
  ::blackboard_interfaces::msg::TaskMsg msg_;
};

class Init_TaskMsg_energycost
{
public:
  explicit Init_TaskMsg_energycost(::blackboard_interfaces::msg::TaskMsg & msg)
  : msg_(msg)
  {}
  Init_TaskMsg_robotid energycost(::blackboard_interfaces::msg::TaskMsg::_energycost_type arg)
  {
    msg_.energycost = std::move(arg);
    return Init_TaskMsg_robotid(msg_);
  }

private:
  ::blackboard_interfaces::msg::TaskMsg msg_;
};

class Init_TaskMsg_cost
{
public:
  explicit Init_TaskMsg_cost(::blackboard_interfaces::msg::TaskMsg & msg)
  : msg_(msg)
  {}
  Init_TaskMsg_energycost cost(::blackboard_interfaces::msg::TaskMsg::_cost_type arg)
  {
    msg_.cost = std::move(arg);
    return Init_TaskMsg_energycost(msg_);
  }

private:
  ::blackboard_interfaces::msg::TaskMsg msg_;
};

class Init_TaskMsg_taskstate
{
public:
  explicit Init_TaskMsg_taskstate(::blackboard_interfaces::msg::TaskMsg & msg)
  : msg_(msg)
  {}
  Init_TaskMsg_cost taskstate(::blackboard_interfaces::msg::TaskMsg::_taskstate_type arg)
  {
    msg_.taskstate = std::move(arg);
    return Init_TaskMsg_cost(msg_);
  }

private:
  ::blackboard_interfaces::msg::TaskMsg msg_;
};

class Init_TaskMsg_payload
{
public:
  explicit Init_TaskMsg_payload(::blackboard_interfaces::msg::TaskMsg & msg)
  : msg_(msg)
  {}
  Init_TaskMsg_taskstate payload(::blackboard_interfaces::msg::TaskMsg::_payload_type arg)
  {
    msg_.payload = std::move(arg);
    return Init_TaskMsg_taskstate(msg_);
  }

private:
  ::blackboard_interfaces::msg::TaskMsg msg_;
};

class Init_TaskMsg_tasktype
{
public:
  explicit Init_TaskMsg_tasktype(::blackboard_interfaces::msg::TaskMsg & msg)
  : msg_(msg)
  {}
  Init_TaskMsg_payload tasktype(::blackboard_interfaces::msg::TaskMsg::_tasktype_type arg)
  {
    msg_.tasktype = std::move(arg);
    return Init_TaskMsg_payload(msg_);
  }

private:
  ::blackboard_interfaces::msg::TaskMsg msg_;
};

class Init_TaskMsg_priority
{
public:
  explicit Init_TaskMsg_priority(::blackboard_interfaces::msg::TaskMsg & msg)
  : msg_(msg)
  {}
  Init_TaskMsg_tasktype priority(::blackboard_interfaces::msg::TaskMsg::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_TaskMsg_tasktype(msg_);
  }

private:
  ::blackboard_interfaces::msg::TaskMsg msg_;
};

class Init_TaskMsg_taskid
{
public:
  Init_TaskMsg_taskid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskMsg_priority taskid(::blackboard_interfaces::msg::TaskMsg::_taskid_type arg)
  {
    msg_.taskid = std::move(arg);
    return Init_TaskMsg_priority(msg_);
  }

private:
  ::blackboard_interfaces::msg::TaskMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::blackboard_interfaces::msg::TaskMsg>()
{
  return blackboard_interfaces::msg::builder::Init_TaskMsg_taskid();
}

}  // namespace blackboard_interfaces

#endif  // BLACKBOARD_INTERFACES__MSG__DETAIL__TASK_MSG__BUILDER_HPP_
