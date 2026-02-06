#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
    std::cout << "Default FragTrap constructor is called!" << std::endl;
    this->name = "Default";
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    std::cout << "FragTrap " << name << " constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30; 
}

FragTrap::FragTrap(const FragTrap &old)
{
    *this = old;
}

FragTrap &FragTrap::operator = (const FragTrap &old)
{
    if (this != &old)
        this->ClapTrap::operator = (old);
    return (*this);
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "Gimme a high FIVE!" << std::endl;
}


FragTrap::~FragTrap()
{
    std::cout << "Destructor called on FragTrap " << this->name << std::endl;
}