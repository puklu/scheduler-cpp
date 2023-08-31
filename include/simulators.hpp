/**
 * @file simulators.hpp
 * @author Vivek Punia ()
 * @brief Contains functions for simulating task generation and completion.
 * @version 0.1
 * @date 2023-09-01
 *
 * @copyright Copyright (c) 2023
 *
 */
#ifndef SIMULATORS_HPP_
#define SIMULATORS_HPP_

#include "../include/Scheduler.hpp"

/**
 * @brief Generates tasks and adds them to the scheduler's project queues.
 * @param num_of_projects Number of projects to generate tasks for.
 * @param scheduler Reference to the scheduler instance.
 */
void generateTasks(const int num_of_projects, Scheduler &scheduler);

/**
 * @brief Simulates task completion by removing tasks from resources.
 * @param scheduler Reference to the scheduler instance.
 */
void completeTask(Scheduler &scheduler);

#endif