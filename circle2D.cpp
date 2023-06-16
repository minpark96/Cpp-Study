#include <cmath>
#include "circle2d.h"
#define PI 3.141592653589793

Circle2D::Circle2D() 
	: MyPoint()
{
	radius = 1;
}

Circle2D::Circle2D(double x, double y, double r)
	: MyPoint(x, y)
{
	radius = r;
}

double Circle2D::getRadius() const
{
	return radius;
}

double Circle2D::getArea() const
{
	return radius * radius * PI;
}

double Circle2D::getPerimeter() const
{
	return 2 * radius * PI;
}

void Circle2D::setRadius(const double d)
{
	radius = d;
}

bool Circle2D::contains(const double x, const double y) const
{
	if (distance(MyPoint(x, y)) > radius)
		return false;
	else
		return true;
}

bool Circle2D::contains(const Circle2D& circle) const
{
	if (abs(radius - circle.radius) < 
		distance((const MyPoint&) circle))
		return false;
	else
		return true;
	
}

bool Circle2D::overlaps(const Circle2D& circle) const
{
	if (radius + circle.radius < 
		distance((const MyPoint&)circle))
		return false;
	else
		return true;
}