#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(const Intern &old)
{
    *this = old;
}

Intern &Intern::operator = (const Intern &old)
{
    if (this != &old)
        *this = old;
    return (*this);
}

Intern::~Intern(){}
