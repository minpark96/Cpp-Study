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

	static double Dot(const cVector3& v1, const cVector3& v2)
	{
		return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
	}

	static cVector3 Cross(const cVector3& v1, const cVector3& v2)
	{
		return cVector3(v1.y * v2.z - v1.z * v2.y, v1.z * v2.x - v1.x * v2.z, v1.x * v2.y - v1.y * v2.x);
	}

	static double Angle(const cVector3& v1, const cVector3& v2)
	{
		double theta = acos(Dot(v1, v2) / (v1.length() * v2.length()));
		const double pi = 3.14159265358979;
		theta = theta * 180 / pi;
		return theta;
	}

	double Dot(const cVector3& v) const;
	cVector3 Cross(const cVector3& v) const;
	double Angle(const cVector3 v) const;

	friend cVector3 operator*(const double d, const cVector3& v);
	friend std::ostream& operator<<(std::ostream& os, const cVector3& v);
};

#endif // !CVECTOR_H_