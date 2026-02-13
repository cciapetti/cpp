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

AForm *Intern::makeForm(std::string formName, std::string targetForm)
{
    AForm *f;
    int len = (int) formName.length();
    for (int i = 0; i < len; i++)
        formName[i] = tolower(formName[i]);
    if (formName != "robotomy request" && formName != "presidential pardon" && formName!= "shrubbery creation")
        throw FormNotFound();
    switch(len)
    {
        case 16:
            f = new RobotomyRequestForm(targetForm);
            std::cout << "Intern creates " << formName << std::endl;
            break;
        case 19:
            f = new PresidentialPardonForm(targetForm);
            std::cout << "Intern creates " << formName << std::endl;
            break;
        case 18:
            f = new ShrubberyCreationForm(targetForm);
            std::cout << "Intern creates " << formName << std::endl;
            break;
    }
    return (f);
}