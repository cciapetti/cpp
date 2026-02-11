#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("default"), grade_to_sign(20), grade_to_execute(5)
{
    this->sign = false;
}

Form::Form(std::string name, int grade_s, int grade_e) : name(name), grade_to_sign(grade_s), grade_to_execute(grade_e)
{
    if (grade_s < 1 || grade_e < 1)
        throw Form::GradeTooHighException();
    else if (grade_s > 150 || grade_e > 150)
        throw Form::GradeTooLowException();
    this->sign = false;
}

Form::Form (const Form &old) : name(old.name), grade_to_sign(old.grade_to_sign), grade_to_execute(old.grade_to_execute)
{
    this->sign = old.sign;
}

Form &Form::operator = (const Form &old)
{
    if (this != &old)
        *this = old;
    return (*this);
}

Form::~Form(){};

const char* Form::GradeTooHighException::what() const throw()
{
    return "Too high grade!";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Too low grade!";
}

std::string Form::getName() const
{
    return (this->name);
}
bool Form::getSign() const
{
    return (this->sign);
}
int Form::getGradeSign() const
{
    return (this->grade_to_sign);
}
int Form::getGradeExec() const
{
    return (this->grade_to_execute);
}

bool Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() > this->getGradeSign())
        throw Form::GradeTooLowException();
    this->sign = true;
    return (this->sign);
}
std::ostream &operator << (std::ostream &os, Form &f)
{
    os << "Form: " << f.getName() << ", signed: " << f.getSign();
    os << ", grade to sign: " << f.getGradeSign() << ", grade to execute: " << f.getGradeExec() << std::endl;
    return (os);
}