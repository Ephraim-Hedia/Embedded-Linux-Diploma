#include <algorithm>
#include <array>
#include <iostream>

// 2.create a function to search to the number in the array which number is taken from user

bool SearchFunc(std::array<int, 10> a, int SearchNumber) {
  if (std::find(a.begin(), a.end(), SearchNumber) != std::end(a))
    return true;

  return false;
}

int main(int argc, const char **argv) {
  int number;

  std::array<int, 10> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  std::cout << "Enter the Number You Want to Search For :" << std::endl;
  std::cin >> number;

  if (SearchFunc(arr, number))
    std::cout << "the array contains The number " << number << '\n';
  else
    std::cout << "the array does not contains The number " << number << '\n';

  return 0;
}