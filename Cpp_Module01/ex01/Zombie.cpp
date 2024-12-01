#include "Zombie.hpp"

void Zombie::setname(std::string n)
{
	name = n;
}

Zombie::~Zombie(void)
{
    std::cout << name << " Zombie has been destroyed" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}