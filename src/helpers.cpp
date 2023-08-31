#include "../include/constants.hpp"
#include <iostream>
#include <map>
#include <random>

int randomNumberGenerator(const int lower_bound, const int upper_bound) {
  std::random_device rd;
  std::mt19937 generator(rd());

  // Define the distribution for the range [lower_bound, upper_bound]
  std::uniform_int_distribution<int> distribution(lower_bound, upper_bound);

  // Generate a random number
  int random_number = distribution(generator);

  return random_number;
}

void displayUsage() {
  std::cout << "Usage: ./main [-n number-of-resources] [-p "
               "number-of-projects]"
            << std::endl;
  std::cout << "Options:" << std::endl;
  std::cout << "  -n         Specify the number of resources" << std::endl;
  std::cout << "  -p         Specify the number of projects" << std::endl;
  std::cout << std::endl;
}

std::map<std::string, int> argumentsParser(int argc, char *argv[]) {

  for (int i = 1; i < argc; ++i) {
    std::string arg = argv[i];
    if (arg == "-h" || arg == "--help") {
      displayUsage();
      exit(1);
    }
  }

  if ((argc - 1) % 2 != 0) {
    std::cout << "Invalid number of arguments. Use -h or --help for usage."
              << std::endl;
    exit(1);
  }

  std::map<std::string, int> arguments;

  arguments["-n"] = NUMBER_OF_RESOURCES;
  arguments["-p"] = NUMBER_OF_PROJECTS;

  for (int i = 1; i < argc; i += 2) {
    std::string arg = argv[i];
    try {
      int value = std::stoi(argv[i + 1]);
      arguments[arg] = value;
    } catch (...) {
      std::cout << "Please enter valid arguments. Use -h or --help for usage."
                << std::endl;
      exit(1);
    }
  }

  return arguments;
}
