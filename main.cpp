// #include <iostream>
#include <vector>
#include "circle.hpp"
#include "square.hpp"

using namespace std;

int main()
{

    Point2d point1;
    point1.SetPoint(10, 20);
    Point2d point2;
    point2.SetPoint(20, 10);
    Circle c1;
    c1.SetCircle(point1, 10);

    c1.PrintCircle();

    Square s1(point1, point2);
    s1.PrintSquare();
}
