#include "mypoint.h"
#include <cmath>

MyPoint::MyPoint()
{
    x = 0;
    y = 0;
}

MyPoint::MyPoint(double x, double y)
{
    this->x = x;
    this->y = y;
}

MyPoint::~MyPoint()
{
}

double MyPoint::getX() const
{
    return x;
}

double MyPoint::getY() const
{
    return y;
}

double MyPoint::distance(const MyPoint& p) const
{
    return sqrt(pow(getX() - p.getX(), 2) + pow(getY() - p.getY(), 2));
}
