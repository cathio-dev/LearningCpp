#include <iostream>
#include <ostream>
#include <string>

class Entity
{
    private:
        std::string m_Name;
        int m_Score;

    public:
        /*Entity()
        {
            m_Name = "Unknown";
        }*/

        // Alternative:

        Entity() : m_Name("Unknown"), m_Score(0){} // Member initializer list

        /*Entity(const std::string &name)
        {
            m_Name = name;
        }*/

        // Alternative

        Entity(const std::string &name) : m_Name(name) {}; // With member initializer list

        const std::string &GetName() const { return m_Name; }
};

int main()
{
    Entity e0;
    std::cout << e0.GetName() << std::endl; // Getter need a cout
    
    Entity e1("Cherno");
    std::cout << e1.GetName() << std::endl; // Getter need a cout

}