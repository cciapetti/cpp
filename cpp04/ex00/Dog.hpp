#ifndef DOG
# define DOG

#include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog();
        Dog(const Dog &old);
        Dog &operator = (const Dog &old);
        void makeSound() const;
        ~Dog();
};

#endif