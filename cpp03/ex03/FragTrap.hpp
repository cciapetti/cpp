#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &old);
        FragTrap &operator = (const FragTrap &old);
        void    highFivesGuys(void);
        ~FragTrap();

};

#endif