#pragma once

#include <iostream>

class AAnimal{
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(const AAnimal &copy);
		virtual ~AAnimal();
		AAnimal &operator=(const AAnimal &src);
		virtual void makeSound(void)const = 0;
		std::string getType(void)const;

};

