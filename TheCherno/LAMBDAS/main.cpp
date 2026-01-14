#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>


void ForEach(const std::vector<int> &values, const std::function<void(int)> &func ) // Better using void(*func)(int)
{
    for (int value : values) func(value);
}

int main()
{
    std::vector<int> values = { 1, 5, 4, 6, 3};
    auto it = std::find_if(values.begin(), values.end(), [](int value) { return value > 3; } );
    std::cout << *it << std::endl;
    
    auto lambda = [=](int value) { std::cout << "Value: " << std::endl; }; // Colchetes podem depender o que passar.

    ForEach(values, lambda);
}