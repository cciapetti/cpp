#include "Point.hpp"

Point::Point():x(0), y(0){};
Point::Point(float const valX, float const valY):x(valX), y(valY){};
Point::Point(const Point &old) : x(old.x), y(old.y) {}

Point& Point::operator = (const Point &old)
{
	if (this != &old)
		return (*this);
	return (*this);
}

Fixed const &Point::getX() const
{
	return (x);
}

Fixed const &Point::getY() const
{
	return (y);
}

Point::~Point(){}