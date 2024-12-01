#pragma once

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(const Intern &copy);
        Intern &operator=(const Intern &value);
        AForm *makeForm(std::string formName, std::string target);


        AForm* createShrubberyCreationForm(std::string target);
        AForm* createRobotomyRequestForm(std::string target);
        AForm* createPresidentialPardonForm(std::string target);

        class FormNotFoundException : public std::exception
        {
            public:
            virtual const char* what() const throw();
        };
};
