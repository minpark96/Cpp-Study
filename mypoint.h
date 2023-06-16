#pragma once
#ifndef MYPOINT_H_
#define MYPOINT_H_

#include "geometric_object.h"

class MyPoint : public GeometricObject
{
public:
	MyPoint();
	MyPoint(double x, double y);
	virtual ~MyPoint();

	double distance(const GeometricObject& g) const;
};

#endif