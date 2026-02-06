#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon &weapon):weapon(weapon)
{
    this->weapon = weapon;
	this-> name = name;
};

void HumanA::attack()
{
	if (this->weapon.getType().empty() == 0)
    	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
};

HumanA::~HumanA()
{

};