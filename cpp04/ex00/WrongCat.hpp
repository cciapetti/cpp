#ifndef WRONGCAT
# define WRONGCAT

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat &old);
        WrongCat &operator = (const WrongCat &old);

        void    makeSound() const;
        
        ~WrongCat();
};
#endif