#include "mypoint.h"
#include <cmath>

MyPoint::MyPoint() 
    : GeometricObject()
{
}

MyPoint::MyPoint(double x, double y) 
    : GeometricObject(x, y)
{
}

MyPoint::~MyPoint()
{
}

double MyPoint::distance(const GeometricObject& g) const
{
    return sqrt((getX() - g.getX()) * (getX() - g.getX())
        + (getY() - g.getY()) * (getY() - g.getY()));
}
