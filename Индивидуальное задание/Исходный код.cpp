#include <iostream>
#include <string>
#include "Building.h"
#include "Comment.h"
#include "Place.h"
using namespace std;


int ReadingCorrectSize()
{
	int size;
	while (true)
	{
		cin >> size;
		if (size <= 0)
		{
			cout << "Unfortunately, you made a mistake\n";
			cout << "(The initial number must be an integer";
			cout << " greater than 0)\n";
			cout << "Enter again: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
			break;
		}
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return size;
}


int main()
{
	string name;
	string author;
	string text;
	int rate;
	Place* places = new Place[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "\nEnter a name [" << i + 1 << "] of place: ";
		cin >> name;
		places[i].SetName(name);
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		places[i].SetCommentsCount(3);
		Comment* comments = new Comment[3];
		{
			for (int j = 0; j < 3; j++)
			{
				cout << "\nEnter a author [" << j + 1 << "] of comment: ";
				cin >> author;
				comments[j].SetAuthor(author);
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "\nEnter a text [" << j + 1 << "] of comment: ";
				cin >> text;
				comments[j].SetText(text);
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "\nEnter a rate [" << j + 1 << "] of comment: ";
				rate = ReadingCorrectSize();
				comments[j].SetRate(rate);
			}
		}
		places[i].SetComments(comments);
	}
	Building building;
	string address;
	cout << "\nEnter a address: ";
	cin >> address;
	building.SetAddress(address);
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	building.SetPlaces(places);
	building.SetPlacesCount(5);
	for (int i = 0; i < 5; i++)
	{
		cout << "\nPlace [" << i + 1 << "]: " << building.GetPlaces()[i].GetName();
		for (int j = 0; j < 3; j++)
		{
			cout << "\n\n\nComment [" << j + 1 << "]: \n";
			cout << "\nAuthor: ";
			cout << building.GetPlaces()[i].GetComment()[j].GetAuthor();
			cout << "\nText: ";
			cout << building.GetPlaces()[i].GetComment()[j].GetText();
		}
	}
	cout << endl;
	system("PAUSE");
	return 0;
}