#ifndef ICE
# define ICE

#include "AMateria.hpp"

class Ice: public AMateria
{
    public:
        Ice();
        Ice(const Ice &old);
        Ice &operator = (const Ice &old);
        ~Ice();

        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif