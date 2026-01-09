#include <iostream>

class Entity
{
    public:
        float x, y;

        Entity()
        {
            x = 0.0f;
            y = 0.0f;
            std::cout << "Created Entity!" << std::endl;
        }

        ~Entity() // Destructor (At the end of the operation it destroys the entity)
        {
            std::cout << "Destroyed Entity!" << std::endl;
        }

        void GetCoordinates(){
            std::cout << this->x << ", " << this->y << std::endl;
        }

        void Print()
        {
            std::cout << x << ", " << y << std::endl;
        }
};

void Function()
{
    Entity e;
    // e = {5, 6};
    e.Print();
}

int main()
{
    Function();

    // e.GetCoordinates();
    std::cin.get();
}