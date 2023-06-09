#include<iostream>
#include<cmath>
#include "cVector3.h"

cVector3::cVector3(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

cVector3::~cVector3()
{
}

bool cVector3::operator==(cVector3& v)
{
	if(this->x == x && this->y == y && this->z == z)
		return true;

	return false;
}

bool cVector3::operator!=(cVector3& v)
{
	if (this->x != x || this->y != y || this->z != z)
		return true;

	return false;
}

cVector3 cVector3::operator+(cVector3& v)
{
	return cVector3(x + v.x, y + v.y, z + v.z);
}

cVector3 cVector3::operator-(cVector3& v)
{
	return cVector3(x - v.x, y - v.y, z - v.z);
}

cVector3 cVector3::operator*(double d)
{
	return cVector3(x * d, y * d, z * d);
}

cVector3 cVector3::operator/(double d)
{
	return cVector3(x / d, y / d, z / d);
}

double cVector3::length()
{
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));;
}

cVector3 cVector3::Normalize()
{

	return cVector3(x / length(), y / length(), z / length());
}

double cVector3::Dot(cVector3& v)
{
	return x * v.x + y * v.y + z * v.z;
}

cVector3 cVector3::Cross(cVector3& v)
{
	return cVector3(y * v.z - z * v.y,
		z * v.x - x * v.z, x * v.y - y * v.x);
}

double cVector3::Angle(cVector3& v)
{
	double theta = acos(Dot(v) / (length() * v.length()));
	const double pi = 3.14159265358979;
	theta = theta * 180 / pi;
	return theta;
}

cVector3 operator*(double d, cVector3& v)
{
	return v * d;
}

std::ostream& operator<<(std::ostream& os, const cVector3& v)
{
	os << v.x << ' ' << v.y << ' ' << v.z;
	return os;
}
