#include "Character.hpp"

Character::Character()
{
    for (int i = 0; i < 4; i++)
        this->inventary[i] = NULL;
    std::cout << "Default Character constructor is called" << std::endl;
}

Character::Character(std::string name)
{
    for (int i = 0; i < 4; i++)
        this->inventary[i] = NULL;
    std::cout << "Character constructor is called" << std::endl;
    this->name = name;
}

Character::Character(const Character &old)
{
    *this = old;
}

Character &Character::operator = (const Character &old)
{
    if (this != &old)
    {
        *this->inventary = *old.inventary;
        this->name = old.name;
    }
    return (*this);
}

Character::~Character()
{
    std::cout << "Character destructor is called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->inventary[i] != NULL)
            delete this->inventary[i];
    }
}

std::string const & Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventary[i] == NULL)
        {
            inventary[i] = m;
            return ;
        }
    }
}

void    Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && this->inventary[idx] != NULL)
            inventary[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4)
    {
        if (inventary[idx] != NULL)
        {
            this->inventary[idx]->use(target);
        }
    }
}
