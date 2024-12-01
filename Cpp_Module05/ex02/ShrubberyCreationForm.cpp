#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("Default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :AForm("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
{
    *this = other;
}   
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != &other)
    {
        this->target = other.target;
    }
    return *this;

}
ShrubberyCreationForm::~ShrubberyCreationForm() {}    

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    (void)executor;
    std::ofstream file;
    if (file.fail())
    {
        std::cout << "Error: could not create file!" << std::endl;
        return ;
    }
    file.open(this->target + "_shrubbery");
    file << "    ccee88oo\n";
    file << "  C8O8O8Q8PoOb o8oo\n";
    file << " dOB69QO8PdUOpugoO9bD\n";
    file << "CgggbU8OU qOp qOdoUOdcb\n";
    file << "    6OuU  /p u gcoUodpP\n";
    file << "      \\\\//  /douUP\n";
    file << "        \\\\////\n";
    file << "         |||/\\\n";
    file << "         |||\\/\n";
    file << "         |||||\n";
    file << "   .....//||||\\....\n";
    file.close();
}
