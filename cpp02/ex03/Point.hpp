#include "Fixed.hpp"

class	Point
{
	private:
		Fixed const	x;
		Fixed const	y;

	public:
		Point();
		Point(float  valX, float  valY);
		Point(const Point &old);
		Point &operator = (const Point &old);
		Fixed const &getX() const;
		Fixed const &getY() const;

		~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

