#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "AForm.hpp"
# include <fstream>
# include <math.h>
# include <iostream>

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &old);
        PresidentialPardonForm &operator = (const PresidentialPardonForm &old);
        ~PresidentialPardonForm();

        bool execute(Bureaucrat const & executor) const;
};

#endif