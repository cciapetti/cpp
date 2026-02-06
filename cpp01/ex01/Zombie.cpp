#include "Zombie.hpp"

Zombie::Zombie()
{

};

void Zombie::announce( void )
{
    std::cout << getName() << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->name = name;
}

std::string    Zombie::getName( void )
{
    return this->name;
}

Zombie::~Zombie()
{

};