#pragma once

#include "BasicShape.h"
#include <iostream>
#include <cmath>
using namespace std;

class Circle : public BasicShape
{
private:
	double xCenter;
	double yCenter;
	double radius;
	double pi = 3.14;

public:
	Circle(double x, double y, double r, const string& nm = "Circle") : xCenter(x), yCenter(y), radius(r) 
	{
		setName(nm);
		calcArea();
	}

	double getXCenter() const
	{
		return xCenter;
	}

	double getYCenter() const
	{
		return yCenter;
	}

	double getRadius() const
	{
		return radius;
	}

	void setXCenter(double x)
	{
		xCenter = x;
	}

	void setYCenter(double y)
	{
		yCenter = y;
	}

	void calcArea()
	{
		setArea(pi * (pow(radius, 2)));
	}
};