#ifndef HELPERS_HPP_
#define HELPERS_HPP_

#include <iostream>
#include <map>

int randomNumberGenerator(const int lowerLimit, const int upperLimit);

std::map<std::string, int> argumentsParser(int argc, char *argv[]);

#endif