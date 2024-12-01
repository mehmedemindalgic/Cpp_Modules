#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(){
	std::cout << "Default ScavTrap Destructor Called" << std::endl;
	ClapTrap::HitPoint = 100;
	ClapTrap::EnergyPoint = 50;
	ClapTrap::AttackPoint = 20;
	this->GuardingGate = false;
}
ScavTrap::ScavTrap(const ScavTrap &copy){
	std::cout << "ScavTrap " << "Copy Constructor Called!" << std::endl;
	*this = copy;
}
ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	
	std::cout << "ScavTrap " << name << " Constructor Called!" << std::endl;
	ClapTrap::HitPoint = 100;
	ClapTrap::EnergyPoint = 50;
	ClapTrap::AttackPoint = 20;
	this->GuardingGate = false;
}

// Deconstructors
ScavTrap::~ScavTrap(){
	std::cout << "Oh no! ScavTrap " << Name << " is shutting down. Goodbye cruel world!\n";
}

// Overloaded Operators
ScavTrap &ScavTrap::operator=(const ScavTrap &st){
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	ClapTrap::AttackPoint = st.AttackPoint;
	ClapTrap::HitPoint = st.HitPoint;
	ClapTrap::EnergyPoint = st.EnergyPoint;
	ClapTrap::Name = st.Name;
	return(*this);
}

// Public Methods
void ScavTrap::attack(const std::string &target){
    if (ClapTrap::HitPoint > 0 && ClapTrap::EnergyPoint > 0) {
        std::cout << "ScavTrap" << ClapTrap::Name << " attacks " << target << ", causing ";
		std::cout << ClapTrap::AttackPoint << " points of damage! Energy -1.\n";
        	ClapTrap::EnergyPoint--;
    } 
	else{
        std::cout << "ScavTrap " << ClapTrap::Name << " can't attack. Not enough hit points or energy.\n";
    }
}

void ScavTrap::guardGate(){
if (this->GuardingGate == false)
	{
		this->GuardingGate = true;
		std::cout << "ScavTrap " << this->Name << " is now guarding the gate." << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->Name << " is already guarding the gate." << std::endl;
}