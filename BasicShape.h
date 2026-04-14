#pragma once

#include <iostream>
#include <string>
using namespace std;

class BasicShape 
{
private:
	double area;
	string name;

public:
	BasicShape() : area(0.0), name("Shape") {}

	double getArea() const
	{
		return area;
	}

	string getName() const
	{
		return name;
	}

	void setArea(double ar)
	{
		area = ar;
	}

	void setName(string nm)
	{
		name = nm;
	}

	virtual void calcArea() = 0;
};