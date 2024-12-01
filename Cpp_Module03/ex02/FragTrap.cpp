#include "FragTrap.hpp"

// Constructors
FragTrap::FragTrap(): ClapTrap(){
	std::cout << "Default FragTrap Destructor Called" << std::endl;
	this->HitPoint = 100;
	this->EnergyPoint = 100;
	this->AttackPoint = 30;
}
FragTrap::FragTrap(const FragTrap &copy){
	std::cout << "FragTrap " << "Copy Constructor Called!" << std::endl;
	*this = copy;
}
FragTrap::FragTrap(std::string name): ClapTrap(name){
	std::cout << "FragTrap " << name << " Constructor Called!" << std::endl;
	this->HitPoint = 100;
	this->EnergyPoint = 100;
	this->AttackPoint = 30;
}
		
// Deconstructors
FragTrap::~FragTrap(){
	std::cout << "Oh no! FragTrap " << Name << " is shutting down. Goodbye cruel world!\n";
}

// Overloaded Operators
FragTrap &FragTrap::operator=(const FragTrap &ft){
	std::cout << "FragTrap Assignation operator called" << std::endl;
	this->Name = ft.Name;
	this->HitPoint = ft.HitPoint;
	this->EnergyPoint = ft.EnergyPoint;
	this->AttackPoint = ft.AttackPoint;
	return *this;
}

// Public Methods
void FragTrap::highFiveGuys(void){
	std::cout << "FragTrap " << this->Name << ": You want a high five?" << std::endl;
}