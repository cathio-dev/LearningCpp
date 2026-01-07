#include <iostream>

#define LOG(x) std::cout << x << std:endl

// Class Player

class Player
{
    public:
        int x, y;
        int speed = 5;
        
        void Move(int xa, int ya)
        {
            x += xa * speed;
            y += ya * speed;
        }
};


int main()
{
    // Instance player.
    Player player;  
    player.x = 2;
    player.y = 3;

    // Move is now a method of player.
    // We don't need to pass the object by parameter in the function anymore.
    player.Move(1, 1); 

    std::cout << "X: " << player.x << ", Y: " << player.y;


};