#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b_test("test", 150);
        Form formcuk("Formtest", 15, 150);
        b_test.signForm(formcuk);
        std::cout << b_test << std::endl;
        b_test.decrementGrade();
        std::cout << b_test << std::endl;
        b_test.signForm(formcuk);
        b_test.incrementGrade();
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}