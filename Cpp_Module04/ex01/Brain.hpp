#pragma once

#include <iostream>

class Brain{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &copy);
		virtual ~Brain();
		Brain &operator=(const Brain &src);
		const std::string getIdea(size_t i)const;
		const std::string *getIdeaAddress(size_t i)const;
		void setIdea(size_t i, std::string idea);
};
