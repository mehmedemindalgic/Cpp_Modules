#pragma once

#include <iostream>
#include <exception>
#include "Form.hpp"


class Form;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat &operator=(const Bureaucrat& other);

        std::string getName(void) const;
        int getGrade(void) const;
        void incrementGrade(void);
        void decrementGrade(void);
        void checkGrade(int grade);
        void signForm(Form& form);

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

