#include <iostream>

class Entity
{
    public:
        float x, y;

        Entity()
        {
            x = 0;
            y = 0;
        }

        Entity(int x, int y)
        {
            this->x = x;
            this->y = y;
        }

        void GetCoordinates(){
            std::cout << this->x << ", " << this->y << std::endl;
        }

        void Print()
        {
            std::cout << x << ", " << y << std::endl;
        }
};

int main()
{
    Entity e;
    // e = {5, 6};
    e.Print();

    e.GetCoordinates();
    std::cin.get();
}