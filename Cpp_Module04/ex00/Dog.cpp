#include "Dog.hpp"

Dog::Dog(void){
	this->type = "Dog";
	std::cout << "Dog Default Constructor" << std::endl;
}
Dog::~Dog(){
	std::cout << "Dog Desturactor" << std::endl;
}
Dog::Dog(Dog &dg){
	*this = dg;
	std::cout << "Dog Copy Constructor" << std::endl;
}
Dog &Dog::operator=(const Dog &dg){
	std::cout << "Dog Operator" << std::endl;
	this->type = dg.type;
	return (*this);
}
std::string Dog::getType(void) const{
	return(this->type);
}
void Dog::setType(std::string typ){
	this->type = typ;
}
void Dog::makeSound(void) const{
	std::cout << "Dog: woof woof" << std::endl;
}