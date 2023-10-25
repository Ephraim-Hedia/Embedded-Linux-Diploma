#include <iomanip>
#include <iostream>
#include <string>

// 6 - summation the digits of integer entered by user

int main(int argc, const char **argv)
{
  int num;
  int sum = 0;
  std::cout << "Enter an integer" << std::endl;
  std::cin >> num;

  // Convert Int to String
  std::string numStr = std::to_string(num);

  // Calculate the sum of digits using string manipulation
  for (char digitChar : numStr)
  {
    int digit = digitChar - '0'; // Convert Char to intger
    sum += digit;
  }

  // Output Result
  std::cout << "Sum of Digits of " << num << " is :" << sum << std::endl;

  return 0;
}