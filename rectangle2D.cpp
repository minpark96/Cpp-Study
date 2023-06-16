#include "rectangle2d.h"

Rectangle2D::Rectangle2D()
	: MyPoint()
{
	width = 1;
	height = 1;
}

Rectangle2D::Rectangle2D(double x, double y, 
	double w, double h)
	: MyPoint(x, y)
{
	width = w;
	height = h;
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

double Rectangle2D::getRight() const
{
	return getX() + width / 2;
}

double Rectangle2D::getLeft() const
{
	return getX() - width / 2;
}

double Rectangle2D::getDown() const
{
	return getY() - height / 2;
}

double Rectangle2D::getUp() const
{
	return getY() + height / 2;
}

void Rectangle2D::setWidth(const double d)
{
	width = d;
}

void Rectangle2D::setHeight(const double d)
{
	height = d;
}

bool Rectangle2D::contains(const double x, 
	const double y) const
{
	if (x > getX() + width / 2 || x < getX() - width / 2)
		return false;
	else
		if(y > getY() + height / 2 || y < getY() - height / 2)
			return false;
	return true;
}

bool Rectangle2D::contains(const Rectangle2D& r) const
{
	if (getPerimeter() > r.getPerimeter())
	{
		if (getRight() > r.getRight() && getLeft() < r.getLeft())
			if (getDown() < r.getDown() && getUp() > r.getUp())
				return true;
	}
	else if (getPerimeter() < r.getPerimeter())
	{
		if (getRight() < r.getRight() && getLeft() > r.getLeft())
			if (getDown() > r.getDown() && getUp() < r.getUp())
				return true;
	}
	else
	{
		if (getX() == r.getX() && getY() == r.getY() 
			&& width == r.width && height == r.height)
			return true;
	}
	return false;
}

bool Rectangle2D::overlaps(const Rectangle2D& r) const
{
	if (getDown() > r.getUp())
		return false;
	else if (getUp() < r.getDown())
		return false;
	else if (getRight() < r.getLeft())
		return false;
	else if (getLeft() > r.getRight())
		return false;
	else
		return true;
}