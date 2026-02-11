#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() :name("default")
{
    this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int gr) : name(name)
{
    if (gr < 1)
        throw   GradeTooHighException();
    else if (gr > 150)
        throw   GradeTooLowException();
    this->grade = gr;

}

Bureaucrat::Bureaucrat(const Bureaucrat &old):name(old.name)
{
    this->grade = old.grade;
}

Bureaucrat & Bureaucrat::operator = (const Bureaucrat &old)
{
    if (this != &old)
        this->grade = old.getGrade();
    return (*this);
}

Bureaucrat::~Bureaucrat(){}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void Bureaucrat::incrementGrade()
{
    if (this->grade == 1)
        throw GradeTooHighException();
    this->grade--;
}

void Bureaucrat::decrementGrade()
{
    if (this->grade == 150)
        throw GradeTooLowException();
    this->grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high for a Bureaucrat!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low for a Bureaucrat!";
}

std::ostream &operator << (std::ostream &os, const Bureaucrat &b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
    return (os);
}

void Bureaucrat::signForm(AForm &f)
{
    try
    {
        bool resp = f.beSigned(*this);
        if (resp)
            std::cout << this->getName() << " signed " << f.getName() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << this->getName() << " could not sign " << f.getName() << " because";
        std::cout <<" its grade " << this->getGrade() << " is lower than " << f.getGradeSign() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form) const
{
    try
    {
        bool resp = form.execute(*this);
        if (resp)
            std::cout << this->getName() << " executed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << this->getName() << " could not execute " << form.getName() << " because";
        std::cout <<" its grade " << this->getGrade() << " is lower than " << form.getGradeExec() << std::endl;
    }
    
}
