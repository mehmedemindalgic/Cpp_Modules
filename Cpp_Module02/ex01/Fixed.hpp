#pragma once

#include <iostream>

class Fixed {
	private:

		int fixed;
		static const int _fractional = 8;
		
	public:
		Fixed();
		Fixed(int Fixed);
		Fixed(float fixed);
		Fixed(const Fixed&);
		~Fixed();

		Fixed& operator=(const Fixed&);
		
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits(void) const;
		void setRawBits(int const);
};
std::ostream & operator<<(std::ostream &o, const Fixed &f);