#include <iostream>
#include <vector>

// Simple Lambda : Write a lambda function to calculate the square of a given number . 

int main(int argc, const char **argv) {
  auto func = [](int x) -> int { return x * x; };

  std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  for (auto i : v) {
    auto result = func(i);
    std::cout << result << std::endl;
  }
  return 0;
}