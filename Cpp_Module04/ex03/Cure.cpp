#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

Cure::Cure() : type("cure")
{
	std::cout << this->type << " constructed" << std::endl;
}

Cure::~Cure()
{
	std::cout << this->type << " destroyed" << std::endl;
}

Cure::Cure(Cure const & ref) : type(ref.getType())
{
	std::cout << this->type << " constructed from copy" << std::endl;
}

Cure & Cure::operator=(Cure const & ref)
{
	std::cout << "Assigned from " << ref.getType() << std::endl;
	return (*this);
}

std::string const & Cure::getType( void ) const
{
	return (this->type);
}

Cure *Cure::clone() const
{
	Cure	*ret = new Cure;
	return (ret);
}

void Cure::use(ICharacter& target)
{
	std::string target_name = target.getName();

	std::cout << " *** heals " << target_name << "\'s wounds" << std::endl;
}