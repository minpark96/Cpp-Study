#pragma once
#ifndef GEOMETRICOBJECT_H_
#define GEOMETRICOBJECT_H_

class GeometricObject
{
private:
	double x, y;
public:
	GeometricObject() { x = 0, y = 0; };
	GeometricObject(double x0, double y0) : x(x0), y(y0) {}
	virtual ~GeometricObject() {};
	double getX() const { return x;	};
	double getY() const { return y; };
	void setX(const double d) { x = d; };
	void setY(const double d) { y = d; };
	virtual double distance(const GeometricObject& g) const = 0;
};

#endif