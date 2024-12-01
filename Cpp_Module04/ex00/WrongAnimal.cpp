#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void){
	this->type = "Wrong Default";
	std::cout << "WrongAnimal Default Constructor" << std::endl;
}
WrongAnimal::WrongAnimal(std::string typ){
	this->type = typ;
	std::cout << "WrongAnimal Constructor" << std::endl;
}
WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal Desturactor" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &al){
	*this = al;
	std::cout << "WrongAnimal Copy Constructor" << std::endl;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &al){
	this->type = al.type;
	std::cout << "WrongAnimal Operator" << std::endl;
	return(*this);
}
std::string WrongAnimal::getType(void) const{
	return(type);
}
void WrongAnimal::setType(std::string typ){
	this->type = typ;
}
void WrongAnimal::makeSound(void) const{
	std::cout << "WrongAnimal voice" << std::endl;
}