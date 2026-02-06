#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
    std::cout << "AMateria constructor called" << std::endl;
    this->type = type;
}

AMateria::AMateria(const AMateria &old)
{
    *this = old;
}
AMateria &AMateria::operator = (const AMateria &old)
{
    if (this != &old)
        *this = old;
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}
