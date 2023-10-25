#include <algorithm>
#include <iostream>
#include <array>

// check if there is any value of array is even 

class Even
{
public:
    void CheckIfAnyValIsEven(std::array<int, 5> a);

private:
};

void Even::CheckIfAnyValIsEven(std::array<int, 5> a)
{
    int count = std::count_if(a.begin(), a.end(), [](int x) -> bool
                              {
            if (x % 2 == 0)
                return true;
            else
            {
                return false;
            } });
    if (count > 0)
        std::cout << "There is Even Value in the Array" << std::endl;
    else
        std::cout << "The array doesn't have any Even Values" << std::endl;
}

int main(int argc, char const *argv[])
{
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    std::array<int, 5> arr2 = {1, 3, 5, 7, 9};

    Even().CheckIfAnyValIsEven(arr);
    Even().CheckIfAnyValIsEven(arr2);

    return 0;
}
