#ifndef LOGGERS_HPP_
#define LOGGERS_HPP_

#include <iostream>
/**
 * @file loggers.hpp
 * @author Vivek Punia ()
 * @brief Contains logger functions for displaying messages and information.
 * @version 0.1
 * @date 2023-09-01
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <map>
#include <string>

using std::string;

/**
 * @brief Displays an integer message.
 * @param message The integer message to be displayed.
 */
// template <typename T> void print(const T &message);
void printInt(const int &message);

/**
 * @brief Displays the contents of a map.
 * @param myMap The map to be displayed.
 */
void printMap(std::map<int, int> myMap);

/**
 * @brief Displays a welcome message.
 */
void welcomeMessage();

/**
 * @brief Displays the values of parameters.
 * @param num_of_resources Number of resources.
 * @param num_of_projects Number of projects.
 */
void displayParameters(const int num_of_resources, const int num_of_projects);

#endif