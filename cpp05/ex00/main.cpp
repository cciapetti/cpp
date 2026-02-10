#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a;
        Bureaucrat b("Gianni", 2);
        b.incrementGrade();
        std::cout << a;
        std::cout << b;

        Bureaucrat c(b);
        c.decrementGrade();
        std::cout << c;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}