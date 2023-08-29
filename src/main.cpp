#include "../include/Resource.hpp"
#include "../include/Scheduler.hpp"
#include "../include/Task.hpp"
#include "../include/constants.hpp"
#include "../include/loggers.hpp"
#include "../include/simulators.hpp"
#include <iostream>
#include <thread>

int main() {

  std::thread tasksGeneratorThread(generateTasks, NUMBER_OF_PROJECTS);

  Scheduler scheduler(NUMBER_OF_RESOURCES, NUMBER_OF_PROJECTS);
  std::thread schedulerThread(&Scheduler::allocateResources, &scheduler);
  tasksGeneratorThread.join();
  schedulerThread.join();
}