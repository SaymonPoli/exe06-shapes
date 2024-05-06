#ifndef CIRCLE
#define CIRCLE

#include "point2d.hpp"
class Circle
{
private:
    Point2d m_center;
    int m_radius;
    double m_area;
    double m_perimeter;

public:
    Circle();
    Circle(const Point2d &center, int radius);
    Circle(const Point2d &center, const Point2d &otherPoint);

    void SetCircle(Point2d &center, int ratio);
    void SetCircleX(int size);
    void SetCircleY(int size);

    double GetArea();
    double GetPerimeter();
    void PrintCircle();
    ~Circle() {}
};
#endif