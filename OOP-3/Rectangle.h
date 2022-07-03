#pragma once
#include "Point.h"
#include <exception>
#include <iostream>

using namespace std;

class Rectangle
{
private:
	double Length;
	double Width;
	Point CenterPoint;
public:
	Rectangle();

	Rectangle(double length, double width, double x, double y);

	void SetRectangle(double length, double width, double x, double y);

	void DemoRectangleWithPoint();


	Point GetCenterPoint();

	double GetLength();

	double GetWidth();

};


