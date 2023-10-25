#include <iostream>
#include <vector>
#include <queue>

// Create a class that can be use to make backtrace for calling functions

std::queue<std::string> history;
class backtrace
{
public:
    backtrace() = default;
    explicit backtrace(std::string funName) : _funName(funName)
    {
        ConstructorText = "Enter to ";
        ConstructorText += _funName;
        history.push(ConstructorText);
        std::cout << ConstructorText << std::endl;
    }
    ~backtrace()
    {
        DestractorText = "Exit From : ";
        DestractorText += _funName;
        std::cout << DestractorText << std::endl;
    }

    void HistoryFunc(void)
    {
        std::queue<std::string> temp = history;
        std::cout << "\nBackTrace as follows :" << std::endl;
        while (!temp.empty())
        {
            std::cout << temp.front() << std::endl;
            temp.pop();
        }
        std::cout << std::endl;
    }

private:
    std::string ConstructorText, DestractorText;
    std::string _funName;
};

void Func(int x, int y)
{
    backtrace d1(__PRETTY_FUNCTION__);

    std::cout << "Hello World " << std::endl;
}

int main(int argc, char const *argv[])
{
    backtrace d(__PRETTY_FUNCTION__);
    Func(1, 3);
    d.HistoryFunc();
    return 0;
}
