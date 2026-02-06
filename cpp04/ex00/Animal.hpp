#ifndef ANIMAL
# define ANIMAL

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &old);
        Animal &operator = (const Animal &old);

        virtual void makeSound() const;
        std::string getType() const;

        ~Animal();
};

#endif