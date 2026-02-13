#ifndef INTERN_HPP
# define INTERN_HPP

class Intern
{
public:
    Intern();
    Intern(const Intern & old);
    Intern &operator = (const Intern &old);
    ~Intern();
};


#endif