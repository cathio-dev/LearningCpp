#include <iostream>


void ChangeChar(std::string &string)
{
    string += "!!!";
}

int main()
{
    // std::string name = "Cherno";
    // std::cout << name << std::endl;
    // name[2] = 'a';
    // std::cout << name << std::endl;
    
    // ChangeChar(name);

    const char *name = "marcos";
    
    std::cout << name << std::endl;
}