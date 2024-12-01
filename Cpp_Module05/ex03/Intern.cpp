#include "Intern.hpp"

Intern::Intern(){}
Intern::~Intern(){}
Intern::Intern(const Intern& copy){
    *this = copy;

}
Intern& Intern::operator=(const Intern& value)
{
    (void)value;
    return *this;
}
AForm *Intern::makeForm(std::string formName, std::string target)
{
    std::string Names[3] ={
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };
    AForm* (Intern::*func[3])(std::string target) = {
        &Intern::createShrubberyCreationForm,
        &Intern::createRobotomyRequestForm,
        &Intern::createPresidentialPardonForm,
    };
    for (int i = 0; i < 3; i++)
    {
        if (Names[i] == formName)
            return (this->*func[i])(target);
    }
    throw Intern::FormNotFoundException();
}

AForm* Intern::createShrubberyCreationForm(std::string target)
{
    std::cout << "ShrubberyCreationForm created" << std::endl;
    return (new ShrubberyCreationForm(target));
}
AForm* Intern::createRobotomyRequestForm(std::string target)
{
    std::cout << "RobotomyRequestForm created" << std::endl;
    return (new RobotomyRequestForm(target));
}
AForm* Intern::createPresidentialPardonForm(std::string target)
{
    std::cout << "PresidentialPardonForm created" << std::endl;
    return (new PresidentialPardonForm(target));
}

const char* Intern::FormNotFoundException::what() const throw()
{
    return "Form Not Found";
}