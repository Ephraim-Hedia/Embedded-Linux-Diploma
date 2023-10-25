#include <algorithm>
#include <iostream>
#include <array>

// check if all the array is even 

class Even
{
public:
    void isEven(std::array<int, 6> arr)const
    {
        int _count = std::count_if(arr.begin(), arr.end(), [](int x) -> bool
                                   {
        if (x % 2 == 0)
        {
            return false;
        } 
        return true ; });

        if (_count == 0)
        {
            std::cout << "The Array is Even" << std::endl;
        }
        else
        {
            std::cout << "The Array is Odd" << std::endl;
        }
    }

private:
};

int main(int argc, const char **argv)
{
    std::array<int, 6> Test = {1, 2, 3, 4, 5};
    std::array<int, 6> Test2 = {2, 4, 6, 8, 10};

    Even().isEven(Test);
    Even().isEven(Test2);
}