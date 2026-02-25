#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(ScalarConverter &old)
{
    *this = old;
}

ScalarConverter &ScalarConverter::operator = (ScalarConverter &old)
{
    if (this != &old)
        *this = old;
    return (*this);
}

ScalarConverter::~ScalarConverter(){}

int ScalarConverter::convert(std::string str)
{
    std::cout << str << std::endl;
    if (str == "nan" || str == "+inf" || str == "-inf")
        return(ft_handle_nan_infs(str), 0);
    if (!str.empty() && !mixNumLet(str))
        return (1);
    if (str.length() == 1)
    {
        char    c = str[0];
        std::cout << "char: " << static_cast<char>(c) << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << std::endl;
        std::cout << "double: " << static_cast<double>(c) << std::endl;
    }
    else if (str.length() > 1)
    std::cout << "Lavoro su " << str << std::endl;

    charConversion(str);
    intConversion(str);
    floatConversion(str);
    return (0);
}
