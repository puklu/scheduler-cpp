#include "../include/Task.hpp"

Task::Task(){};

Task::Task(int taskId, int projectId, int priority)
    : taskId_(taskId), projectId_(projectId), priority_(priority) {}

const int Task::getTaskId() const { return taskId_; }

const int Task::getProjectId() const { return projectId_; }

const int Task::getPriority() const { return priority_; }

bool Task::operator>(const Task &other) const {
  return priority_ > other.priority_;
}

bool Task::operator<(const Task &other) const {
  return priority_ < other.priority_;
}

bool Task::operator==(const Task &other) const {
  return priority_ == other.priority_;
}
