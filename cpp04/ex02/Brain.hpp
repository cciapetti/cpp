#ifndef BRAIN
# define BRAIN

#include <iostream>
class Brain
{
    public:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &old);
        Brain &operator = (const Brain &old);
        ~Brain();
};

#endif