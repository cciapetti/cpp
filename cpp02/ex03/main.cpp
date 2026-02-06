#include "Point.hpp"

int main(void)
{
    Point a(-3, 0);
    Point b(3, 0);
    Point c(0, 3);
    Point point(1, 1);  //dentro
    Point point2(4, 1); //fuori
    Point point3(0, 3); //fuori perche vertice
    Point point4(0, 0); //fuori perche bordo
    Point point5(-1.5, 0.5); //dentro

    if (bsp(a, b, c, point5) == true)
        std::cout << "Dentro il triangolo!" << std::endl;
    else
        std::cout << "Fuori dal triangolo!" << std::endl;
    return (0);
}