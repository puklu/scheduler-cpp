#include "../include/Scheduler.hpp"
#include "../include/Task.hpp"
#include "../include/helpers.hpp"
#include "../include/loggers.hpp"
#include <algorithm>
#include <chrono>
#include <iostream>
#include <map>
#include <thread>

void generateTasks(const int num_of_projects, Scheduler scheduler) {

  std::map<int, int> tasks_count;

  for (int i = 0; i < num_of_projects; i++) {
    tasks_count[i] = 0;
  }

  while (true) {
    int project_id = randomNumberGenerator(0, num_of_projects - 1);
    int task_id = tasks_count[project_id];
    tasks_count[project_id]++;
    int priority = randomNumberGenerator(0, 10);

    Task<int, int, int> task(task_id, project_id, priority);

    scheduler.addTask(task);

    // print(task.taskId());

    std::this_thread::sleep_for(
        std::chrono::seconds(randomNumberGenerator(2, 5)));
  }
}