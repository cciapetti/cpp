#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "Wrong Cat";
    std::cout << "Wrong Cat constructed is called!" << std::endl;
}
WrongCat::WrongCat(const WrongCat &old)
{
    *this = old;
}
WrongCat &WrongCat::operator = (const WrongCat &old)
{
    if (this != &old)
        *this = old;
    return (*this);
}

void    WrongCat::makeSound() const
{
    std::cout << "Wrong Miao" << std::endl;

}
        
WrongCat::~WrongCat()
{
    std::cout << "Wrong Cat destructor is called!" << std::endl;
}



