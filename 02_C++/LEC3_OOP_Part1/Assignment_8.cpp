#include <iostream>
#include <array>

// calculate accumulate of array 

int main(int argc, char const *argv[])
{
    std::array<int, 9> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum = 0;
    for (auto i = arr.begin(); i != arr.end(); i++)
    {
        sum += *i;
    }
    std::cout << "accumulate of array : " << sum << std::endl;

    sum = 0;
    for (const int &i : arr)
    {
        sum += i;
    }

    std::cout << "accumulate of array : " << sum << std::endl;
    return 0;
}
