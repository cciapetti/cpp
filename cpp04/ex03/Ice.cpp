#include "Ice.hpp"

Ice::Ice()
{
    std::cout << "Ice constructor called" << std::endl;
    this->type = "ice";

}

Ice::Ice(const Ice &old)
{
    *this = old;
}

Ice &Ice::operator = (const Ice &old)
{
    if (this != &old)
        this->type = old.type;
    return (*this);
}

AMateria* Ice::clone() const
{
    Ice *clone = new Ice();
    clone->type = this->type;
    return (clone);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}