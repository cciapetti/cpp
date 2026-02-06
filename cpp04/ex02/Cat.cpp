#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructed is called!" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat &old)
{
    *this = old;
}

Cat& Cat::operator = (const Cat &old)
{
    if (this != &old)
    {
        *this->brain = *old.brain;
        this->type = old.type;
    }
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Miao" << std::endl;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor is called!" << std::endl;
}