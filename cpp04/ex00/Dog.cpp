#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog constructed is called!" << std::endl;
}

Dog::Dog(const Dog &old)
{
    *this = old;
}

Dog& Dog::operator = (const Dog &old)
{
    if (this != &old)
        *this = old;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Bau" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor is called!" << std::endl;
}