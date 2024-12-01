#include "AForm.hpp"

AForm::AForm() : Name("Default"), gradeToSign(150), gradeToExecute(150){}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : Name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

AForm::~AForm(){}

AForm::AForm(const AForm& other) : Name(other.getName()), gradeToSign(other.getGradeToSign()), gradeToExecute(other.getGradeToExecute()){}

AForm& AForm::operator=(const AForm& other)
{
    if (this == &other)
		return *this;
	return *this;
}

const std::string AForm::getName() const
{
    return this->Name;
}

int AForm::getGradeToSign() const
{
    return this->gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return this->gradeToExecute;
}

void AForm::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() > this->gradeToExecute)
        throw GradeTooLowException();
    else
        this->signedStatus = true;
}

bool AForm::getSignedStatus() const
{
    return this->signedStatus;
}

const char* AForm::IsSignedException::what() const throw()
{
    return ("Form Could NOT Be Signed");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("Grade Is Too LOW (Form)!");
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("Grade Is Too HIGH (Form)!");
}

std::ostream& operator<<(std::ostream& my_cout, const AForm& value)
{

    my_cout << " Signed " << value.getName();
    return my_cout;
}
