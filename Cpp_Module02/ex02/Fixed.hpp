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

		
		Fixed& operator=(const Fixed &fx);

		//Compare
		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;
		
		// + - * /
		Fixed operator+(const Fixed &other) const;
		Fixed operator-(const Fixed &other) const;
		Fixed operator*(const Fixed &other) const;
		Fixed operator/(const Fixed &other) const;

		// ++ --
		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);
		
		// To
		float toFloat( void ) const;
		int toInt( void ) const;
		
		// GetSet
		int getRawBits(void) const;
		void setRawBits(int const);

		// Max Min
		static Fixed& min(Fixed &a, Fixed &b);
    	static Fixed& max(Fixed &a, Fixed &b);

    	static const Fixed &min(const Fixed &a, const Fixed &b);
    	static const Fixed &max(const Fixed &a, const Fixed &b);
};
std::ostream & operator<<(std::ostream &o, const Fixed &f);