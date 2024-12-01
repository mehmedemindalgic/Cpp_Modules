#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request", 72, 45), target("Default") {}

RobotomyRequestForm::~RobotomyRequestForm() {}


RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm("RobotomyRequest", 72, 45), target(target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other):AForm(){
    *this = other;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if (this != &other)
    {
        this->target = other.target;
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    std::cout << "Drilling noises... " << std::endl;
    std::srand(std::time(nullptr));
    if (std::rand() % 2) 
    {
        std::cout << executor.getName() << " has been robotomized successfully." << std::endl;
    } 
    else 
    {
        std::cout << "Robotomy of " << executor.getName() << " failed." << std::endl;
    }
}