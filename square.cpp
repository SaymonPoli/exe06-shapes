#include <iostream>
#include "square.hpp"
using namespace std;


void Square::SetSquare(Point2d pointA, Point2d pointB)
{
    m_points.push_back(pointA);
    m_points.push_back(pointB);
    m_sides.push_back(CalculateDistance(pointA, pointB));
    m_perimeter = CalculatePerimeter(4, m_sides);
}

vector<double> Square::GetSides()
{
    return m_sides;
}

void Square::PrintSquare()
{
    cout << "Square with points: " << m_points[0].GetX() << m_points[0].GetY();
    cout << " and " << m_points[1].GetX() << m_points[1].GetY() << endl;
    cout << "Perimeter: " << m_perimeter << endl;
}