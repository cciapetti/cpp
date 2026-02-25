#include <iostream>
#include <cstdlib>

bool    ft_isdigit(std::string str, int *flag_point, int *i)
{
    if ((str[*i] < 48 || str[*i] > 57) && (str[*i] == '.' && *flag_point == 1))
    {
        std::cout << 1 << std::endl;
        return false;
    }
    if (str[*i] == '.' && (*i == 0 || *i == (int)str.length() - 1))
    {
        std::cout << 2 << std::endl;
        return false;
    }
    if (str[*i] == '.' && *flag_point == 0)
        *flag_point = 1;
    return true;
}

bool    mixNumLet(std::string str)
{
    // bool    boolAlpha = false;
    // bool    boolNum = false;
    // bool    boolSpace = false;
    int     flag_point = 0;
    for (int i = 0; i < (int)str.length(); i++)
    {
        if (!ft_isdigit(str, &flag_point, &i))
            return (std::cout << "Non e' un numero" << std::endl, 1);
        else
            return true;
    }
        // if (isalpha(str[i]) && i < (int)str.length() - 1)
        //     boolAlpha = true;
        // else if (isalpha(str[i]) && i == (int)str.length() - 1 && boolAlpha == false)
        // {
        //     if (str[i] == 'f')
        //         return (std::cout << "Trovata f ---> Numero float" << std::endl, 1);
        //     else
        //         boolAlpha = false;
        // }
        // if (isdigit(str[i]))
        //     boolNum = true;
        // if (isspace(str[i]))
        //     boolSpace = true;

    // if (boolAlpha && boolNum)
    //     return (std::cout << "Mixing string" << std::endl, false);
    // else if (boolAlpha)
    //     return (std::cout << "Stringa alfabetica non convertibile" << std::endl, false);
    // else if (boolNum && boolSpace)
    //     return (std::cout << "Stringa numerica non convertibile perche' con spazi" << std::endl, false);
    // std::cout << "Stringa numerica convertibile" << std::endl;
    return (true);
}

void    charConversion(std::string str)
{
    int num = atoi(str.c_str());
    if (num > 31 && num < 127)
    {
        char c = static_cast<char>(atoi(str.c_str()));
        std::cout << "char: "<< c << std::endl;
    }
    else if (num >= 0 && num < 32)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: outside the range of ASCII" << std::endl;
}

void    intConversion(std::string str)
{
    int i = static_cast<int>(atoi(str.c_str()));
    std::cout << "int: " << i << std::endl;
}

bool    ft_mod(float f)
{
    int intpart = static_cast<int>(f);
    float rest = f - intpart;
    if (rest == 0)
       return false;
    return true;
}

void    floatConversion(std::string str)
{
    float   f = static_cast<float>(atof(str.c_str()));
    if (ft_mod(f))
        std::cout << "float: " << f << 'f' << std::endl;
    else
        std::cout << "float: " << f << ".0f" << std::endl;
}

void    ft_handle_nan_infs(std::string str)
{
    if (str == "nan")
    {
        std::cout << "char: impossible" << std::endl << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl << "double: nan" << std::endl;
    }
    else if (str == "+inf")
    {
        std::cout << "char: impossible" << std::endl << "int: impossible" << std::endl;
        std::cout << "float: +inff" << std::endl << "double: +inf" << std::endl; 
    }
    else if (str == "-inf")
    {
        std::cout << "char: impossible" << std::endl << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl << "double: -inf" << std::endl; 
    }
}
