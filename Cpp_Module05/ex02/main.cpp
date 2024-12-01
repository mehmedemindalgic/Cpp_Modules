#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

int main()
{
    AForm *value= NULL;

        try
        {
            Bureaucrat b1("Test1", 12);
            value = new ShrubberyCreationForm("Bob1");
            b1.signForm(*value);
            b1.executeForm(*value);
            delete value;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
            delete value;
        }
        try
        {
    
            Bureaucrat b1("Test2", 5);
            value = new PresidentialPardonForm("Bob2");
            b1.signForm(*value);
            b1.executeForm(*value);
            delete value;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
            delete value;
        }
        try
        {
            value = new RobotomyRequestForm("Bob3");
            Bureaucrat b1("Test3", 45);
            b1.signForm(*value);
            b1.executeForm(*value);
            delete value;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
            delete value;
        }
        
}