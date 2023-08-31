#include "../include/Resource.hpp"
#include <mutex>

std::mutex resourceLock;

Resource::Resource(int resourceId) : resourceId_(resourceId) {}

// Resource::Resource(int resourceId){}
//   getters
int Resource::resourceId() { return resourceId_; }
// Task<int, int, int> Resource::task() { return task_; }
Task Resource::task() { return task_; }
std::string Resource::status() { return status_; }

// void Resource::assignTask(Task<int, int, int> task) {
void Resource::assignTask(Task task) {
  std::lock_guard<std::mutex> lockGuard(resourceLock);
  task_ = task;
  status_ = "busy";

  std::cout << "\u2713 task with id: " << task.getTaskId()
            << ", project id: " << task.getProjectId()
            << ", priority: " << task.getPriority()
            << ", assigned resource: " << resourceId_ << std::endl;
}

void Resource::removeTask() {
  std::lock_guard<std::mutex> lockGuard(resourceLock);

  if (task_.getTaskId() != -1) {
    status_ = "free";

    std::cout << "\u2717 task with id: " << task_.getTaskId()
              << ", project id: " << task_.getProjectId()
              << ", priority: " << task_.getPriority()
              << " removed from resource: " << resourceId_ << std::endl;

    task_ = Task();
  }
}