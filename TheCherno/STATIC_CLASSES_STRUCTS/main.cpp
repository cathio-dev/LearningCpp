#include <iostream>

struct Entity // Public by default (Same as classes)
{
    static int x,y;

    void Print()
    {
        std::cout << x << ", " << y << std::endl;
    }
};

int Entity::x;
int Entity::y;

int main()
{
    Entity e;
    e.x = 2;
    e.y = 3;

    Entity e1; // = {5, 8}; // Can define like this too
    e1.x = 5;
    e1.y = 8;


    e.Print();
    e1.Print();
}