#include "Flight.h"


Flight::Flight()
{

}


Flight::Flight(int numberFlight, string departurePoint, string arrivePoint, Time* departureTime, Time* arriveTime)
{
	this->SetFlight(numberFlight, departurePoint, arrivePoint, departureTime, arriveTime);
}

void Flight::SetFlight(int numberFlight, string departurePoint, string arrivePoint, Time* departureTime, Time* arriveTime)
{
	this->_numberFlight = numberFlight;
	this->_departurePoint = departurePoint;
	this->_arrivePoint = arrivePoint;
	this->_departureTime = *departureTime;
	this->_arriveTime = *arriveTime;
	if (this->_departureTime.GetMonth() == this->_arriveTime.GetMonth())
	{
		if (this->_departureTime.GetDay() == this->_arriveTime.GetDay())
		{
			if (this->_departureTime.GetHour() == this->_arriveTime.GetHour())
			{
				if (this->_departureTime.GetMinute() >= this->_arriveTime.GetMinute())
				{
					throw exception("The arrival time cannot be earlier than the departure time");
				}
			}
			if (this->_departureTime.GetHour() > this->_arriveTime.GetHour())
			{
				throw exception("The arrival time cannot be earlier than the departure time");
			}
		}
		if (this->_departureTime.GetDay() > this->_arriveTime.GetDay())
		{
			throw exception("The arrival time cannot be earlier than the departure time");
		}
	}
	if (this->_departureTime.GetMonth() > this->_arriveTime.GetMonth())
	{
		throw exception("The arrival time cannot be earlier than the departure time");
	}
}


void Flight::DemoFlightWithTime()
{
	Flight flight[5];
	Time departureTime[5];
	Time arriveTime[5];
	departureTime[0].Time::Time(2021, 1, 2, 21, 30);
	arriveTime[0].Time::Time(2021, 1, 2, 23, 20);
	flight[0].Flight::Flight(1050, "Moscow", "Omsk", &departureTime[0], &arriveTime[0]);
	departureTime[1].Time::Time(2021, 3, 4, 10, 30);
	arriveTime[1].Time::Time(2021, 3, 4, 23, 20);
	flight[1].Flight::Flight(3090, "Tomsk", "Moscow", &departureTime[1], &arriveTime[1]);
	departureTime[2].Time::Time(2021, 5, 6, 12, 30);
	arriveTime[2].Time::Time(2021, 5, 6, 22, 20);
	flight[2].Flight::Flight(3060, "Moscow", "Tomsk", &departureTime[2], &arriveTime[2]);
	departureTime[3].Time::Time(2021, 7, 8, 5, 30);
	arriveTime[3].Time::Time(2021, 7, 8, 7, 40);
	flight[3].Flight::Flight(3080, "Tomsk", "Omsk", &departureTime[3], &arriveTime[3]);
	departureTime[4].Time::Time(2021, 9, 10, 8, 50);
	arriveTime[4].Time::Time(2021, 9, 10, 10, 20);
	flight[4].Flight::Flight(2060, "Omsk", "Moscow", &departureTime[4], &arriveTime[4]);
	for (int i = 0; i < 5; i++)
	{
		cout << endl;
		cout << flight[i]._numberFlight << "\t" << flight[i]._departurePoint << "-" << flight[i]._arrivePoint;
		cout << "\tDeparture: " << flight[i]._departureTime.GetDay() << "." << flight[i]._departureTime.GetMonth()
			<< " " << flight[i]._departureTime.GetHour() << ":" << flight[i]._departureTime.GetMinute();
		cout << "\tArrive: " << flight[i]._arriveTime.GetDay() << "." << flight[i]._arriveTime.GetMonth()
			<< " " << flight[i]._arriveTime.GetHour() << ":" << flight[i]._arriveTime.GetMinute();
		cout << "\nTime of flight: " << flight[i].GetFlightTimeMinutes() / 60 << " hours ";
		cout << flight[i].GetFlightTimeMinutes() % 60 << " minutes";
	}

}



int Flight::GetFlightTimeMinutes()
{
	int minute = this->_arriveTime.GetMinute() - this->_departureTime.GetMinute();
	int hour = this->_arriveTime.GetHour() - this->_departureTime.GetHour();
	if (hour < 0)
	{
		hour = 24 + hour;
	}
	if (minute < 0)
	{
		hour--;
		minute = 60 + minute;
	}
	return (hour * 60 + minute);
}