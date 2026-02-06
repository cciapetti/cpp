#include "ScavTrap.hpp"

// int main(void)
// {
//     ScavTrap scav("Scav");
//     ScavTrap *p1 = &scav;
//     ClapTrap *p2 = &scav;
//     p1 -> attack("1");
//     p2 -> attack("2");
// }


int main(void)
{
    ClapTrap clap("Clap");
    ScavTrap scav("Scav");
    ScavTrap scov("Scov");
    scov = scav;
    scav.ClapTrap::attack("Scuv");
    scov.attack("Scav");
    scav.takeDamage(13);
    clap.attack("SCIV");
    scav.attack("SCIV");

}