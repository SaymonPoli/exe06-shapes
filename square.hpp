#ifndef SQUARE
#define SQUARE

#include <vector>
#include "Point2d.hpp"
#include "calculus.hpp"
class Square
{
private:
    std::vector<Point2d> m_points;
    std::vector<double> m_sides;
    double m_perimeter, m_area;

public:
    Square()
    {
        m_points.push_back(Point2d());
        m_points.push_back(Point2d());
        m_sides.push_back(0);
        m_perimeter = 0;
    };
    Square(Point2d pointA, Point2d pointB)
    {
        m_points.push_back(pointA);
        m_points.push_back(pointB);
        m_sides.push_back(CalculateDistance(pointA, pointB));
        m_perimeter = CalculatePerimeter(4, m_sides);
    };
    void SetSquare(Point2d pointA, Point2d pointB);

    std::vector<double> GetSides();

    void PrintSquare();
};

#endif