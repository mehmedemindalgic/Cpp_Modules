#include "Zombie.hpp"

int main()
{
	std::string n;
	std::string tmp;

	int c;
	int i = 0;
	std::cout << "Zombie name > ";
	std::getline(std::cin, n);

	std::cout << "Zombie count > ";
	std::getline(std::cin, tmp);

	c = atoi(tmp.c_str());
	if(c < 0)
		c *= -1;
	Zombie *zombie = zombieHorde(c ,n);
	
	while(i < c)
	{
		zombie[i].announce();
		i++;
	}
	delete []zombie;
}