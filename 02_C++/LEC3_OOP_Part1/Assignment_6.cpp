#include <algorithm>
#include <iostream>
#include <array>

// Fill Array from 10 to 10000 sequentially

int current = 10;
int UniqueNumber() { return current++; }
int main(int argc, char const *argv[])
{
    std::array<int, 100> arr;
    std::generate_n(arr.begin(), 100, UniqueNumber);

    for (const int &i : arr)
        std::cout << i << std::endl;
    return 0;
}
