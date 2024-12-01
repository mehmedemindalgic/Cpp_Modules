#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Dog Default Constructor" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &copy){
	std::cout << "Dog Copy Constructor" << std::endl;
	this->brain = new Brain();
	*this = copy;
}

Dog::~Dog(){
	delete(this->brain);
	std::cout << "Dog Deconstructor" << std::endl;
}

Dog &Dog::operator=(const Dog &src){
	std::cout << "Dog Operator" << std::endl;
	this->type = src.type;
	this->brain = new Brain();
	*this->brain = *src.brain;
	return *this;
}

void	Dog::makeSound(void)const{
	std::cout << this->getType() << "Dog: woof woof" << std::endl;
}

void	Dog::getIdeas(void)const{
	for (int i = 0; i < 3; i++)
		std::cout << "Idea " << i << " of the Dog is: " << this->brain->getIdea(i) << " at the address " << this->brain->getIdeaAddress(i) << std::endl;
}

void	Dog::setIdea(size_t i, std::string idea){
	this->brain->setIdea(i, idea);
}
