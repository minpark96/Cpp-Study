#include <cmath>
#include "circle2D.h"
#define PI 3.141592653589793

Circle2D::Circle2D()
{
	x = 0;
	y = 0;
	radius = 1;
}

Circle2D::Circle2D(double x, double y, double r)
{
	this->x = x;
	this->y = y;
	radius = r;
}

Circle2D::~Circle2D()
{
}

double Circle2D::getX() const
{
	return x;
}

double Circle2D::getY() const
{
	return y;
}

double Circle2D::getRadius() const
{
	return radius;
}

double Circle2D::getArea() const
{
	return getRadius() * getRadius() * PI;
}

double Circle2D::getPerimeter() const
{
	return 2 * getRadius() * PI;
}

bool Circle2D::contains(double x, double y) const
{
	const double distance = sqrt(pow(getX() - x, 2) + pow(getY() - y, 2));

	if (distance > getRadius())
		return false;
	else
		return true;
}

bool Circle2D::contains(const Circle2D& circle) const
{
	const double distance = sqrt(pow(getX() - circle.getX(), 2) + pow(getY() - circle.getY(), 2));

	if (abs(getRadius() - circle.getRadius()) < distance)
		return false;
	else
		return true;
	
}

bool Circle2D::overlaps(const Circle2D& circle) const
{
	const double distance = sqrt(pow(getX() - circle.getX(), 2) + pow(getY() - circle.getY(), 2));

	if (getRadius() + circle.getRadius() < distance)
		return false;
	else
		return true;
}
