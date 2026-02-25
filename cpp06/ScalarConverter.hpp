#ifndef SCALARCONVERSION_HPP
#define SCALARCONVERSION_HPP

# include <iostream>

bool    mixNumLet(std::string str);
char    charConversion(std::string str);
void    intConversion(std::string str);
void    floatConversion(std::string str);
void    ft_handle_nan_infs(std::string str);


class ScalarConverter
{
    public:
        ScalarConverter();
        ScalarConverter(ScalarConverter &old);
        ScalarConverter &operator = (ScalarConverter &old);
        ~ScalarConverter();

        static  int convert(std::string str);
};

#endif

