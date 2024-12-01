#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	Zombie::name = name;
}
Zombie::Zombie(void)
{
    std::cout << name << "" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << name << " Zombie has been destroyed" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}