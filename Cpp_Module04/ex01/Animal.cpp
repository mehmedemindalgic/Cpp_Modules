#include "Animal.hpp"

Animal::Animal(){
	this->type = "default";
	std::cout << "Animal Default Constructor" << std::endl;
}

Animal::Animal(const Animal &copy){
	std::cout << "Animal Copy Constructor" << std::endl;
	*this = copy;
}

Animal::~Animal(){
	std::cout << "Animal Deconstructor" << std::endl;
}

Animal &Animal::operator=(const Animal &src){
	std::cout << "Animal Operator" << std::endl;
	this->type = src.type;
	return *this;
}

void Animal::makeSound(void)const{
	std::cout << "Animal voice" << std::endl;
}

std::string	Animal::getType(void)const{
	return (this->type);
}

