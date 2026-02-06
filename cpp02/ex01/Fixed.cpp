#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	int i = this->fractional_bits;
	this->value = val;
	while (i-- > 0)
		this->value *= 2;
}

Fixed::Fixed (const float val)
{
	std::cout << "Float constructor called" << std::endl;
	int i = this->fractional_bits;
	float	temp_value = val;
	while (i-- > 0)
		temp_value *= 2;
	this->value = roundf(temp_value);
}

Fixed::Fixed(const Fixed &old)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = old;
}

Fixed& Fixed:: operator = (const Fixed &old)
{
	std::cout << "Copy assignment operator called" <<std::endl;
	if (this != &old)
		this->value = old.getRawBits();
	return *this;
}

std::ostream  &operator << (std::ostream &out, const Fixed &fixed_number)
{
	out << fixed_number.toFloat();
	return (out);
}

int	Fixed::getRawBits(void) const
{
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

int Fixed::toInt( void ) const
{
	int	i = this->fractional_bits;
	int	val = this->value;
	while (i-- > 0)
		val /= 2;
	return (val);
}

float Fixed::toFloat( void ) const
{
	int	i = this->fractional_bits;
	float	val = this->value;
	while (i-- > 0)
		val /= 2;
	return (val);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
