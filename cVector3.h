#pragma once
#ifndef CVECTOR_H_
#define CVECTOR_H_

#include <iostream>

class cVector3
{
private:
	double x, y, z;
public:
	cVector3(double x = 0, double y = 0, double z = 0);
	~cVector3();

	bool operator==(const cVector3& v) const;
	bool operator!=(const cVector3& v) const;
	cVector3 operator+(const cVector3& v) const;
	cVector3 operator-(const cVector3& v) const;
	cVector3 operator*(const double d) const;
	cVector3 operator/(const double d) const;
	
	double length() const;
	cVector3 Normalize() const;

	static double Dot(const cVector3& v1, const cVector3& v2);
	static cVector3 Cross(const cVector3& v1, const cVector3& v2);
	static double Angle(const cVector3& v1, const cVector3& v2);

	double Dot(const cVector3& v) const;
	cVector3 Cross(const cVector3& v) const;
	double Angle(const cVector3 v) const;

	friend cVector3 operator*(const double d, const cVector3& v);
	friend std::ostream& operator<<(std::ostream& os, const cVector3& v);
};

#endif // !CVECTOR_H_