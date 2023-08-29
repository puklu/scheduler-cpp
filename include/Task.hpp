#ifndef TASK_HPP_
#define TASK_HPP_

template <class T, class U, class V> class Task {
private:
  T taskId_ = 0;
  U projectId_ = 0;
  V priority_ = 0;

public:
  Task();
  Task(T taskId, U projectId, V priority_);
  const T taskId() const;
  const U projectId() const;
  const V priority() const;
};

#include "../include/Task_impl.hpp"

#endif
