#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap()
{
    std::cout << "Default DiamondTrap constructor is called" << std::endl;
    this->name = "Default";
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage; 
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name")
{
    std::cout << "DiamondTrap " << name << " constructor called" << std::endl;
    this->name = name;
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage; 
}

DiamondTrap::DiamondTrap(const DiamondTrap &old)
{
    *this = old;
}

DiamondTrap &DiamondTrap::operator = (const DiamondTrap &old)
{
    if (this != &old)
        this->ClapTrap::operator = (old);
    return (*this);
}

void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
{
    std::cout << "My name is: " << this->name << std::endl;
    std::cout << "My ClapTrap name is: " << name + "_clap_name" << std::endl;
}


DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor called on DiamondTrap " << this->name << std::endl;
}