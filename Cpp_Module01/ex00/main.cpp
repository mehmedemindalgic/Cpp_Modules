#include "Zombie.hpp"

int main()
{
	std::string n;


	std::cout << "(DEFAULT) Zombie name > ";
	std::cin >> n;
	Zombie z1(n);
	z1.announce();


	std::cout << " (NEW) Zombie 2 name > ";
	std::cin >> n;
	Zombie *z2 = newZombie(n);
	z2->announce();
	delete(z2);
	
	std::cout << "(CHUPM) Zombie 2 name > ";
	std::cin >> n;
	randomChump(n);

}