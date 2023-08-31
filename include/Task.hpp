#ifndef TASK_HPP_
#define TASK_HPP_

/*
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
*/

class Task {
private:
  int taskId_ = -1;
  int projectId_ = -1;
  int priority_ = -1;

public:
  Task();
  Task(int taskId, int projectId, int priority_);
  const int getTaskId() const;
  const int getProjectId() const;
  const int getPriority() const;

  bool operator>(const Task &other) const;
  bool operator<(const Task &other) const;
  bool operator==(const Task &other) const;
};

#endif
