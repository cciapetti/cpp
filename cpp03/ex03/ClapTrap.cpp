#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    std::cout << "Default ClapTrap constructor called" << std::endl;
    this->name = "Default";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap " << name << " constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &old)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = old;
}

ClapTrap& ClapTrap::operator = (const ClapTrap &old)
{
    std::cout << "ClapTrap assigned operator called" << std::endl;
    if (this != &old)
    {
        this->name = old.name;
        this->hitPoints = old.hitPoints;
        this->energyPoints = old.energyPoints;
        this->attackDamage = old.attackDamage;
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->hitPoints < 1)
        std::cout << "No Hits Points..." << std::endl;
    if (this->energyPoints < 1)
        std::cout << "No Energy Points..." << std::endl;
    if (this->hitPoints > 0 && this->energyPoints >0)
    {
        this->energyPoints -= 1;
        std::cout << "ClapTrap " << this->name << " attacks " <<  target;
        std::cout << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    }

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints < 1)
        std::cout << "No Energy Points..." << std::endl;
    else
    {
        this->energyPoints -= 1;
        this->hitPoints += amount;
        std::cout << "ClapTrap " << this->name << " repairs itself gaining " << amount << " Hit Points!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name << " takes " << amount << " amount of damage!" << std::endl;
    if (this->hitPoints < amount)
        this->hitPoints = 0;
    else
        this->hitPoints -= amount;
}

ClapTrap::~ClapTrap(){
    std::cout << "Destructor called on ClapTrap " << this->name << std::endl;
}