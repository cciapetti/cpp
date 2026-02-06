#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat constructed is called!" << std::endl;
}

Cat::Cat(const Cat &old)
{
    *this = old;
}

Cat& Cat::operator = (const Cat &old)
{
    if (this != &old)
        *this = old;
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Miao" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor is called!" << std::endl;
}