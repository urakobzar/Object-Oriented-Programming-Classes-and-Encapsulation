#pragma once
#include <iostream>
#include <string>
#include "Place.h"
using namespace std;


class Building
{
private:
	string _address;
	Place* _places;
	int _placesCount;

public:
	string GetAddress();

	Place* GetPlaces();

	int GetPlacesCount();

	void SetAddress(string address);

	void SetPlaces(Place* places);

	void SetPlacesCount(int placesCount);

	Building(string address, Place* places, int placesCount);

	Building();
};