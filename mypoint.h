#pragma once
#ifndef MYPOINT_H_
#define MYPOINT_H_

class MyPoint
{
private:
	double x, y;
public:
	MyPoint();
	MyPoint(double x, double y);
	~MyPoint();

	double getX() const;
	double getY() const;
	double distance(const MyPoint& p) const;
};

#endif