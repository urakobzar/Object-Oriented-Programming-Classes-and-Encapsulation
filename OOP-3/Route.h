#pragma once
#include <iostream>
#include <string>
#include "Common.h"

using namespace std;

struct Route
{
	int RouteNumber;
	int	AverageRouteDuration;
	int	RouteFrequency;
	string NameStop[10];
	int NumberStops;
};



void ReadRouteFromConsole(Route& route);


void WriteRouteFromConsole(Route& route);


int FindRouteTo(Route* route, int stopsCount, string nameStop);


void DemoRoute();
