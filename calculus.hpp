#ifndef CALCULUS
#define CALCULUS

#include <cmath>
#include <vector>
#include "point2d.hpp"

double CalculateDistance(const Point2d &p1, const Point2d &p2)
{
    double xDiff = p2.GetX() - p1.GetX();
    double yDiff = p2.GetY() - p1.GetY();

    double distanceSquared = xDiff * xDiff + yDiff * yDiff;

    double distance = sqrt(distanceSquared);

    return distance;
}

double CalculatePerimeter(const int numberOfSides, const double &sides)
{
    double perimeter = 0;

    perimeter = numberOfSides * sides;

    return perimeter;
}

double CalculateTotalPerimeter(const int numberOfSides, const std::vector<double> &sides)
{
    double perimeter = 0;

    for (int i = 0; i < numberOfSides; i++)
    {
        perimeter += sides[i];
    }

    return perimeter;
}

#endif
