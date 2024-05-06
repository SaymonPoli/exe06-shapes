
#include <iostream>
#include "circle.hpp"
#include <cmath>

#define PI 3.14159265359

using namespace std;

Circle::Circle() {
    m_center = Point2d();
    m_radius = 0;
    m_area = 0;
    m_perimeter = 0;
};

Circle::Circle(const Point2d &center, int radius)   
    : m_center(center), m_radius(radius)
{
    m_area = PI * pow(radius, 2);
    m_perimeter = 2 * PI * radius;
}

Circle::Circle(const Point2d &center, const Point2d &otherPoint)
    : m_center(center)
{
    m_radius = sqrt(pow(otherPoint.GetX() - center.GetX(), 2) + pow(otherPoint.GetY() - center.GetY(), 2));
    m_area = PI * pow(m_radius, 2);
    m_perimeter = 2 * PI * m_radius;
}

void Circle::SetCircle(Point2d &center, int ratio)
{
    m_center = center;
    m_radius = ratio;
    m_area = PI * pow(ratio, 2);
    m_perimeter = 2 * PI * ratio;
}

void Circle::SetCircleX(int value)
{
    m_center.SetX(value);
}

void Circle::SetCircleY(int value)
{
    m_center.SetY(value);
}

double Circle::GetArea()
{
    return m_area;
}

double Circle::GetPerimeter()
{
    return m_perimeter;
}

void Circle::PrintCircle()
{
    cout << "Circle info: " << endl;
    cout << "\t Center: (" << m_center.GetX() << ", " << m_center.GetY() << ")" << endl;
    cout << "\t Radius: " << m_radius << endl;
    cout << "\t Area: " << m_area << endl;
    cout << "\t Perimeter: " << m_perimeter << endl;
}