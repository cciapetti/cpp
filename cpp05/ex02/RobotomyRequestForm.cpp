#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():AForm("Robotomy Request Form", 72, 45)
{
    this->target = "Default target";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm("Robotomy Request Form", 72, 45)
{
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &old):AForm("Robotomy Request Form", 72, 45)
{
    *this = old;
}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &old)
{
    if (this != &old)
        *this = old;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){}

bool RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    srand(time(NULL));
    if (this->getSign() == true && executor.getGrade() <= this->getGradeExec())
    {
        if (rand() % 2 == 0)
        {
            std::cout << "Zzzzzzzzzzz..." << std::endl;
            std::cout << this->target << " has been robotomized successfully!" << std::endl;
            return (true);
        }
        std::cout << "Robotomy failed..." << std::endl;
    }
    else
        throw AForm::GradeTooLowException();
    return (false);
}
