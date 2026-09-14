#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        std::cout << "./convert <string_to_convert>" << std::endl;
    else
        ScalarConverter::convert(av[1]);
}