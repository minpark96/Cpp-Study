#include "rectangle2D.h"

Rectangle2D::Rectangle2D()
{
	x = 0;
	y = 0;
	width = 1;
	height = 1;
}

Rectangle2D::~Rectangle2D()
{
}

double Rectangle2D::getX() const
{
	return x;
}

double Rectangle2D::getY() const
{
	return y;
}

double Rectangle2D::getWidth() const
{
	return width;
}

double Rectangle2D::getHeight() const
{
	return height;
}

double Rectangle2D::getArea() const
{
	return width * height;
}

double Rectangle2D::getPerimeter() const
{
	return 2 * (width + height);
}

void Rectangle2D::setX(const double d)
{
	x = d;
}

void Rectangle2D::setY(const double d)
{
	y = d;
}

void Rectangle2D::setWidth(const double d)
{
	width = d;
}

void Rectangle2D::setHeight(const double d)
{
	height = d;
}

bool Rectangle2D::contains(const double x, const double y) const
{
	if (x > getX() + getWidth() / 2 || x < getX() - getWidth() / 2)
		return false;
	else
		if(y > getY() + getHeight() / 2 || y < getY() - getHeight() / 2)
			return false;
	return true;
}

bool Rectangle2D::contains(const Rectangle2D& r) const
{
	double l1, r1, u1, d1;
	double l2, r2, u2, d2;
	l1 = getX() - getWidth() / 2;
	r1 = getX() + getWidth() / 2;
	u1 = getY() + getHeight() / 2;
	d1 = getY() - getHeight() / 2;
	l2 = r.getX() - r.getWidth() / 2;
	r2 = r.getX() + r.getWidth() / 2;
	u2 = r.getY() + r.getHeight() / 2;
	d2 = r.getY() - r.getHeight() / 2;

	if (this->getPerimeter() > r.getPerimeter())
	{
		if (r1 > r2 && l1 < l2)
			if (u1 > u2 && d1 < d2)
				return true;
	}
	else if (this->getPerimeter() < r.getPerimeter())
	{
		if (r1 < r2 && l1 > l2)
			if (u1 < u2 && d1 > d2)
				return true;
	}
	else
	{
		if (getX() == r.getX() && getY() == r.getY() && getWidth() == r.getWidth() && getHeight() == r.getHeight())
			return true;
	}
	return false;
}

bool Rectangle2D::overlaps(const Rectangle2D& r) const
{
	double l1, r1, u1, d1;
	double l2, r2, u2, d2;
	l1 = getX() - getWidth() / 2;
	r1 = getX() + getWidth() / 2;
	u1 = getY() + getHeight() / 2;
	d1 = getY() - getHeight() / 2;
	l2 = r.getX() - r.getWidth() / 2;
	r2 = r.getX() + r.getWidth() / 2;
	u2 = r.getY() + r.getHeight() / 2;
	d2 = r.getY() - r.getHeight() / 2;
	
	if (d1 > u2)
		return false;
	else if (d2 > u1)
		return false;
	else if (l1 > r2)
		return false;
	else if (l2 > r1)
		return false;
	else
		return true;
}
