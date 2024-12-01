#include "Fixed.hpp"
Fixed::Fixed() : fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int tmp)
{
	Fixed::fixed = tmp;
	std::cout << "Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fx)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fx;
}

Fixed& Fixed::operator=(const Fixed &fx)
{
	std::cout << "Copy assignment operator called"<< std::endl;
	if(this != &fx)
	{
		Fixed::fixed = fx.getRawBits();
	}
	return(*this);

}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(Fixed::fixed);
}

void Fixed::setRawBits(int const tmp)
{
	Fixed::fixed = tmp;
}