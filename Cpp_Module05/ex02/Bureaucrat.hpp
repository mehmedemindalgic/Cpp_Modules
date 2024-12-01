#pragma once

#include <iostream>
#include <exception>
#include "AForm.hpp"


class AForm;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat &operator=(const Bureaucrat& other);
        
        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        void checkGrade(int grade);
        void signForm(AForm& Form);
        void executeForm(AForm const & Form);

        class GradeTooHighException : public std::exception
        {
            public:
            virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
            virtual const char* what() const throw();
        };
};

std::ostream& operator<< (std::ostream& my_cout, const Bureaucrat& value);

