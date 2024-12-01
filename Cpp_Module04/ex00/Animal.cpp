#include "Animal.hpp"

Animal::Animal(void){
	this->type = "Animal";
	std::cout << "Animal Default Constructor" << std::endl;
}
Animal::Animal(std::string typ){
	this->type = typ;
	std::cout << "Animal Constructor" << std::endl;
}
Animal::~Animal(){
	std::cout << "Animal Desturactor" << std::endl;
}
Animal::Animal(const Animal &al){
	*this = al;
	std::cout << "Animal Copy Constructor" << std::endl;
}
Animal &Animal::operator=(const Animal &al){
	std::cout << "Animal Operator" << std::endl;
	this->type = al.type;
	return(*this);
}
std::string Animal::getType(void) const{
	return(type);
}
void Animal::setType(std::string typ){
	this->type = typ;
}
void Animal::makeSound(void) const{
	std::cout << "Animal voice" << std::endl;
}