#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructed is called!" << std::endl;

    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog &old)
{
    brain = new Brain();
    *this = old;
}

Dog& Dog::operator = (const Dog &old)
{
    if (this != &old)
    {
        *this->brain =  *old.brain;   
        this->type = old.type;
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Bau" << std::endl;
}

void    Dog::set_ideas(std::string string)
{
    this->brain->ideas[0] = string;
}

std::string    Dog::get_ideas()
{
    return (this->brain->ideas[0]);
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor is called!" << std::endl;
}