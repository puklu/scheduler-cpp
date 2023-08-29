#include "../include/Resource.hpp"

Resource::Resource(int resourceId) : resourceId_(resourceId) {}

// Resource::Resource(int resourceId){}
//   getters
int Resource::resourceId() { return resourceId_; }
Task<int, int, int> Resource::task() { return task_; }
std::string Resource::status() { return status_; }

void Resource::assignTask(Task<int, int, int> task) {
  task_ = task;
  status_ = "busy";
}
