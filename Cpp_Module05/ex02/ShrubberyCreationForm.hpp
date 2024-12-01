
#pragma once
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
        
        ~ShrubberyCreationForm();      
        void execute(Bureaucrat const& executor) const;

};
