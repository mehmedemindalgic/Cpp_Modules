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

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() >= b.getRawBits())
		return a;
	return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
	if(a.getRawBits() < b.getRawBits())
		return(a);
	return(b);

}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
	if(a.getRawBits() >= b.getRawBits())
		return(a);
	return(b);
}


//operetors

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

bool Fixed::operator>(const Fixed &other) const{
	return(Fixed::toFloat() > other.toFloat());
}
bool Fixed::operator<(const Fixed &other) const{
	return(Fixed::toFloat() < other.toFloat());
}
bool Fixed::operator>=(const Fixed &other) const{
	return(Fixed::toFloat() >= other.toFloat());
}
bool Fixed::operator<=(const Fixed &other) const{
	return(Fixed::toFloat() <= other.toFloat());
}
bool Fixed::operator==(const Fixed &other) const{
	return(Fixed::toFloat() == other.toFloat());
}
bool Fixed::operator!=(const Fixed &other) const{
	return(Fixed::toFloat() != other.toFloat());
}


Fixed Fixed::operator+(const Fixed &other) const{
	return(Fixed::toFloat() + other.toFloat());
}
Fixed Fixed::operator-(const Fixed &other) const{
	return(Fixed::toFloat()- other.toFloat());
}
Fixed Fixed::operator*(const Fixed &other) const{
	return(Fixed::toFloat() * other.toFloat());
}
Fixed Fixed::operator/(const Fixed &other) const{
	return(Fixed::toFloat() / other.toFloat());
}


Fixed &Fixed::operator++(void){
	this->fixed++;
	return(*this);
}

Fixed Fixed::operator++(int){
	Fixed a(this->toFloat());
	this->fixed++;
	return(a);
}

Fixed &Fixed::operator--(void){
	this->fixed--;
	return(*this);
}

Fixed Fixed::operator--(int){
	Fixed a(this->toFloat());
	this->fixed--;
	return(a);
}