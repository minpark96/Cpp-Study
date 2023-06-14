#pragma once
#ifndef RECTANGLE2D_H_
#define RECTANGLE2D_H_

#include "mypoint.h"

class Rectangle2D
{
private:
	double x, y;
	double width, height;
public:
	Rectangle2D();
	~Rectangle2D();

	double getX() const;
	double getY() const;
	double getWidth() const;
	double getHeight() const;
	double getArea() const;
	double getPerimeter() const;

	void setX(const double d);
	void setY(const double d);
	void setWidth(const double d);
	void setHeight(const double d);

	bool contains(const double x, const double y) const;
	bool contains(const Rectangle2D& r) const;
	bool overlaps(const Rectangle2D& r) const;

	friend bool contains(const Rectangle2D& r, const MyPoint& p) 
	{ return r.contains(p.getX(), p.getY()); };
};

#endif