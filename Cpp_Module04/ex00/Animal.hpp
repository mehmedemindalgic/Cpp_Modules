#pragma once

#include "iostream"

class Animal{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(std::string name);
		virtual ~Animal();
		Animal(const Animal &al);
		Animal& operator=(const Animal &al);
		std::string getType(void) const;
		void setType(std::string);
		virtual void makeSound(void) const;
	
};