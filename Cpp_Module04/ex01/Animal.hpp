#pragma once

#include <iostream>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &copy);
		virtual ~Animal();
		Animal &operator=(const Animal &src);
		virtual void makeSound(void)const;
		std::string getType(void)const;

};

