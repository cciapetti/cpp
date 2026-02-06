#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource constructor is called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->materias[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &old)
{
    *this = old;
}

MateriaSource &MateriaSource::operator = (const MateriaSource &old)
{
    if (this != &old)
        *this = old;
    return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i] == 0)
        {
            this->materias[i] = materia;
            return;
        }
    }
    delete materia;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i]->getType().empty() == 0)
            return 0;
        if (this->materias[i] != NULL && this->materias[i]->getType() == type)
            return (this->materias[i]->clone());
    }
    return (0);
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor is called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i] != 0)
            delete this->materias[i];
    }
}
