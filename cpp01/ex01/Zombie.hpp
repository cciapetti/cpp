#include <iostream>
#include <cstring>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie();
        void    announce( void );
        void    setName(std::string name);
        std::string    getName( void );
        ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );
