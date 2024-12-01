#pragma once

#include "iostream"

class ClapTrap{

	protected:

		std::string Name;
		int HitPoint;
		int EnergyPoint;
		int AttackPoint;
	
	public:

		// CONSTRUCTOR
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap&);
		ClapTrap(void);
		~ClapTrap();

		// OPERETOR
		ClapTrap& operator=(const ClapTrap &ct);

		// METHOD
		void attack(const std::string&);
 		void takeDamage(unsigned int);
		void beRepaired(unsigned int);
};