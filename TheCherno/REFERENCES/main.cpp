#include <iostream>

#define LOG(x) std::cout << x << std::endl


void Increment(int &value) // Reference -> &value = a (what we did back there)
{
    value++;
}

int main()
{  
    int a = 5;
    Increment(a);
    //int *b = &a;
    // int &ref = a; // Ref is an alias to "a"

    LOG(a);
}