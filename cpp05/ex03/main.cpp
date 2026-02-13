#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

//Testing Shrubbery Form
// int main()
// {
//     Bureaucrat b("gianni", 138);
//     ShrubberyCreationForm form1("home");
//     std::cout << form1;
//     try
//     {
//         b.signForm(form1);
//     }
//     catch(std::exception &e)
//     {
//         std::cout << e.what() << std::endl;
//     }
//     try
//     {
//         form1.execute(b);
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << std::endl;
//     }
//     try
//     {
//         b.executeForm(form1);
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << std::endl;
//     }
// }

//Testing Robotomy
// int main()
// {
//     Bureaucrat  b("Boss", 40);
//     RobotomyRequestForm form2("robotomy");
//     b.signForm(form2);
//     // std::cout << form2;
//     try
//     {
//         form2.execute(b);
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << std::endl;
//     }
    
//     try
//     {
//         b.executeForm(form2);
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << std::endl;
//     }
    
// }

//Presidential
int main()
{
    Bureaucrat  b("boss", 5);
    PresidentialPardonForm form2;
    b.signForm(form2);
    std::cout << b;
    try
    {
        form2.execute(b);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    try
    {
        b.executeForm(form2);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}