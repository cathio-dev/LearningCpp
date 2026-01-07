#include <cstddef>
#include <iostream>

#define LOG(x) std::cout << x << std::endl; // Preguiça produtiva interessante
int main()
{
    int var = 8;
    void *ptr = &var;

    LOG(50);
    LOG(ptr)
    std::cin.get(); // espera um caracter ou enter
    return 0;
}