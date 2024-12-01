#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {


	private:
		bool GuardingGate;
	public:
	// Constructors
		ScavTrap();
		ScavTrap(const ScavTrap &copy);
		ScavTrap(std::string name);
		
	// Deconstructors
		virtual ~ScavTrap();

	// Overloaded Operators
		ScavTrap &operator=(const ScavTrap &st);

	// Public Methods
		void guardGate();
		void attack(const std::string &target);

};