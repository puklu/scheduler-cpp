/**
 * @file Resource.hpp
 * @author Vivek
 * @brief Contains the definition of the Resource class.
 * @version 0.1
 * @date 2023-09-01
 *
 * @copyright Copyright (c) 2023
 *
 */
#ifndef RESOURCE_HPP_
#define RESOURCE_HPP_

#include "../include/Task.hpp"
#include <iostream>

/**
 * @brief Represents a resource in the system.

 * The Resource class models a resource that can be assigned tasks and used for
 * task processing.
 * It tracks the resource's ID, assigned task, and status.
 *
 */
class Resource {
private:
  int resourceId_;
  // Task<int, int, int> task_;
  Task task_;
  std::string status_ = "free";

public:
  /**
   * @brief Construct a new Resource object.
   *
   * @param resourceId ID for the resource.
   */
  Resource(int resourceId);

  /**
   * @brief Get the ID of the resource.
   *
   * @return The resource's ID.
   */
  int resourceId();

  /**
   * @brief Get the currently assigned task.
   * @return The task assigned to the resource.
   */
  // Task<int, int, int> task();
  Task task();

  /**
   * @brief Get the status of the resource.
   *
   * @return The current status ("free" or "busy").
   */
  std::string status();

  /**
   * @brief Assign a task to the resource.
   * @param task descriptionThe task to be assigned.
   */
  // void assignTask(Task<int, int, int> task);
  void assignTask(Task task);

  /**
   * @brief Remove the currently assigned task from the resource.
   *
   */
  void removeTask();
};

#endif