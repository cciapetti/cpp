#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"
class Intern
{
    public:
        Intern();
        Intern(const Intern & old);
        Intern &operator = (const Intern &old);
        ~Intern();
        AForm *makeForm(std::string formName, std::string targetForm);

    class FormNotFound : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
};


#endif