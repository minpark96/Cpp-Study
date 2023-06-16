#pragma once
#ifndef CIRCLE2D_H_
#define CIRCLE2D_H_

#include "mypoint.h"

class Circle2D : public MyPoint
{
private:
	double radius;
public:
	Circle2D();
	Circle2D(double x, double y, double r);

	double getRadius() const;
	double getArea() const;
	double getPerimeter() const;

	void setRadius(const double d);

	bool contains(const double x, const double y) const;
	bool contains(const Circle2D& circle) const;
	bool overlaps(const Circle2D& circle) const;

	friend bool contains(const Circle2D& c, const MyPoint& p) 
	{ return c.contains(p.getX(), p.getY()); };
};

#endif