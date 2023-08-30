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