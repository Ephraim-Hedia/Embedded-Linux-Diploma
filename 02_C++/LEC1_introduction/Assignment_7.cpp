#include <bitset>
#include <iostream>
#include <iomanip>

// 7-change from decimal to binary and vice versa
int main(int argc, const char **argv)
{
    int temp;
    std::bitset<8> Number;
    std::cout << "Enter A Decimal Number :" << std::endl;
    std::cin >> temp;
    Number = temp;
    std::cout << "Binary Representation : " << Number << std::endl;

    std::cout << "Enter A Binary Number :" << std::endl;
    std::cin >> Number;
    std::cout << "Decimal Representation : " << Number.to_ulong() << std::endl;

    return 0;
}