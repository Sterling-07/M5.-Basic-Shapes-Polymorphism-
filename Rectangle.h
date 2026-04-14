#pragma once

#include "BasicShape.h"
#include <iostream>
using namespace std;

class Rectangle : public BasicShape
{
private:
	double length;
	double width;

public:
	Rectangle(double l, double w, const string& nm = "Rectangle") : length(l), width(w)
	{
		setName(nm);
		calcArea();
	}

	double getLength()
	{
		return length;
	}

	double getWidth()
	{
		return width;
	}

	void setLength(double l)
	{
		length = l;
		calcArea();
	}

	void setWidth(double w)
	{
		width = w;
		calcArea();
	}

	void calcArea()
	{
		setArea(length * width);
	}
};
