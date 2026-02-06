#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
    std::cout << "Default ScavTrap constructor called" << std::endl;
    this->name = "Default";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) :ClapTrap(name)
{
    std::cout << "ScavTrap " << name << " constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &old) : ClapTrap (old)
{
    *this = old;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &old)
{
    if (this != &old)
        this->ClapTrap::operator = (old); //richiamo l'operatore direttamente
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (this->hitPoints < 1)
        std::cout << "No Hits Points..." << std::endl;
    if (this->energyPoints < 1)
        std::cout << "No Energy Points..." << std::endl;
    if (this->hitPoints > 0 && this->energyPoints >0)
    {
        this->energyPoints -= 1;
        std::cout << "ScavTrap " << this->name << " attacks " <<  target;
        std::cout << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    }
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is in Gate keeper mode!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called on ScavTrap " << this->name << std::endl;
}