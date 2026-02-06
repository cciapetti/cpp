#ifndef CHARACTER
# define CHARACTER

#include "ICharacter.hpp"

class Character: public ICharacter
{
    private:
        std::string name;
        AMateria    *inventary[4];
    public:
        Character();
        Character(std::string name);
        Character(const Character &old);
        Character &operator = (const Character &old);

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

        ~Character();
};

#endif