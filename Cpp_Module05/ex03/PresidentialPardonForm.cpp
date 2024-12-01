#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) , target("Default") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5) , target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other)
{
    *this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    if (this != &other)
    {
        this->target = other.target;
    }
    return *this;
}
PresidentialPardonForm::~PresidentialPardonForm(){}


void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
    (void)executor;
    std::cout<< target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

