#include <algorithm>
#include <array>
#include <iostream>
#include <vector>

// 5.Find the even and odd numbers in the array

void PrintEven(std::array<int, 10> arr)
{
  std::vector<int> EvenResult;
  // Copy the even Number to EvenResult Container To Be Printed later
  std::copy_if(arr.begin(), arr.end(), std::back_inserter(EvenResult),
               [](int x) -> bool
               {
                 if (x % 2 == 0)
                   return true;
                 return false;
               });

  // Sort The Even Number to be Printed
  std::cout << "Even Values :" << std::endl;
  std::sort(EvenResult.begin(), EvenResult.end());
  for (auto i : EvenResult)
    std::cout << i << std::endl;
}

void PrintOdd(std::array<int, 10> arr)
{
  std::vector<int> OddResult;
  // Copy the Odd Number to OddResult Container To Be Printed later
  std::copy_if(arr.begin(), arr.end(), std::back_inserter(OddResult),
               [](int x) -> bool
               {
                 if (!(x % 2 == 0))
                   return true;
                 return false;
               });

  // Sort The Odd Number to be Printed
  std::cout << "Odd Values :" << std::endl;
  std::sort(OddResult.begin(), OddResult.end());
  for (auto i : OddResult)
    std::cout << i << std::endl;
}

int main(int argc, const char **argv)
{
  std::array<int, 10> arr = {15, 20, 22, 5, 14, 50, 90, 66, 13, 17};

  PrintEven(arr);
  std::cout << std::endl;
  PrintOdd(arr);
  return 0;
}