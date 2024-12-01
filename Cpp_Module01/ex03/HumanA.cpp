#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon)
{
	HumanA::name = name;
}
		
HumanA::~HumanA()
{
}


void HumanA::attack(void)
{
	std::cout << HumanA::name << " attacks with their ";
	std::cout << HumanA::weapon.getType() << std::endl;
}