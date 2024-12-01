#include "AAnimal.hpp"

AAnimal::AAnimal(){
	this->type = "default";
	std::cout << "Animal Default Constructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy){
	std::cout << "Animal Copy Constructor" << std::endl;
	*this = copy;
}

AAnimal::~AAnimal(){
	std::cout << "Animal Deconstructor" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &src){
	std::cout << "Animal Operator" << std::endl;
	this->type = src.type;
	return *this;
}

std::string	AAnimal::getType(void)const{
	return (this->type);
}

