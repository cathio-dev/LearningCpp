#include <iostream>


template<typename T>

void Print(T value)
{
    std::cout << value << std::endl;
}

int main()
{
    Print<std::string>("Marcos");
}  