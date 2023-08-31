#include "../include/Scheduler.hpp"
#include "../include/Resource.hpp"
#include <chrono>
#include <mutex>
#include <queue>
#include <thread>
#include <vector>

std::mutex schedulerLock;

Scheduler::Scheduler(int num_of_resources, int num_of_projects) {
  for (int i = 0; i < num_of_resources; i++) {
    resources_.push_back(Resource(i));
  }

  for (int j = 0; j < num_of_projects; j++) {
    // projects_queues_[j] = std::queue<Task<int, int, int>>();
    // projects_queues_[j] = std::priority_queue<Task>();
    projects_queues_[j] =
        std::priority_queue<Task, std::vector<Task>, std::greater<Task>>();
  }
}

// void Scheduler::addTask(Task<int, int, int> task) {
void Scheduler::addTask(Task task) {
  projects_queues_[task.getProjectId()].push(task);
  std::cout << "  task with id: " << task.getTaskId()
            << ", project id: " << task.getProjectId()
            << ", priority: " << task.getPriority() << ", added to scheduler"
            << std::endl;
}

std::vector<Resource> &Scheduler::getResources() { return resources_; }

void Scheduler::allocateResources() {
  while (true) {
    for (auto &pair : projects_queues_) {
      if (!pair.second.empty()) {
        std::lock_guard<std::mutex> lockguard(schedulerLock);
        for (auto &resource : resources_) {
          if (resource.status() == "free") {
            // Task<int, int, int> task = pair.second.front();
            Task task = pair.second.top();
            pair.second.pop();
            resource.assignTask(task);
            break;
          }
        }
        // std::this_thread::sleep_for(std::chrono::seconds(1));
      }
    }
  }
}
