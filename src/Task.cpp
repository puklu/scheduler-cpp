#include "../include/Task.hpp"

Task::Task(){};

Task::Task(int taskId, int projectId, int priority)
    : taskId_(taskId), projectId_(projectId), priority_(priority) {}

const int Task::taskId() const { return taskId_; }

const int Task::projectId() const { return projectId_; }

const int Task::priority() const { return priority_; }
