#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "AForm.hpp"
# include <fstream>
# include <iostream>

class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &old);
        ShrubberyCreationForm &operator = (const ShrubberyCreationForm &old);
        ~ShrubberyCreationForm();

        bool execute(Bureaucrat const & executor) const;
};

#endif