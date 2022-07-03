#include "Route.h"

void ReadRouteFromConsole(Route& route)
{
	cout << "Enter a Route Number: ";
	cin >> route.RouteNumber;
	while (true)
	{
		cout << "Enter a Route Frequency: ";
		route.RouteFrequency = ReadingCorrectSize();
		if (route.RouteFrequency <= 120)
		{
			break;
		}
		cout << "\nYou mistakes. Try again";
		cout << "\nThe value must be no more than the 120 minutes\n";
	}
	cout << "Enter a Average Route Duration: ";
	route.AverageRouteDuration = ReadingCorrectSize();
	while (true)
	{
		cout << "Enter a Number Stops: ";
		route.NumberStops = ReadingCorrectSize();
		if (route.NumberStops <= 10)
		{
			break;
		}
		cout << "\nYou mistakes. Try again";
		cout << "\nThe Number Stops should be in the range of 1-10\n";
	}
	for (int i = 1; i <= route.NumberStops; i++)
	{
		cout << "Enter a Name Stop: ";
		cin >> route.NameStop[i];
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
}


void WriteRouteFromConsole(Route& route)
{
	for (int i = 1; i <= route.NumberStops; i++)
	{
		if (i != route.NumberStops)
		{
			cout << route.NameStop[i] << ", ";
		}
		else
		{
			cout << route.NameStop[i] << " - Number: ";
		}
	}
	cout << route.RouteNumber << ". Frequency: ";
	cout << route.RouteFrequency << " minutes. Average Route Duration: ";
	cout << route.AverageRouteDuration << " minutes.\n";
}

int FindRouteTo(Route* route, int stopsCount, string nameStop)
{
	for (int i = 1; i <= stopsCount; i++)
	{
		for (int j = 1; j <= route[i].NumberStops; j++)
		{
			if (route[i].NameStop[j] == nameStop)
			{
				return i;
			}
		}
	}
	return -1;
}

void DemoRoute()
{
	Route route[5];
	int countRoutes;
	while (true)
	{
		cout << "Enter a count of route: ";
		countRoutes = ReadingCorrectSize();
		if (countRoutes <= 5)
		{
			break;
		}
		cout << "\nYou mistakes. Try again";
		cout << "\nThe number of route should be in the range of 1-5\n";
	}
	for (int i = 1; i <= countRoutes; i++)
	{
		ReadRouteFromConsole(route[i]);
		cout << endl << endl;
	}
	for (int i = 1; i <= countRoutes; i++)
	{
		WriteRouteFromConsole(route[i]);
		cout << endl << endl;
	}
	cout << "\nEnter the Name Stop to search for the stop: ";
	string nameStop;
	cin >> nameStop;
	if (FindRouteTo(route, countRoutes, nameStop) != -1)
	{
		cout << "\nStop's name:\n";
		WriteRouteFromConsole(route[FindRouteTo(route, countRoutes, nameStop)]);
	}
	else
	{
		cout << "\nThere is no stop's name with this title\n";
	}
}
