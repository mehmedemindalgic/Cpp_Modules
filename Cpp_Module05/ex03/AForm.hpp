#pragma once

#include "Bureaucrat.hpp"
#include <stdbool.h>

class Bureaucrat;

class AForm
{
    private:
        const std::string Name;
        bool signedStatus;
        const int gradeToSign;
        const int gradeToExecute;
    public:
        AForm();
        AForm(std::string name, int gradeToSign, int gradeToExecute);
        virtual ~AForm();
        AForm(const AForm& other);
        AForm &operator=(const AForm& other);
        virtual void execute(Bureaucrat const & executor) const = 0;

        const std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        void beSigned(const Bureaucrat& b);
        bool getSignedStatus() const;

        class GradeTooLowException : public std::exception
        {
            public:
            virtual const char* what() const throw();
        };
        
        class IsSignedException : public std::exception
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
        std::ostream& operator<<(std::ostream& my_cout, const AForm& value);
