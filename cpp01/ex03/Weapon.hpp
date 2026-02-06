#include <iostream>
#include <cstring>

#ifndef WEAPOON_HPP
#define WEAPOON_HPP
class Weapon
{
    private:
        std::string type;
    
    public:
		Weapon();
        Weapon(std::string type);
        const std::string   &getType( void );
        void                setType(std::string type);
        ~Weapon();
};

#endif