#pragma once
#ifndef CIRCLE2D_H__
#define CIRCLE2D_H__


class Circle2D
{
private:
	double x, y, radius;
public:
	Circle2D();
	Circle2D(double x, double y, double r);
	~Circle2D();
	
	double getX() const;
	double getY() const;
	double getRadius() const;
	double getArea() const;
	double getPerimeter() const;
	bool contains(double x, double y) const;
	bool contains(const Circle2D& circle) const;
	bool overlaps(const Circle2D& circle) const;
};


#endif // !CIRCLE2D_H__