#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const & ref);
		~MateriaSource();
		MateriaSource & operator=(MateriaSource const & ref);
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);
	private:
		AMateria	*(inventory[4]);
};
