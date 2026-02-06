#ifndef DOG
# define DOG

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(const Dog &old);
        Dog &operator = (const Dog &old);
        void makeSound() const;
        void    set_ideas(std::string string);
        std::string    get_ideas();
        ~Dog();
};

#endif