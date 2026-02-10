#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat b("Gianni", 2);
        Form f("business", 5, 2);
        b.signForm(f);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}