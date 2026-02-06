#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap diamond("carlo");
    ScavTrap scav("Scav");
    diamond.whoAmI();
    diamond.attack("trap");
    diamond.highFivesGuys();
    diamond.beRepaired(45);
    diamond.guardGate();
    
}