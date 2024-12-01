#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain Default Constructor" << std::endl;
}

Brain::Brain(const Brain &copy){
	std::cout << "Brain Copy Constructor" << std::endl;
	*this = copy;
}

Brain::~Brain(){
	std::cout << "Brain Deconstructor" << std::endl;
}

Brain &Brain::operator=(const Brain &src){
	std::cout << "Brain Operator" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		if (src.ideas[i].length() > 0)
			this->ideas[i].assign(src.ideas[i]);
	}
	return *this;
}

const std::string	Brain::getIdea(size_t i)const{
	if (i < 100)
		return(this->ideas[i]);
	else
		return ("There is only 100 ideas per brain.");
}

const std::string *Brain::getIdeaAddress(size_t i)const{
	if (i < 100)
	{
		const std::string &stringREF = this->ideas[i];
		return(&stringREF);
	}
	else
		return (NULL);
}

void	Brain::setIdea(size_t i, std::string idea){
	if (i < 100)
		this->ideas[i] = idea;
	else
		std::cout << "There is only 100 ideas per brain." << std::endl;
}
