#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("test", 4);
        std::cout << b << std::endl;
        b.decrementGrade();
        std::cout << b << std::endl;
        b.incrementGrade();
        std::cout << b << std::endl;
        b.incrementGrade();
        std::cout << b << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}