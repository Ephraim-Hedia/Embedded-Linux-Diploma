#include <algorithm>
#include <array>
#include <iostream>

// 4.merge two arrays together

int main(int argc, const char **argv) {
  std::array<int, 5> arr1 = {1, 2, 3, 4, 5};
  std::array<int, 5> arr2 = {6, 7, 8, 9, 10};

  std::array<int, 10> arr3;
  std::copy(arr1.begin(), arr1.end(), arr3.begin());
  std::copy(arr2.begin(), arr2.end(), arr3.begin() + arr1.size());

  for (auto &i : arr3)
    std::cout << i << std::endl;
  return 0;
}