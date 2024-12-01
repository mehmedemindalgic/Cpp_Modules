#include "Weapon.hpp"
Weapon::Weapon(std::string type)
{
	Weapon::type = type;
}
Weapon::~Weapon()
{
}
const std::string& Weapon::getType(void)
{
	return(type);
}
void Weapon::setType(std::string tmp)
{
	type = tmp;
}