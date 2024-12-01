#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(const Dog &copy);
		~Dog();
		Dog &operator=(const Dog &src);
		void makeSound(void)const;
		void getIdeas(void)const;
		void setIdea(size_t i, std::string idea);
};
