#include <algorithm>
#include <array>
#include <iostream>

// check if there is any value of array is even

void CheckIfAnyValueIsEven(std::array<int, 5> a) {
  std::any_of(a.begin(), a.end(), [](int x) { return (x % 2 == 0); })
      ? (std::cout << "There is Even Value in the array" << std::endl)
      : (std::cout << "All of the array elements is Odd" << std::endl);
}

int main(int argc, const char **argv) {
  std::array<int, 5> arr = {1, 2, 3, 4, 5};
  std::array<int, 5> arr2 = {1, 3, 5, 7, 9};
  CheckIfAnyValueIsEven(arr);
  CheckIfAnyValueIsEven(arr2);

  return 0;
}