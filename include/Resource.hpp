#ifndef RESOURCE_HPP_
#define RESOURCE_HPP_

#include "../include/Task.hpp"
#include <iostream>

class Resource {
private:
  int resourceId_;
  Task<int, int, int> task_;
  std::string status_ = "free";

public:
  // constructor
  Resource(int resourceId);

  // getters
  int resourceId();
  Task<int, int, int> task();
  std::string status();

  // setters
  void assignTask(Task<int, int, int> task);
};

#endif