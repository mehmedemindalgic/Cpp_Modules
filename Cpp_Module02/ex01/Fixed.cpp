#include "Fixed.hpp"

Fixed::Fixed() : fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fx){
	std::cout << "Copy constructor called" << std::endl;
	*this = fx;
}

Fixed::Fixed(int fixed){
 	this->fixed = roundf(fixed * ( 1 << _fractional));
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float fixed){
	this->fixed = roundf(fixed * ( 1 << _fractional));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl; 
}

float Fixed::toFloat( void ) const{
   return((float)getRawBits() / ( 1 << _fractional));
}

int Fixed::toInt( void ) const{
    return (getRawBits() / ( 1 << _fractional));
}

int Fixed::getRawBits(void) const{
	return(Fixed::fixed);
}

void Fixed::setRawBits(int const tmp){
	Fixed::fixed = tmp;
}

/// operetorss

Fixed& Fixed::operator=(const Fixed &fx)
{
	this->fixed = fx.getRawBits();
	std::cout << "Copy assigment operator called" << std::endl;
    return(*this);
}

std::ostream & operator<<(std::ostream &o, const Fixed &f)
{
	o << f.toFloat();
	return(o);
}
	
