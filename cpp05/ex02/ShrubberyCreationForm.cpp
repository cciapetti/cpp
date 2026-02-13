#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("Shrubbery Creation Form", 145, 137)
{
    this->target = "Default target";
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("Shrubbery Creation Form", 145, 137)
{
    this->target = target;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &old):AForm("Shrubbery Creation Form", 145, 137)
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

bool ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (this->getSign() == true && executor.getGrade() <= this->getGradeExec())
    {
        std::string     OutputName = this->target + "_shrubbery";
        std::ofstream   OutputFile(OutputName.c_str());
        std::cout << executor.getName() << " execute the shrubbery creation form" << std::endl;
        OutputFile << "          &&& &&  & &&" << std::endl << "      && &\\/&\\|& ()|/ @, &&" << std::endl << "      &\\/(/&/&||/& /_/)_&/_&" << std::endl;
        OutputFile << "   &() &\\/&|()|/&\\/ ()/\\ & ()" << std::endl << "  &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl << "&&   && & &| &| /& & % ()& /&&" << std::endl;
        OutputFile << " ()&_---()&\\&\\|&&-&&--%---()~" << std::endl << "     &&     \\|||" << std::endl;
        OutputFile << "             |||" << std::endl << "             |||" << std::endl << "             |||" << std::endl << "             |||" << std::endl << "       , -=-~  .-^- _" << std::endl;
        OutputFile.close();
        return (true);
    }
    else
        throw AForm::GradeTooLowException();
    return (false);
}
