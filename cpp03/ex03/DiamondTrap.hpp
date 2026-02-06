#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &old);
        DiamondTrap &operator = (const DiamondTrap &old);
        void    attack(const std::string& target);
        void whoAmI();
        ~DiamondTrap();
};
#endif