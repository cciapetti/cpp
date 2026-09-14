#include "ScalarConverter.hpp"
#include <cmath>
#include <iomanip>

ScalarConverter::ScalarConverter(){};

ScalarConverter::ScalarConverter(const ScalarConverter &old)
{
    *this = old;
};

ScalarConverter &ScalarConverter::operator = (const ScalarConverter &old)
{
    if (this != &old)
        *this = old;
    return (*this);
};

ScalarConverter::~ScalarConverter(){};

void printValue(std::string charStr, std::string intStr, std::string floatStr, std::string doubleStr)
{
    std::cout << "char: " << charStr << std::endl;
    std::cout << "int: " << intStr << std::endl; 
    std::cout << "float: " << floatStr << std::endl;
    std::cout << "double: " << doubleStr << std::endl;    
}

bool ScalarConverter::isInt(std::string literal)
{
    size_t i = 0;
    if ((literal[i] == '-' || literal[i] == '+') && literal.length() == 1)
        return (false);
    if (literal[i] == '-' || literal[i] == '+')
        i++;
    while (i < literal.length())
    {
        if (!isdigit(literal[i]))
            return (false);
        i++;
    }
    return (true);
}

bool ScalarConverter::isFloat(std::string literal)
{
    size_t i = 0;
    bool dotFound = false;
    if ((literal[i] == '-' || literal[i] == '+') && literal.length() == 1)
        return (false);
    if (literal[i] == '-' || literal[i] == '+')
        i++;
    while (i < literal.length() - 1)
    {
        if (literal[i] == '.')
        {
            if (dotFound)
                return (false);
            dotFound = true;
        }
        else if (!isdigit(literal[i]))
            return (false);
        i++;
    }
    if (literal[literal.length() - 1] != 'f')
        return (false);
    return (true);
}

bool ScalarConverter::isDouble(std::string literal)
{
    size_t i = 0;
    bool dotFound = false;
    if ((literal[i] == '-' || literal[i] == '+') && literal.length() == 1)
        return (false);
    if (literal[i] == '-' || literal[i] == '+')
        i++;
    while (i < literal.length())
    {
        if (literal[i] == '.' && dotFound == false)
            dotFound = true;
        else if (!isdigit(literal[i]))
            return (false);
        else if (literal[i] == '.' && dotFound == true)
            return (false);
        i++;
    }
    return (true);
}

bool ScalarConverter::isChar(std::string literal)
{
    if (literal.length() == 1 && literal[0] >= 32 && literal[0] <= 126)
        return (true);
    return (false);
}

std::string ScalarConverter::recognizeType(std::string literal)
{
    if (isInt(literal))
        return ("int");
    else if (isFloat(literal))
        return ("float");
    else if (isDouble(literal))
        return ("double");
    else if (isChar(literal))
        return ("char");
    return ("unknown");
}

void    ScalarConverter::convertInt(std::string literal)
{
    errno = 0;
    long  long  value = std::strtol(literal.c_str(), NULL, 10);
    if ((value >= 0 && value <= 31) || value == 127)
        std::cout << "char: Non displayable" << std::endl;
    else if (value < 0 || value > 127)
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
    if (value > INT_MAX || value < INT_MIN || errno == ERANGE)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(value) << std::endl;
    if (value == (static_cast<float>(value)))
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
    else
        std::cout << "float: impossible" << std::endl;
    if (value == (static_cast<double>(value)))
        std::cout << "double: "  << std::fixed << std::setprecision(1) << static_cast<double>(value) << std::endl;
    else
        std::cout << "double: impossible" << std::endl;    
}

void    ScalarConverter::convertChar(std::string literal)
{
    char value = literal[0];
    std::cout << "char: '" << value << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(value) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
    std::cout << "double: "  << std::fixed << std::setprecision(1) << static_cast<double>(value) << std::endl;      
}

void    ScalarConverter::convertFloat(std::string literal)
{
    errno = 0;
    size_t  pos = literal.find(".");
    float value = std::strtof(literal.c_str(), NULL);
    if ((value >= 0 && value <= 31) || value == 127)
        std::cout << "char: Non displayable" << std::endl;
    else if (value < 0 || value > 127)
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
    if (static_cast<double>(value) > INT_MAX || static_cast<double>(value) < INT_MIN || errno == ERANGE)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(value) << std::endl;
    if (pos != std::string::npos)
    {
        int n = literal.substr(pos, literal.length() - pos).length() - 2;
        std::cout << "float: " << std::fixed << std::setprecision(n) << value << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(n) << static_cast<double>(value) << std::endl;
    }
    else
    {
        std::cout << "float: " << std::fixed << std::setprecision(1) << value << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(value) << std::endl;
    }
}

void    ScalarConverter::convertDouble(std::string literal)
{
    errno = 0;
    size_t  pos = literal.find(".");
    double value = std::strtod(literal.c_str(), NULL);
    if ((value >= 0 && value <= 31) || value == 127)
        std::cout << "char: Non displayable" << std::endl;
    else if (value < 0 || value > 127)
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
    if (value > INT_MAX || value < INT_MIN || errno == ERANGE)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(value) << std::endl;
    if (pos != std::string::npos)
    {
        int n = literal.substr(pos, literal.length() - pos).length() - 1;
        std::cout << "float: " << std::fixed << std::setprecision(n) << value << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(n) << static_cast<double>(value) << std::endl;
    }
    else
    {
        std::cout << "float: " << std::fixed << std::setprecision(1) << value << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(value) << std::endl;
    }
}


void ScalarConverter::convert(std::string literal)
{
    if (literal == "+inff" || literal == "+inf")
        return (printValue("impossible", "impossible", "+inff", "+inf"));
    else if (literal == "-inff" || literal == "-inf")
        return (printValue("impossible", "impossible", "-inff", "-inf"));
    else if (literal == "nanf" || literal == "nan")
        return (printValue("impossible", "impossible", "nanf", "nan"));
    std::string type = recognizeType(literal);
    if (type == "unknown")
        printValue("impossible", "impossible", "impossible", "impossible");
    else if (type == "int")
        convertInt(literal);
    else if (type == "float")
        convertFloat(literal);
    else if (type == "double")
        convertDouble(literal);
    else if (type == "char")
        convertChar(literal);
}