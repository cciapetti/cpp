#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <cerrno>
# include <climits>
# include <cstdlib>
# include <cstring>

class ScalarConverter
{
    private:
        //Sono privati per evitare che la classe sia istanziata
        ScalarConverter();
        ScalarConverter(const ScalarConverter &old);
        ScalarConverter &operator = (const ScalarConverter &old);
        ~ScalarConverter();
        static bool    isInt(std::string literal);
        static bool    isFloat(std::string literal);
        static bool    isDouble(std::string literal);
        static bool    isChar(std::string literal);
        static void    convertInt(std::string literal);
        static void    convertFloat(std::string literal);
        static void    convertDouble(std::string literal);
        static void    convertChar(std::string literal);
    public:
        // Un metodo static appartiene alla classe e non al singolo oggetto. 
        // Posso chiamare il metodo senza instanziare la classe.
        static void convert(std::string literal);
        static std::string recognizeType(std::string literal);
};

#endif // SCALARCONVERTER_HPP