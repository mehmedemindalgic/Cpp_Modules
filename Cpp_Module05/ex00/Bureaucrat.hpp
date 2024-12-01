#pragma once
#include <iostream>
#include <exception>

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


        std::string getName() const;
        int getGrade() const;

        
        void incrementGrade();
        void decrementGrade();
        void checkGrade(int grade);

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