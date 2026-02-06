#ifndef MATERIASOURCE
# define MATERIASOURCE

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *materias[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &old);
        MateriaSource &operator = (const MateriaSource &old);

        void learnMateria(AMateria* materia);
        AMateria* createMateria(std::string const & type);

        ~MateriaSource();
};

#endif