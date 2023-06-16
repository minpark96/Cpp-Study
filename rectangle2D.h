#pragma once
#ifndef RECTANGLE2D_H_
#define RECTANGLE2D_H_

#include "mypoint.h"

class Rectangle2D : public MyPoint
{
private:
	double width, height;
public:
	Rectangle2D();
	Rectangle2D(double x, double y, double w, double h);

	double getWidth() const;
	double getHeight() const;
	double getArea() const;
	double getPerimeter() const;
	double getRight() const;
	double getLeft() const;
	double getDown() const;
	double getUp() const;

	void setWidth(const double d);
	void setHeight(const double d);

	bool contains(const double x, const double y) const;
	bool contains(const Rectangle2D& r) const;
	bool overlaps(const Rectangle2D& r) const;

	friend bool contains(const Rectangle2D& r, const MyPoint& p) 
	{ return r.contains(p.getX(), p.getY()); };
};

#endif