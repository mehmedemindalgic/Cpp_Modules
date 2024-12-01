#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	HumanB::name = name;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &weapon)
{
	HumanB::weapon = &weapon;
}

void HumanB::attack(void) 
{
	std::cout << HumanB::name << " attacks with their ";
	std::cout << weapon->getType() << std::endl;
}