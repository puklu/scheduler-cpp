#include "../include/loggers.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

// template <typename T> void print(const T &message) { cout << message << endl;
// }
void printInt(const int &message) { cout << message << endl; }

// template void print<int>(const int &message);
// template void print<string>(const string &message);

void printMap(std::map<int, int> myMap) {
  for (auto &pair : myMap) {
    cout << pair.first << " : " << pair.second << endl;
  }
}

void welcomeMessage() {
  cout << "\n\n";
  cout << "*********************************************************" << endl;
  cout << "                   Scheduler initiated                   " << endl;
  cout << "*********************************************************" << endl;
  cout << "\n\n";
}

void displayParameters(const int num_of_resources, const int num_of_projects) {
  cout << "                 Number of resources: " << num_of_resources << endl;
  cout << "                 Number of projects:  " << num_of_projects << endl
       << endl;
}