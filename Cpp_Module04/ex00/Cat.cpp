#include "Cat.hpp"

Cat::Cat(void){
	this->type = "Cat";
	std::cout << "Cat Default Constructor" << std::endl;
}
Cat::~Cat(){
	std::cout << "Cat Desturactor" << std::endl;
}
Cat::Cat(const Cat &ct){
	*this = ct;
	std::cout << "Cat Copy Constructor" << std::endl;
}
Cat &Cat::operator=(const Cat &ct){
	std::cout << "Cat Operator" << std::endl;
	this->type = ct.type;
	return (*this);
}
std::string Cat::getType(void) const{
	return(this->type);
}
void Cat::setType(std::string typ){
	this->type = typ;
}
void Cat::makeSound(void) const{
	std::cout << "Cat: Meow Meow" << std::endl;
}