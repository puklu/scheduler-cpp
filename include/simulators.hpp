#ifndef SIMULATORS_HPP_
#define SIMULATORS_HPP_

#include "../include/Scheduler.hpp"

void generateTasks(const int num_of_projects, Scheduler &scheduler);
void completeTask(Scheduler &scheduler);

#endif