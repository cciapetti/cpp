#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain construcotr is called!" << std::endl;
}

Brain::Brain(const Brain& old)
{
    for (int i = 0; i < 100; ++i)
        ideas[i] = old.ideas[i];
}

Brain& Brain::operator=(const Brain& old)
{
    if (this != &old)
    {
        for (int i = 0; i < 100; ++i)
            this->ideas[i] = old.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor is called!" << std::endl;
}