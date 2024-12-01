#pragma once

#include <iostream>

#include <iostream>

class Fixed {
	private:

		int fixed;
		static const int _fractional = 8;
		
	public:

		Fixed();
		Fixed(int fixed);
		Fixed(const Fixed&);
		Fixed& operator=(const Fixed&);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const);
};