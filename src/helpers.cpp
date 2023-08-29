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