/**
 * @file helpers.hpp
 * @author Vivek Punia ()
 * @brief Contains helper functions for various tasks.
 * @version 0.1
 * @date 2023-09-01
 *
 * @copyright Copyright (c) 2023
 *
 */
#ifndef HELPERS_HPP_
#define HELPERS_HPP_

#include <iostream>
#include <map>

/**
 * @brief Generates a random integer within the specified range.
 * @param lowerLimit The lower limit of the random number range.
 * @param upperLimit The upper limit of the random number range.
 * @return Random integer within the specified range.
 */
int randomNumberGenerator(const int lowerLimit, const int upperLimit);

/**
 * @brief Parses command line arguments and returns a map of arguments and
 * values.
 * @param argc Number of command line arguments.
 * @param argv Array of command line argument strings.
 * @return Map of parsed arguments and their corresponding values.
 */
std::map<std::string, int> argumentsParser(int argc, char *argv[]);

#endif