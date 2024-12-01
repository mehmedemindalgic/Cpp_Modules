#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal{
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
