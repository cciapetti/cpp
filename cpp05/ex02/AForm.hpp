#ifndef AFORM_HPP
# define AFORM_HPP
#include <iostream>
class Bureaucrat;

class AForm
{
    private:
        const std::string   name;
        bool                sign;
        const int           grade_to_sign;
        const int           grade_to_execute;
    public:
        AForm();
        AForm(std::string name, int grade_s, int grade_e);
        AForm(const AForm &old);
        AForm &operator = (const AForm &old);
        virtual ~AForm();
        std::string getName() const;
        bool        getSign() const;
        int   getGradeSign() const;
        int   getGradeExec() const;
        bool    beSigned(Bureaucrat &b);

        virtual void execute(Bureaucrat const & executor) const = 0;

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

std::ostream &operator << (std::ostream &os, AForm &f);
#endif