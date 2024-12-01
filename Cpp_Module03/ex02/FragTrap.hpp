#pragma once

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap{

	private:

	public:
	// Constructors
		FragTrap();
		FragTrap(const FragTrap &copy);
		FragTrap(std::string name);
		
	// Deconstructors
		virtual ~FragTrap();

	// Overloaded Operators
		FragTrap &operator=(const FragTrap &ft);

	// Public Methods
		void highFiveGuys(void);
};
