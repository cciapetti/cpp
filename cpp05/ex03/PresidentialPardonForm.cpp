#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("Presidential Pardon", 25, 5)
{
    this->target = "Default target";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("Presidential Pardon", 25, 5)
{
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &old):AForm("Presidential Pardon", 25, 5)
{
    *this = old;
}

PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &old)
{
    if (this != &old)
        *this = old;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

bool PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() == true && executor.getGrade() <= this->getGradeExec())
    {
        std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
        return (true);
    }
    else
        throw AForm::GradeTooLowException();
    return (false);
}