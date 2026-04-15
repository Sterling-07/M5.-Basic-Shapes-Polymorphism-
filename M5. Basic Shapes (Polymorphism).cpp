// M5. Basic Shapes (Polymorphism).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
using namespace std;

int main()
{
	BasicShape* shape[3];

	shape[0] = new Circle(1, 3, 7);
	shape[1] = new Rectangle(5, 6);
	shape[2] = new Square(7);

	cout << shape[0]->getName() << endl << "Area = " << shape[0]->getArea() << endl;
	cout << shape[1]->getName() << endl << "Area = " << shape[1]->getArea() << endl;
	cout << shape[2]->getName() << endl << "Area = " << shape[2]->getArea() << endl;

	return 0;
}

