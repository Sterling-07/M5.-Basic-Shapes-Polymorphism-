#pragma once

#include "Rectangle.h"
#include <iostream>
using namespace std;

class Square : public Rectangle
{
private:
	double side;

public:
	Square(double s, const string& nm = "Square") : side(s), Rectangle(s, s, nm)
	{
		setName(nm);
	}

	double getSide()
	{
		return side;
	}

	void setSide(double s)
	{
		side = s;
		setLength(s);
		setWidth(s);
	}
};