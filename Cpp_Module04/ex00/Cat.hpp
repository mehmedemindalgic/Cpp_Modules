#pragma once

#include "Animal.hpp"

class Cat: public Animal{
	
	private:
	public:
		Cat(void);
		~Cat();
		Cat(const Cat &ct);
		Cat& operator=(const Cat &ct);
		std::string getType(void) const;
		void setType(std::string);
		void makeSound(void) const;

};