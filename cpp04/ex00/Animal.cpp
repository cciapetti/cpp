#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Default";
    std::cout << "Animal constructor is called!" << std::endl;
}

Animal::Animal(const Animal &old)
{
    *this = old;
}

Animal & Animal:: operator = (const Animal &old)
{
    if (this != &old)
        *this = old;
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << "Default sound" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}

Animal::~Animal()
{
    std::cout << "Animal destructor is called!" << std::endl;
}