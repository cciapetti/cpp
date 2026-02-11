#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat b("gianni", 138);
    ShrubberyCreationForm form1("home");
    std::cout << form1;
    try
    {
        b.signForm(form1);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    // try
    // {
    //     form1.execute(b);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }

    try
    {
        b.executeForm(form1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}