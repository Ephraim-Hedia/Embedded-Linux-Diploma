#include <iostream>

// check if the character is digit 

int main(int argc, const char** argv) {
    char x ; 
    while(1)
    {
        std::cout << "Enter a char Please : " << std::endl;
        std::cin >> x ; 
        if(std::isdigit(x))
        {
            std::cout << "The Char is Digit" << std::endl;
        }
        else
        {
            std::cout << "The Char Not Digit" << std::endl;
        }
    }
    return 0;
}