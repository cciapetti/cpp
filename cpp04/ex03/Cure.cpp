#include "Cure.hpp"

Cure::Cure()
{
    std::cout << "Cure constructor called" << std::endl;
    this->type = "cure";

}

Cure::Cure(const Cure &old)
{
    *this = old;
}
Cure &Cure::operator = (const Cure &old)
{
    if (this != &old)
        *this = old;
    return (*this);
}

AMateria* Cure::clone() const
{
    Cure *clone = new Cure();
    clone->type = this->type;
    return (clone);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}