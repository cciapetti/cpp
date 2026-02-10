#ifndef FORM_HPP
# define FORM_HPP
#include <iostream>
class Bureaucrat;

class Form
{
    private:
        const std::string   name;
        bool                sign;
        const int           grade_to_sign;
        const int           grade_to_execute;
    public:
        Form();
        Form(std::string name, int grade_s, int grade_e);
        Form(const Form &old);
        Form &operator = (const Form &old);
        ~Form();
        std::string getName() const;
        bool        getSign() const;
        int   getGradeSign() const;
        int   getGradeExec() const;
        bool    beSigned(Bureaucrat &b);

    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
};

std::ostream &operator << (std::ostream &os, Form &f);
#endif