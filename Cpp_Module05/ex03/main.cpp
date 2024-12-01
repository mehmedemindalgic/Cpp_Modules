#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main()
{
    AForm *value= NULL;

    try
    {
        Intern intern;
        Bureaucrat b("test", 15);
        value = intern.makeForm("shrubbery creation", "home");
        b.signForm(*value);
        b.executeForm(*value);
        delete value;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        delete value;
    }     
        
}