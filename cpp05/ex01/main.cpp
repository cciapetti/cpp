#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat b("Gianni", 6);
        Form f("business", 5, 2);
        std::cout << b;
        std::cout << f;
        b.signForm(f);
        b.incrementGrade();
        b.signForm(f);
        std::cout << f;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}