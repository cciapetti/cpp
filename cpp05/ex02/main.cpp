#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat b("gianni", 1);
    ShrubberyCreationForm form1("home");
    form1.execute(b);

}