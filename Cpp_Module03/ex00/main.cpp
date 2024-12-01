#include "ClapTrap.hpp"

int main() {


    ClapTrap clapTrap("CLP-TP");
	
    clapTrap.attack("Target 1");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(3);
    clapTrap.attack("Target 2");
    clapTrap.takeDamage(15);
    clapTrap.beRepaired(2);
    clapTrap.attack("Target 3");

	ClapTrap lapTrap("CLP-TP 1");

    lapTrap.attack("Target 1");
    lapTrap.takeDamage(5);
    lapTrap.beRepaired(3);
    lapTrap.attack("Target 2");
    lapTrap.takeDamage(15);
    lapTrap.beRepaired(2);
    lapTrap.attack("Target 3");

    return 0;
}