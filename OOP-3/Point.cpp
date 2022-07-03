#include "Point.h"


Point::Point(double x, double y)
{
	this->SetPoint(x, y);
}

Point::Point()
{

}


void Point::SetPoint(double x, double y)
{
	this->X = x;
	this->Y = y;
}

double Point::GetX()
{
	return this->X;
}

double Point::GetY()
{
	return this->Y;
}
