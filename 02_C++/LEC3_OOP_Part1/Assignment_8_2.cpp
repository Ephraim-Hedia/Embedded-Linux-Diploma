#include <array>
#include <iostream>
#include <numeric>
int main(int argc, const char **argv) {
  std::array<int, 5> arr = {1, 2, 3, 4, 5};
  std::cout << "Result = " << std::accumulate(arr.begin(), arr.end(), 0)
            << std::endl;

  return 0;
}