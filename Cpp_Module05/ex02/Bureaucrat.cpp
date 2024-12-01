#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): name("Default")
{
    this->grade = 150;
}
Bureaucrat::Bureaucrat(std::string name, int grade): name(name)
{
    checkGrade(grade);
    this->grade = grade;
}
Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.getName())
{
    this->grade = other.getGrade();
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other){
    if (this == &other)
		return *this;
	return *this;
}
std::string Bureaucrat::getName() const{
    return (this->name);
}
int Bureaucrat::getGrade() const{
    return (this->grade);
}

void Bureaucrat::incrementGrade(){
        checkGrade(this->grade + 1);
        this->grade++;
}

void Bureaucrat::decrementGrade(){
        checkGrade(this->grade - 1);
        this->grade--;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
   return ("Grade Is Too HIGH");
}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
   return ("Grade Is Too LOW");
}

void Bureaucrat::checkGrade(int grade){
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
}

std::ostream& operator<< (std::ostream& my_cout, const Bureaucrat& value)
{
    my_cout<< value.getName() <<" Bureaucrat Grade " << value.getGrade();
    return my_cout;
};

void Bureaucrat::signForm(AForm &form)
{
    try 
    {
        form.beSigned(*this);
        std::cout << name << " signed " << form.getName() << std::endl;
    } catch (const std::exception& e) {
        std::cout << name << " couldn’t sign " << form.getName() << " Because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const &form)
{
    try 
    {
        if(form.getSignedStatus() == true)
        {
            form.execute(*this);
            std::cout << name << " executed " << form.getName() << std::endl;
        }
        else 
            throw AForm::IsSignedException();
    } catch (const std::exception& e) {
        std::cout << name << " couldn’t execute " << form.getName() << " Because " << e.what() << std::endl;
    }
}