#include "Building.h"


string Building::GetAddress()
{
	return this->_address;
}

Place* Building::GetPlaces()
{
	return this->_places;
}

int Building::GetPlacesCount()
{
	return this->_placesCount;
}

void Building::SetAddress(string address)
{
	this->_address = address;
}

void Building::SetPlaces(Place* places)
{
	this->_places = places;
}

void Building::SetPlacesCount(int placesCount)
{
	if (placesCount < 0)
	{
		throw exception("The number of establishments must be non - negative");
	}
	this->_placesCount = placesCount;
}

Building::Building(string address, Place* places, int placesCount)
{
	this->SetAddress(address);
	this->SetPlaces(places);
	this->SetPlacesCount(placesCount);
}

Building::Building()
{

}