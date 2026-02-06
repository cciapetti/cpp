#ifndef CAT
# define CAT

#include "Animal.hpp"

class Cat: public Animal
{
    public:
        Cat();
        Cat(const Cat &old);
        Cat &operator = (const Cat &old);
        void    makeSound() const;
        ~Cat();
};

#endif