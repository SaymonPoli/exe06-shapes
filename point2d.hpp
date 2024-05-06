#ifndef POINT2D
#define POINT2D
#include <vector>

class Point2d
{
private:
    size_t m_x, m_y;

public:
    Point2d() : m_x(0), m_y(0){};
    Point2d(int x, int y) : m_x(x), m_y(y){};
    void SetPoint(size_t xValue, size_t yValue)
    {
        m_x = xValue;
        m_y = yValue;
    }

    void SetX(size_t value) { m_x = value; }
    void SetY(size_t value) { m_y = value; }

    size_t GetX() const { return m_x; }
    size_t GetY() const { return m_y; }
    std::vector<size_t> GetPoints() const { return {m_x, m_y}; }
};

#endif
