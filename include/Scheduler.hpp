#ifndef SCHEDULER_HPP_
#define SCHEDULER_HPP_

#include "../include/Resource.hpp"
#include "../include/Task.hpp"
#include "../include/constants.hpp"
#include <map>
#include <queue>
#include <vector>

class Scheduler {
private:
  std::vector<Resource> resources_;
  // std::map<int, std::queue<Task<int, int, int>>> projects_queues_;
  std::map<int, std::queue<Task>> projects_queues_;

public:
  Scheduler(int num_of_resources, int num_of_projects);
  // void addTask(Task<int, int, int> task);
  void addTask(Task task);
  void allocateResources();
};

#endif