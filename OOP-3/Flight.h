#pragma once
#include "Time.h"
#include <string>

class Flight
{
private:
	int _numberFlight;
	string _departurePoint;
	string _arrivePoint;
	Time _departureTime;
	Time _arriveTime;
public:
	Flight();

	Flight (int nubmerFlight, string depatrurePoint,
		string arrivePoint, Time* departureTime, Time* arriveTime);

	void SetFlight(int nubmerFlight, string depatrurePoint,
		string arrivePoint, Time* departureTime, Time* arriveTime);

	void DemoFlightWithTime();

	int GetFlightTimeMinutes();
};
