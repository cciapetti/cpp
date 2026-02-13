#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern(){}

Intern::Intern(const Intern &old)
{
    *this = old;
}

Intern &Intern::operator = (const Intern &old)
{
    if (this != &old)
        *this = old;
    return (*this);
}

Intern::~Intern(){}

const char* Intern::FormNotFound::what() const throw()
{
    return "Unrecognized Form Name...";
}

AForm *Intern::makeRobotomyForm(std::string target)
{
    return new RobotomyRequestForm(target);
}
AForm *Intern::makeShrubberyForm(std::string target)
{
    return new ShrubberyCreationForm(target);
}
AForm *Intern::makePresidentialForm(std::string target)
{
    return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string formName, std::string targetForm)
{
    AForm *f = NULL;
    std::string forms[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    AForm *(Intern::*ptr[3])(std::string target) = {&Intern::makeRobotomyForm, &Intern::makePresidentialForm, &Intern::makeShrubberyForm};
    for (int i = 0; i < (int) formName.length(); i++)
        formName[i] = tolower(formName[i]);
    if (formName != "robotomy request" && formName != "presidential pardon" && formName!= "shrubbery creation")
        throw FormNotFound();
    for (int i = 0; i < 3; i++)
    {
        if (formName == forms[i])
        {
            f = (this->*ptr[i])(targetForm);
            std::cout << "Intern creates " << formName << std::endl;
            break;
        }
    }
    return (f);
}

