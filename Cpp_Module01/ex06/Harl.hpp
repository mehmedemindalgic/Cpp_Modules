#ifndef HARL_HPP
#define HARL_HPP

#include "iostream"

class Harl{

	private:
		void warning( void );
		void error( void );
		void info( void );
		void debug( void );
	public:
		void complain( std::string level );
};
#endif