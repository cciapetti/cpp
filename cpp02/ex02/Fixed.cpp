#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::Fixed(const int val)
{
	int i = this->fractional_bits;
	this->value = val;
	while (i-- > 0)
		this->value *= 2;
}

Fixed::Fixed (const float val)
{
	int i = this->fractional_bits;
	float	temp_value = val;
	while (i-- > 0)
		temp_value *= 2;
	this->value = roundf(temp_value);
}

Fixed::Fixed(const Fixed &old)
{
	*this = old;
}

Fixed& Fixed:: operator = (const Fixed &old)
{
	if (this != &old)
		value = old.getRawBits();
	return *this;
}

std::ostream  &operator << (std::ostream &out, const Fixed &fixed_number)
{
	out << fixed_number.toFloat();
	return (out);
}

bool Fixed:: operator < (const Fixed &another)
{
	if (this->value < another.value)
		return (true);
	return (false);
}

bool Fixed:: operator > (const Fixed &another)
{
	if (this->value > another.value)
		return (true);
	return (false);
}

bool Fixed:: operator >= (const Fixed &another)
{
	if (this->value >= another.value)
		return (true);
	return (false);
}

bool Fixed:: operator <= (const Fixed &another)
{
	if (this->value <= another.value)
		return (true);
	return (false);
}

bool Fixed::operator == (const Fixed &another)
{
	if (this->value == another.value)
		return (true);
	return (false);
}

bool Fixed::operator != (const Fixed &another)
{
	if (this->value != another.value)
		return (true);
	return (false);
}

Fixed Fixed:: operator + (const Fixed &another)
{
	return (Fixed(this->toFloat() + another.toFloat()));
}

Fixed Fixed:: operator - (const Fixed &another)
{
	return (Fixed(this->toFloat() - another.toFloat()));
}

Fixed Fixed::operator * (const Fixed &another)
{
	return (Fixed(this->toFloat() * another.toFloat()));
}

Fixed Fixed::operator / (const Fixed &another)
{
	return (Fixed(this->toFloat() / another.toFloat()));
}

Fixed &Fixed::operator ++ ()
{
	this->value ++;
	return *this;
}

Fixed Fixed::operator ++ (int)
{
	Fixed tmp(*this);
	this->value++;
	return (tmp);
}

Fixed &Fixed::operator -- ()
{
	this->value--;
	return *this;
}

Fixed Fixed::operator -- (int)
{
	Fixed tmp(*this);
	this->value--;
	return (tmp);
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

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if(a <= b)
		return (a);
	else
		return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if(a.toFloat() <= b.toFloat())
		return (a);
	else
		return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a >= b)
		return a;
	else
		return b;
}

const Fixed &Fixed:: max(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() >= b.toFloat())
		return a;
	else
		return b;
}

Fixed::~Fixed()
{
	
}
