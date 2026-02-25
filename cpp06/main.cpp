#include <iostream>
#include "ScalarConverter.hpp"
bool    ft_isdigit(std::string str, int *flag_point, int *i);

std::string    ft_point(std::string str)
{
    for (int i = 0; i < (int)str.length() - 1; i++)
    {
        if (str[i] == '.')
            return ("double");
    }
    return ("int");
}
std::string ft_handle_number(std::string str)
{
    if (str[str.length() - 1] == 'f')
        return "float";
    return (ft_point(str));
}

std::string getType(std::string str)
{
int     flag_point = 0;
    for (int i = 0; i < (int)str.length(); i++)
    {
        if (ft_isdigit(str, &flag_point, &i))
        {
            std::cout << ft_handle_number(str) << std::endl;
            return (ft_handle_number(str));
        }
    }
    return ("ciao");
}

int main(int ac, char *av[])
{
    ScalarConverter b;
    if (ac != 2)
        return (std::cout << "Two arguments needed" << std::endl, 1);
    std::string str = av[1];
    getType(str);
    ScalarConverter::convert(str);
}
