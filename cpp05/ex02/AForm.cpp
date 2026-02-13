#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("Form"), grade_to_sign(20), grade_to_execute(5)
{
    this->sign = false;
}

AForm::AForm(std::string name, int grade_s, int grade_e) : name(name), grade_to_sign(grade_s), grade_to_execute(grade_e)
{
    if (grade_s < 1 || grade_e < 1)
        throw AForm::GradeTooHighException();
    else if (grade_s > 150 || grade_e > 150)
        throw AForm::GradeTooLowException();
    this->sign = false;
}

AForm::AForm (const AForm &old) : name(old.name), grade_to_sign(old.grade_to_sign), grade_to_execute(old.grade_to_execute)
{
    this->sign = old.sign;
}

AForm &AForm::operator = (const AForm &old)
{
    if (this != &old)
        *this = old;
    return (*this);
}

AForm::~AForm(){};

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Too high grade!";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Too low grade!";
}

std::string AForm::getName() const
{
    return (this->name);
}

bool AForm::getSign() const
{
    return (this->sign);
}

int AForm::getGradeSign() const
{
    return (this->grade_to_sign);
}

int AForm::getGradeExec() const
{
    return (this->grade_to_execute);
}

bool AForm::beSigned(Bureaucrat &b)
{
    if (b.getGrade() > this->getGradeSign())
        throw AForm::GradeTooLowException();
    this->sign = true;
    return (this->sign);
}

std::ostream &operator << (std::ostream &os, AForm &f)
{
    os << "AForm: " << f.getName() << ", signed: " << f.getSign();
    os << ", grade to sign: " << f.getGradeSign() << ", grade to execute: " << f.getGradeExec() << std::endl;
    return (os);
}