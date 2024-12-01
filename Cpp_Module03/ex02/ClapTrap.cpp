#include "ClapTrap.hpp"

// CONSTRUCTOR
ClapTrap::ClapTrap(std::string name){
	ClapTrap::Name = name;
	ClapTrap::HitPoint = 10;
	ClapTrap::EnergyPoint = 10;
	ClapTrap::AttackPoint = 0;
	std::cout << "ClapTrap " << name << " Constructor Called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ct){
	*this = ct;
	std::cout << "ClapTrap " << "Copy Constructor Called!" << std::endl;
}

ClapTrap::ClapTrap(void): Name("Default"){
	ClapTrap::HitPoint = 10;
	ClapTrap::EnergyPoint = 10;
	ClapTrap::AttackPoint = 0;
	std::cout << "Default ClapTrap Destructor Called" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Oh no! ClapTrap " << Name << " is shutting down. Goodbye cruel world!\n";
}

// OPERETOR
ClapTrap &ClapTrap::operator=(const ClapTrap &ct){
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->Name = ct.Name;
	this->HitPoint = ct.HitPoint;
	this->EnergyPoint = ct.EnergyPoint;
	this->AttackPoint = ct.AttackPoint;
	return *this;
}

//METHOD
void ClapTrap::attack(const std::string& target){
    if (HitPoint > 0 && EnergyPoint > 0) {
        std::cout << "ClapTrap " << Name << " attacks " << target << ", causing ";
		std::cout << AttackPoint << " points of damage! Energy -1.\n";
        	EnergyPoint--;
    } 
	else{
        std::cout << "ClapTrap " << Name << " can't attack. Not enough hit points or energy.\n";
    }
}


void ClapTrap::takeDamage(unsigned int amount){

	if (HitPoint > 0){
		HitPoint -= amount;
		std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage! Remaining Hit Points: " << HitPoint << "\n";
	}
	else {
        std::cout << "ClapTrap " << Name << " can't take more damage. It's already down!\n";
	}

}

void ClapTrap::beRepaired(unsigned int amount){

	if (HitPoint > 0 && EnergyPoint > 0){
		HitPoint += amount;
		std::cout << "ClapTrap " << Name << " is repaired for " << amount ;
		std::cout << " points! Remaining Hit Points: " << HitPoint << " Energy -1.\n";
		EnergyPoint--;
	}
	else {
		std::cout << "ClapTrap " << Name << " can't be repaired. Not enough hit points or energy.\n";
	}
}



