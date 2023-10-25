#include <algorithm>
#include <iostream>
#include <iomanip>
#include <iterator>
#include <vector>

// 2- maximum number between three values

int main(int argc, const char **argv)
{
    std::vector<int> v;
    int temp = 0;
    for (char i = 0; i < 3; i++)
    {
        std::cout << "Enter a Number Please :" << std::endl;
        std::cin >> temp;
        v.push_back(temp);
    }

    // Printing the Maximum Number
    std::cout << std::endl
              << "The max Number is :" << *std::max_element(v.begin(), v.end())
              << std::endl;

    return 0;
}