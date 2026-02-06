#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon  &weapon;
        std::string name;

    public:
        HumanA(const std::string name, Weapon &weapon);
        void    attack();
        ~HumanA();
};