#ifndef CAT
# define CAT

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat &old);
        Cat &operator = (const Cat &old);
        void    makeSound() const;
        ~Cat();
};

#endif