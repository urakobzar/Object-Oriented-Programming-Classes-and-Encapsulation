#include "Time.h"

Time::Time(int year, int month, int day, int hour, int minute)
{
	this->_year = year;
	this->_month = month;
	this->_day = day;
	this->_hour = hour;
	this->_minute = minute;
}

Time::Time()
{

}


void Time::SetTime(int year, int month, int day, int hour, int minute)
{
	this->_year = year;
	if (month > 12)
	{
		throw exception("Count of Months can't be more than 12");
	}
	this->_month = month;
	if (day > 30)
	{
		throw exception("Count of Days can't be more than 30");
	}
	this->_day = day;
	if (hour > 24)
	{
		throw exception("Count of Hours can't be more than 24");
	}
	this->_hour = hour;
	if (minute > 60)
	{
		throw exception("Count of Minutes can't be more than 60");
	}
	this->_minute = minute;
}


int Time::GetMonth()
{
	return this->_month;
}

int Time::GetDay() 
{
	return this->_day;
}


int Time::GetHour() 
{
	return this->_hour;
}


int Time::GetMinute() 
{
	return this->_minute;
}
