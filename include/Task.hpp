/**
 * @file Task.hpp
 * @author Vivek Punia
 * @brief Contains the declaration of the Task class, representing tasks in the
 scheduler.
 * @version 0.1
 * @date 2023-09-01
 *
 * @copyright Copyright (c) 2023
 *
 */
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

/**
 * @class Task
 * @brief Represents a task with an ID, project ID, and priority.
 *
 * The Task class defines a task with properties such as task ID, project ID,
 * and priority. It provides methods to access and compare these properties.
 */
class Task {
private:
  int taskId_ = -1;
  int projectId_ = -1;
  int priority_ = -1;

public:
  /**
   * @brief Default constructor for creating a task with uninitialized values.
   */
  Task();

  /**
   * @brief Constructor for creating a task with specified values.
   * @param taskId The unique identifier for the task.
   * @param projectId The project ID associated with the task.
   * @param priority The priority level of the task.
   */
  Task(int taskId, int projectId, int priority_);

  /**
   * @brief Get the task ID.
   * @return The task ID.
   */
  const int getTaskId() const;

  /**
   * @brief Get the project ID associated with the task.
   * @return The project ID.
   */
  const int getProjectId() const;

  /**
   * @brief Get the priority level of the task.
   * @return The priority level.
   */
  const int getPriority() const;

  /**
   * @brief Compare two tasks based on their priority.
   * @param other The other task to compare.
   * @return True if this task has higher priority than the other task.
   */
  bool operator>(const Task &other) const;

  /**
   * @brief Compare two tasks based on their priority.
   * @param other The other task to compare.
   * @return True if this task has lower priority than the other task.
   */
  bool operator<(const Task &other) const;

  /**
   * @brief Compare two tasks for equality.
   * @param other The other task to compare.
   * @return True if both tasks have the same ID, project ID, and priority.
   */
  bool operator==(const Task &other) const;
};

#endif
