#ifndef TASK_IMPL_HPP_
#define TASK_IMPL_HPP_

#include "../include/Task.hpp"

/*
template <class T, class U, class V> Task<T, U, V>::Task(){};

template <class T, class U, class V>
Task<T, U, V>::Task(T taskId, U projectId, V priority)
    : taskId_(taskId), projectId_(projectId), priority_(priority) {}

template <class T, class U, class V> const T Task<T, U, V>::taskId() const {
  return taskId_;
}

template <class T, class U, class V> const U Task<T, U, V>::projectId() const {
  return projectId_;
}

template <class T, class U, class V> const V Task<T, U, V>::priority() const {
  return priority_;
}
*/

Task::Task(){};

Task::Task(int taskId, int projectId, int priority)
    : taskId_(taskId), projectId_(projectId), priority_(priority) {}

const int Task::taskId() const { return taskId_; }

const int Task::projectId() const { return projectId_; }

const int Task::priority() const { return priority_; }

#endif