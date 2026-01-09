#include <iostream>
#include <ostream>
#include <string>

class Entity
{
    public:

        virtual std::string GetName()
        {
            return "Entity";
        }
};

class Player : public Entity
{
    private:
        std::string m_Name;

    public:
        Player(const std::string &name) : m_Name(name){} // Initializer list, alternativa de inicializar a variável
    
        std::string GetName() override // Passa por cima de outra com o mesmo nome
        {
            return m_Name;
        }
};

void PrintName(Entity *entity)
{
    std::cout << entity->GetName() << std::endl; // Para usar o ponteiro precisamos passar ponteiro
}

int main()
{
    Entity *e = new Entity();
    PrintName(e);

    Player *p = new Player("Marcola");
    PrintName(p);

    Entity *entity = p; // Polimorfismo trata o player como um entity
    PrintName(entity);

    std::cin.get();
}