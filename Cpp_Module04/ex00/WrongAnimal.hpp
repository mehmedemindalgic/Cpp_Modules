#pragma once

#include "iostream"

class WrongAnimal{
	protected:
		std::string type;
	public:
		WrongAnimal(void);
		WrongAnimal(std::string name);
		~WrongAnimal();
		WrongAnimal(const WrongAnimal &al);
		WrongAnimal& operator=(const WrongAnimal &al);
		std::string getType(void) const;
		void setType(std::string);
		void makeSound(void) const;
	
};