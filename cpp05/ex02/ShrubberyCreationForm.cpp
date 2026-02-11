#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():signGrade(145), execGrade(137)
{

}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target):signGrade(145), execGrade(137)
{
    this->target = target;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &old):signGrade(145), execGrade(137)
{
    *this = old;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &old)
{
    if (this != &old)
        *this = old;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::string     OutputName = this->target + "_shrubbery";
    std::ofstream   OutputFile(OutputName.c_str());

    OutputFile << "          &&& &&  & &&" << std::endl << "      && &\\/&\\|& ()|/ @, &&" << std::endl << "      &\\/(/&/&||/& /_/)_&/_&" << std::endl;
    OutputFile << "   &() &\\/&|()|/&\\/ ()/\\ & ()" << std::endl << "  &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl << "&&   && & &| &| /& & % ()& /&&" << std::endl;
    OutputFile << " ()&_---()&\\&\\|&&-&&--%---()~" << std::endl << "     &&     \\|||" << std::endl;
    OutputFile << "             |||" << std::endl << "             |||" << std::endl << "             |||" << std::endl << "             |||" << std::endl << "       , -=-~  .-^- _" << std::endl;

    OutputFile.close();
}