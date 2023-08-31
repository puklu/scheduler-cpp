#include "../include/Resource.hpp"
#include "../include/Scheduler.hpp"
#include "../include/Task.hpp"
#include "../include/constants.hpp"
#include "../include/helpers.hpp"
#include "../include/loggers.hpp"
#include "../include/simulators.hpp"
#include <iostream>
#include <thread>

int main(int argc, char *argv[]) {

  std::map<std::string, int> arguments = argumentsParser(argc, argv);

  welcomeMessage();
  displayParameters(arguments["-n"], arguments["-p"]);

  Scheduler scheduler(arguments["-n"], arguments["-p"]);

  /// thread to simulate generation of tasks
  std::thread tasksGeneratorThread(generateTasks, arguments["-p"],
                                   std::ref(scheduler));

  /// thread to randomly remove tasks from resources
  std::thread removeTaskThread(completeTask, std::ref(scheduler));

  /// thread that works on allocating the tasks to resources
  std::thread schedulerThread(
      [&scheduler]() { scheduler.allocateResources(); });

  tasksGeneratorThread.join();
  schedulerThread.join();
  removeTaskThread.join();
}