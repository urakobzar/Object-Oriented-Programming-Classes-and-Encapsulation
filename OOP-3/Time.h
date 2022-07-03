#pragma once
#include <exception>
#include <iostream>

using namespace std;

class Time
{
private:
	int _year;
	int _month;
	int _day;
	int _hour;
	int _minute;
public:
	Time();

	Time(int year, int month, int day, int hour, int minute);

	void SetTime(int year, int month, int day, int hour, int minute);

	int GetMonth();

	int GetDay();

	int GetHour();

	int GetMinute();
};



