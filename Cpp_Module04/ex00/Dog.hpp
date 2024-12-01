#pragma once

#include "Animal.hpp"

class Dog: public Animal{

	protected:
	public:
		Dog(void);
		~Dog();
		Dog(Dog &dg);
		Dog& operator=(const Dog &dg);
		std::string getType(void) const;
		void setType(std::string);
		void makeSound(void) const;
	
};