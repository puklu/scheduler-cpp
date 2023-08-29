#include "../include/Scheduler.hpp"
#include "../include/Resource.hpp"
#include <chrono>
#include <queue>
#include <thread>
#include <vector>

Scheduler::Scheduler(int num_of_resources, int num_of_projects) {
  for (int i = 0; i < num_of_resources; i++) {
    resources_.push_back(Resource(i));
  }

  for (int j = 0; j < num_of_projects; j++) {
    projects_queues_[j] = std::queue<Task<int, int, int>>();
  }
}

void Scheduler::addTask(Task<int, int, int> task) {
  projects_queues_[task.projectId()].push(task);
}

void Scheduler::allocateResources() {
  while (true) {
    for (auto &pair : projects_queues_) {
      if (!pair.second.empty()) {
        for (auto &resource : resources_) {
          if (resource.status() == "free") {
            Task<int, int, int> task = pair.second.front();
            pair.second.pop();
            resource.assignTask(task);
            break;
          }
        }
        std::this_thread::sleep_for(std::chrono::seconds(1));
      }
    }
  }
}
