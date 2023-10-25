#include <algorithm>
#include <array>
#include <iostream>

//1. Create a function to find the maximum number of array



auto func(std::array<int, 5> a)
{
  auto result = std::max_element(a.begin(), a.end());
  // std::sort(a.begin(), a.end());
  // return a.back();
  return *result;
}

int main(int argc, const char **argv)
{
  std::array<int, 5> arr = {7, 15, 22, 45, 1};
  auto max = func(arr);
  std::cout << "The max Number : " << max << std::endl;
  return 0;
}