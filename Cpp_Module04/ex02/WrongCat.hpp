#pragma once

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
	private:
		std::string type;
	public:
		WrongCat(void);
		WrongCat(std::string name);
		~WrongCat();
		WrongCat(const WrongCat &ct);
		WrongCat& operator=(const WrongCat &ct);
		std::string getType(void) const;
		void setType(std::string);
		void makeSound(void) const;
};