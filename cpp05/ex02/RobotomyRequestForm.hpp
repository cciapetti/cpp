#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "AForm.hpp"
# include <fstream>
# include <math.h>
# include <iostream>

class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &old);
        RobotomyRequestForm &operator = (const RobotomyRequestForm &old);
        ~RobotomyRequestForm();

        bool execute(Bureaucrat const & executor) const;
};

#endif