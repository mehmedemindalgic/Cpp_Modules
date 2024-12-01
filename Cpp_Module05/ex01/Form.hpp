#pragma once

#include "Bureaucrat.hpp"
#include <stdbool.h>

class Bureaucrat;

class Form
{
    private:
        const std::string Name;
        bool signedStatus;
        const int gradeToSign;
        const int gradeToExecute;
    public:
        Form();
        Form(std::string name, int gradeToSign, int gradeToExecute);
        ~Form();
        Form(const Form& other);
        Form &operator=(const Form& other);

        const std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        void beSigned(const Bureaucrat& b);

        class GradeTooLowException : public std::exception
        {
            public:
            virtual const char* what() const throw();
        };
        class GradeTooHighException : public std::exception
        {
            public:
            virtual const char* what() const throw();
        };
};
std::ostream& operator<<(std::ostream& my_cout, const Form& value);
