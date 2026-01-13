#include <iostream>
#include <vector>

// void HelloWorld()
// {
//     std::cout << "Hello World!" << std::endl;
// }
void PrintValue(int value)
{
    std::cout << "value: " << value << std::endl;
}

void ForEach(const std::vector<int> &values, auto func) // Better using void(*func)(int)
{
    for (int value : values) func(value);
}

int main()
{
    std::vector<int> values = { 1, 5, 4, 6, 3};

    ForEach(values, PrintValue); // passing a function by reference parameter

    // void(*function)(/*any parameter*/) // real type

    // //auto func = HelloWorld;
    // function = HelloWorld;
    // func();
}

// Functions have memory adress too (CPU instructions memory location)