#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ScavTrap scav("Scav");
    FragTrap frag("Frag");
    scav.attack("Frag");
    frag.highFivesGuys();
    scav.guardGate();
    frag.attack("Scav");
    scav.beRepaired(20);
}