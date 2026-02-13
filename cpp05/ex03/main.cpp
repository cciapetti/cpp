#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

// int main()
// {
//     Intern someRandomIntern;
//     try
//     {
//         Bureaucrat b("Bur", 149);
//         AForm* rrf;

//         rrf = someRandomIntern.makeForm("RoBOTOmy REQUESt", "Bender");
//         b.signForm(*rrf);

//         b.executeForm(*rrf);
//         delete rrf;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << std::endl;
//     }
// }

int main()
{
    Intern someRandomIntern;
    Bureaucrat b("Bur", 70);
    AForm* rrf;
    AForm *ppf;
    AForm *scf;
    AForm *ciao;
    try
    {
        std::cout << "MAKE FORM"<< std::endl;
        rrf = someRandomIntern.makeForm("RoBOTOmy REQUESt", "Bender");
        scf = someRandomIntern.makeForm("Shrubbery Creation", "Booo");
        ppf = someRandomIntern.makeForm("presidential pardon", "Fry");
        ciao = someRandomIntern.makeForm("ciao", "ciao2");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << "SIGN FORM"<< std::endl;
    try
    {
        b.signForm(*rrf);
        b.signForm(*scf);
        b.signForm(*ppf);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "EXECUTE FORM"<< std::endl;
    try
    {
        b.executeForm(*rrf);
        b.executeForm(*scf);
        b.executeForm(*ppf);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    delete rrf;
    delete ppf;
    delete scf;
}