#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Cat Default Constructor" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &copy){
	std::cout << "Cat Copy Constructor" << std::endl;
	this->brain = new Brain();
	*this = copy;
}

Cat::~Cat(){
	delete(this->brain);
	std::cout << "Cat Deconstructor" << std::endl;
}

Cat &Cat::operator=(const Cat &src){
	std::cout << "Cat Operator" << std::endl;
	this->type = src.type;
	this->brain = new Brain();
	*this->brain = *src.brain;
	return *this;
}

void	Cat::makeSound(void)const{
	std::cout << "Cat: Meow Meow" << std::endl;
}

void	Cat::getIdeas(void)const{
	for (int i = 0; i < 3; i++)
		std::cout << "Idea " << i << " of the Cat is: " << this->brain->getIdea(i) << " at the address " << this->brain->getIdeaAddress(i) << std::endl;
}

void	Cat::setIdea(size_t i, std::string idea){
	this->brain->setIdea(i, idea);
}
