#include "Point.hpp"

Fixed   computeArea(Point const &a, Point const &b, Point const &c)
{
    Fixed xa = a.getX();
    Fixed xb = b.getX();
    Fixed xc = c.getX();

    Fixed ya = a.getY();
    Fixed yb = b.getY();
    Fixed yc = c.getY();

    Fixed area = (xa * (yb - yc) + xb * (yc - ya) + xc * (ya - yb)) / 2;
    if (area < 0)
        area = area * (-1);
    return (area);

}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed   area1, area2, area3;
    Fixed   areaTot;
    areaTot = computeArea(a, b, c);
    area1 = computeArea(point, b, c);
    area2 = computeArea(a, point, c);
    area3 = computeArea(a, b, point);
    if (area1 == 0 || area2 == 0 || area3 == 0)
        return (false);
    if (area1 + area2 + area3 == areaTot)
        return (true);
    return (false);
}
