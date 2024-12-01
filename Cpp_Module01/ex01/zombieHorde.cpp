#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *z = new Zombie[N];

	int i = 0 ;
 	
    while(i < N)
	{
		z[i].setname(name);
		i++;;
	}

    return z;
}