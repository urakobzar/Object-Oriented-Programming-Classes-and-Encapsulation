#include "Rectangle.h"


Rectangle::Rectangle(double length, double width, double x, double y)
{
	this->SetRectangle(length, width, x, y);
}


Rectangle::Rectangle()
{

}

void Rectangle::SetRectangle(double length, double width, double x, double y)
{
	if (length < 0)
	{
		throw exception("Length can't be a negative");
	}
	this->Length = length;
	if (width < 0)
	{
		throw exception("Width can't be a negative");
	}
	this->Width = width;
	this->CenterPoint.SetPoint(x, y);
}


void Rectangle::DemoRectangleWithPoint()
{
	Rectangle rectangle[5];
	rectangle[0].Rectangle::Rectangle(25.4, 1.1, 5.0, 10.7);
	rectangle[1].Rectangle::Rectangle(50.0, 7.3, 12.0, -10.7);
	rectangle[2].Rectangle::Rectangle(4.7, 43.6, -7.0, 16.2);
	rectangle[3].Rectangle::Rectangle(9.2, 23.9, 4.0, 4.0);
	rectangle[4].Rectangle::Rectangle(17.9, 38.0, -3.0, -2.1);
	for (int i = 0; i < 5; i++)
	{
		cout << "X = " << rectangle[i].GetCenterPoint().GetX() << "\t";
		cout << "Y = " << rectangle[i].GetCenterPoint().GetY() << "\t";
		cout << "Length = " << rectangle[i].GetLength() << "\t";
		cout << "Width = " << rectangle[i].GetWidth() << "\t";
		cout << endl;
	}
	double xCenter = 0;
	double yCenter = 0;
	for (int i = 0; i < 5; i++)
	{
		xCenter += rectangle[i].GetCenterPoint().GetX();
		yCenter += rectangle[i].GetCenterPoint().GetY();
	}
	cout << "Xcenter = " << xCenter/5 << "\t";
	cout << "Ycenter = " << yCenter/5 << "\t";
}


Point Rectangle::GetCenterPoint()
{
	return this->CenterPoint;
}

double Rectangle::GetLength()
{
	return this->Length;
}

double Rectangle::GetWidth()
{
	return this->Width;
}
