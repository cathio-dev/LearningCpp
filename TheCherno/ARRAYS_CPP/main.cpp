#include <iostream>

int main()
{
    int array[] = {1, 2, 3, 4};

    for(int e : array)
    {
        std::cout << e << std::endl;
    };

    return 0;
}