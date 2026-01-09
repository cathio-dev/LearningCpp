#include <iostream>

class Entity
{
    public:
        float X, Y;

        void Move(float xa, float ya)
        {
            X += xa;
            Y += ya;
        }

        void PrintCoordinates()
        {
            std::cout << X << ", " << Y << std::endl; 
        }
};

class Player : public Entity // Classes herdam como private por padrão, por isso public
{
    public:
        const char *Name; // Salvo em uma área chamada READ-ONLY, dados imodificáveis.
                          // Ponteiro que aponta para a primeira letra de um texto e vai alocando em linha da memória.

        void PrintName()
        {
            std::cout << Name << std::endl;
        }
};

int main () 
{
    Player player; // Herdeiro de entidade
    player.Name = "mauricio";
    player.X = 2;

    player.Move( 2,  2);
    player.PrintName();
    player.PrintCoordinates();
}