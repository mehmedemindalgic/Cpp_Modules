#include "WrongCat.hpp"

WrongCat::WrongCat(void){
	this->type = "WrongCat";
	std::cout << "WrongCat Default Constructor" << std::endl;
}
WrongCat::~WrongCat(){
	std::cout << "WrongCat Desturactor" << std::endl;
}
WrongCat::WrongCat(const WrongCat &ct){
	*this = ct;
	std::cout << "WrongCat Copy Constructor" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat &ct){
	std::cout << "WrongCat Operator" << std::endl;
	this->type = ct.type;
	return (*this);
}
std::string WrongCat::getType(void) const{
	return(this->type);
}
void WrongCat::setType(std::string typ){
	this->type = typ;
}
void WrongCat::makeSound(void) const{
	std::cout << "WrongCat: Meow Meow" << std::endl;
}