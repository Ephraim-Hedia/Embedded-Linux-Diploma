#include <iostream>
#include <iomanip>
// 3-RIGHT angle triangle

int main(int argc, const char **argv)
{
    int hight;
    std::cout << "Input The Height of the Right Angle Triangle: ";
    std::cin >> hight;
    std::cout << std::endl;
    for (int i = 0; i < hight; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
