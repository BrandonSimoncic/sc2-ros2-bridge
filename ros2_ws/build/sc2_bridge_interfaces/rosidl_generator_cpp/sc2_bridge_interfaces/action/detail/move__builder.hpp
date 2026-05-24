// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sc2_bridge_interfaces:action/Move.idl
// generated code does not contain a copyright notice

#ifndef SC2_BRIDGE_INTERFACES__ACTION__DETAIL__MOVE__BUILDER_HPP_
#define SC2_BRIDGE_INTERFACES__ACTION__DETAIL__MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sc2_bridge_interfaces/action/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sc2_bridge_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_Goal_tolerance
{
public:
  explicit Init_Move_Goal_tolerance(::sc2_bridge_interfaces::action::Move_Goal & msg)
  : msg_(msg)
  {}
  ::sc2_bridge_interfaces::action::Move_Goal tolerance(::sc2_bridge_interfaces::action::Move_Goal::_tolerance_type arg)
  {
    msg_.tolerance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sc2_bridge_interfaces::action::Move_Goal msg_;
};

class Init_Move_Goal_queue
{
public:
  explicit Init_Move_Goal_queue(::sc2_bridge_interfaces::action::Move_Goal & msg)
  : msg_(msg)
  {}
  Init_Move_Goal_tolerance queue(::sc2_bridge_interfaces::action::Move_Goal::_queue_type arg)
  {
    msg_.queue = std::move(arg);
    return Init_Move_Goal_tolerance(msg_);
  }

private:
  ::sc2_bridge_interfaces::action::Move_Goal msg_;
};

class Init_Move_Goal_target
{
public:
  Init_Move_Goal_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Goal_queue target(::sc2_bridge_interfaces::action::Move_Goal::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_Move_Goal_queue(msg_);
  }

private:
  ::sc2_bridge_interfaces::action::Move_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sc2_bridge_interfaces::action::Move_Goal>()
{
  return sc2_bridge_interfaces::action::builder::Init_Move_Goal_target();
}

}  // namespace sc2_bridge_interfaces


namespace sc2_bridge_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_Result_message
{
public:
  explicit Init_Move_Result_message(::sc2_bridge_interfaces::action::Move_Result & msg)
  : msg_(msg)
  {}
  ::sc2_bridge_interfaces::action::Move_Result message(::sc2_bridge_interfaces::action::Move_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sc2_bridge_interfaces::action::Move_Result msg_;
};

class Init_Move_Result_success
{
public:
  Init_Move_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Result_message success(::sc2_bridge_interfaces::action::Move_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Move_Result_message(msg_);
  }

private:
  ::sc2_bridge_interfaces::action::Move_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sc2_bridge_interfaces::action::Move_Result>()
{
  return sc2_bridge_interfaces::action::builder::Init_Move_Result_success();
}

}  // namespace sc2_bridge_interfaces


namespace sc2_bridge_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_Feedback_arrived
{
public:
  explicit Init_Move_Feedback_arrived(::sc2_bridge_interfaces::action::Move_Feedback & msg)
  : msg_(msg)
  {}
  ::sc2_bridge_interfaces::action::Move_Feedback arrived(::sc2_bridge_interfaces::action::Move_Feedback::_arrived_type arg)
  {
    msg_.arrived = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sc2_bridge_interfaces::action::Move_Feedback msg_;
};

class Init_Move_Feedback_distance_remaining
{
public:
  Init_Move_Feedback_distance_remaining()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Feedback_arrived distance_remaining(::sc2_bridge_interfaces::action::Move_Feedback::_distance_remaining_type arg)
  {
    msg_.distance_remaining = std::move(arg);
    return Init_Move_Feedback_arrived(msg_);
  }

private:
  ::sc2_bridge_interfaces::action::Move_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sc2_bridge_interfaces::action::Move_Feedback>()
{
  return sc2_bridge_interfaces::action::builder::Init_Move_Feedback_distance_remaining();
}

}  // namespace sc2_bridge_interfaces


namespace sc2_bridge_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Request_goal
{
public:
  explicit Init_Move_SendGoal_Request_goal(::sc2_bridge_interfaces::action::Move_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::sc2_bridge_interfaces::action::Move_SendGoal_Request goal(::sc2_bridge_interfaces::action::Move_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sc2_bridge_interfaces::action::Move_SendGoal_Request msg_;
};

class Init_Move_SendGoal_Request_goal_id
{
public:
  Init_Move_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Request_goal goal_id(::sc2_bridge_interfaces::action::Move_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_SendGoal_Request_goal(msg_);
  }

private:
  ::sc2_bridge_interfaces::action::Move_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sc2_bridge_interfaces::action::Move_SendGoal_Request>()
{
  return sc2_bridge_interfaces::action::builder::Init_Move_SendGoal_Request_goal_id();
}

}  // namespace sc2_bridge_interfaces


namespace sc2_bridge_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Response_stamp
{
public:
  explicit Init_Move_SendGoal_Response_stamp(::sc2_bridge_interfaces::action::Move_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::sc2_bridge_interfaces::action::Move_SendGoal_Response stamp(::sc2_bridge_interfaces::action::Move_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sc2_bridge_interfaces::action::Move_SendGoal_Response msg_;
};

class Init_Move_SendGoal_Response_accepted
{
public:
  Init_Move_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Response_stamp accepted(::sc2_bridge_interfaces::action::Move_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Move_SendGoal_Response_stamp(msg_);
  }

private:
  ::sc2_bridge_interfaces::action::Move_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sc2_bridge_interfaces::action::Move_SendGoal_Response>()
{
  return sc2_bridge_interfaces::action::builder::Init_Move_SendGoal_Response_accepted();
}

}  // namespace sc2_bridge_interfaces


namespace sc2_bridge_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Request_goal_id
{
public:
  Init_Move_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sc2_bridge_interfaces::action::Move_GetResult_Request goal_id(::sc2_bridge_interfaces::action::Move_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sc2_bridge_interfaces::action::Move_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sc2_bridge_interfaces::action::Move_GetResult_Request>()
{
  return sc2_bridge_interfaces::action::builder::Init_Move_GetResult_Request_goal_id();
}

}  // namespace sc2_bridge_interfaces


namespace sc2_bridge_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Response_result
{
public:
  explicit Init_Move_GetResult_Response_result(::sc2_bridge_interfaces::action::Move_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::sc2_bridge_interfaces::action::Move_GetResult_Response result(::sc2_bridge_interfaces::action::Move_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sc2_bridge_interfaces::action::Move_GetResult_Response msg_;
};

class Init_Move_GetResult_Response_status
{
public:
  Init_Move_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_GetResult_Response_result status(::sc2_bridge_interfaces::action::Move_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Move_GetResult_Response_result(msg_);
  }

private:
  ::sc2_bridge_interfaces::action::Move_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sc2_bridge_interfaces::action::Move_GetResult_Response>()
{
  return sc2_bridge_interfaces::action::builder::Init_Move_GetResult_Response_status();
}

}  // namespace sc2_bridge_interfaces


namespace sc2_bridge_interfaces
{

namespace action
{

namespace builder
{

class Init_Move_FeedbackMessage_feedback
{
public:
  explicit Init_Move_FeedbackMessage_feedback(::sc2_bridge_interfaces::action::Move_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::sc2_bridge_interfaces::action::Move_FeedbackMessage feedback(::sc2_bridge_interfaces::action::Move_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sc2_bridge_interfaces::action::Move_FeedbackMessage msg_;
};

class Init_Move_FeedbackMessage_goal_id
{
public:
  Init_Move_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_FeedbackMessage_feedback goal_id(::sc2_bridge_interfaces::action::Move_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_FeedbackMessage_feedback(msg_);
  }

private:
  ::sc2_bridge_interfaces::action::Move_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sc2_bridge_interfaces::action::Move_FeedbackMessage>()
{
  return sc2_bridge_interfaces::action::builder::Init_Move_FeedbackMessage_goal_id();
}

}  // namespace sc2_bridge_interfaces

#endif  // SC2_BRIDGE_INTERFACES__ACTION__DETAIL__MOVE__BUILDER_HPP_
