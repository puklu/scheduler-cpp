#ifndef LOGGERS_HPP_
#define LOGGERS_HPP_

#include <iostream>
#include <map>
#include <string>

using std::string;

// template <typename T> void print(const T &message);
void printInt(const int &message);

void printMap(std::map<int, int> myMap);

void welcomeMessage();

void displayParameters(const int num_of_resources, const int num_of_projects);

#endif