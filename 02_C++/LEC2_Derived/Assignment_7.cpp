#include <algorithm>
#include <iostream>
#include <vector>

// sort with Lambda ; Use lambda functions to sort an array of integers in ascending and descending order

int main(int argc, const char **argv) {
  std::vector<int> v = {20, 10, 50, 30, 55, 12, 8, 1, 30};

  // Sorting
  std::sort(v.begin(), v.end(), [](int x, int y) -> bool {
    if (x < y)
      return true;
    return false;
  });

  // Printing
  std::cout << "ascending Order :" << std::endl;
  for (auto i : v)
    std::cout << i << "\t";
  std::cout << std::endl;

  // Sorting
  std::sort(v.begin(), v.end(), [](int x, int y) -> bool {
    if (x > y)
      return true;
    return false;
  });

  // Printing
  std::cout << "Descending Order :" << std::endl;
  for (auto i : v)
    std::cout << i << "\t";
  std::cout << std::endl;

  return 0;
}