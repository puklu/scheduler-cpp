#include "../include/Resource.hpp"
#include "../include/Scheduler.hpp"
#include "../include/Task.hpp"
#include "../include/constants.hpp"
#include "../include/loggers.hpp"
#include "../include/simulators.hpp"
#include <iostream>
#include <thread>

int main() {

  Scheduler scheduler(NUMBER_OF_RESOURCES, NUMBER_OF_PROJECTS);

  std::thread tasksGeneratorThread(generateTasks, NUMBER_OF_PROJECTS,
                                   std::ref(scheduler));

  std::thread schedulerThread(
      [&scheduler]() { scheduler.allocateResources(); });
  tasksGeneratorThread.join();
  schedulerThread.join();
}