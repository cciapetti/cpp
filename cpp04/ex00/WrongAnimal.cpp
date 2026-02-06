#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "Wrong Default";
    std::cout << "Wrong Animal constructor is called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &old)
{
    *this = old;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &old)
{
    if (this != &old)
        *this = old;
    return (*this);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "Default wrong animal sound" << std::endl;
}

std::string WrongAnimal::getType() const 
{
    return (this->type);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong Animal destructor is called!" << std::endl;
}