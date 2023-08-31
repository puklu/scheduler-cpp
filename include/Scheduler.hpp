/**
 * @file Scheduler.hpp
 * @author Vivek Punia ()
 * @brief
 * @version 0.1
 * @date 2023-09-01
 *
 * @copyright Copyright (c) 2023
 *
 */
#ifndef SCHEDULER_HPP_
#define SCHEDULER_HPP_

#include "../include/Resource.hpp"
#include "../include/Task.hpp"
#include "../include/constants.hpp"
#include <map>
#include <queue>
#include <vector>

/**
 * @class Scheduler
 * @brief Manages resource allocation and task scheduling.
 *
 * The Scheduler class is responsible for managing resource allocation and task
 * scheduling. It maintains a list of resources and project queues, allowing
 * tasks to be added and allocated to resources based on their priority.
 */
class Scheduler {
private:
  std::vector<Resource> resources_; /**< List of available resources. */
  std::map<int,
           std::priority_queue<Task, std::vector<Task>, std::greater<Task>>>
      projects_queues_; /**< Map of project queues with tasks sorted by
                           priority. */

public:
  /** @brief Constructor for the Scheduler class.
   * @param num_of_resources Number of available resources.
   * @param num_of_projects Number of projects.
   */
  Scheduler(int num_of_resources, int num_of_projects);

  /**
   * @brief Adds a task to the appropriate project queue.
   * @param task The task to be added.
   */
  // void addTask(Task<int, int, int> task);
  void addTask(Task task);

  /**
   * @brief Allocates resources to tasks based on priority.
   */
  void allocateResources();

  /**
   * @brief Retrieves the list of available resources.
   * @return A reference to the list of resources.
   */
  std::vector<Resource> &getResources();
};

#endif