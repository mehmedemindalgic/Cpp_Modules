#include "Form.hpp"

Form::Form() : Name("Default"), gradeToSign(150), gradeToExecute(150){}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : Name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

Form::~Form(){}

Form::Form(const Form& other) : Name(other.getName()), gradeToSign(other.getGradeToSign()), gradeToExecute(other.getGradeToExecute()){}

Form& Form::operator=(const Form& other)
{
    if (this == &other)
		return *this;
	return *this;
}

const std::string Form::getName() const
{
    return this->Name;
}

int Form::getGradeToSign() const
{
    return this->gradeToSign;
}

int Form::getGradeToExecute() const
{
    return this->gradeToExecute;
}

void Form::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() > this->gradeToExecute)
        throw GradeTooLowException();
    else
        this->signedStatus = true;
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade Is Too LOW (Form)!");
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade Is Too HIGH (Form)!");
}

std::ostream& operator<<(std::ostream& my_cout, const Form& value)
{

    my_cout<<" Signed " <<value.getName();
    return my_cout;
}
