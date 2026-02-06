#include "HumanB.hpp"

HumanB::HumanB(std::string name):weapon()
{
	this->name = name;
};

HumanB::HumanB(std::string name, Weapon *weapon)
{
	this->name = name;
	this->weapon=weapon;
};

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
};

void HumanB::attack()
{
	if (this->weapon != NULL)
	{
    	std::cout << this->name << " attacks with their " << (*this->weapon).getType() << std::endl;
	}
};

HumanB::~HumanB()
{
	
};