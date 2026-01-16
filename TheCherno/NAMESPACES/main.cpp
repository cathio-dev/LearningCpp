#include <iostream>
#include <string>
#include <algorithm>

namespace apple {

    void print(const std::string *text)
    {
        std::cout << text << std::endl;
    }

}

namespace orange {

    void print(const std::string *text)
    {
        std::string temp = text;
        std::reverse(temp.begin(), temp.end());
        std::cout << text << std::endl;
    }

}

int main()
{

    using namespace orange;
    print("Hello");

    std::cin.get();
}

// Namespaces: avoid naming conflits.
// In case you want to use the same name for a function or variable...