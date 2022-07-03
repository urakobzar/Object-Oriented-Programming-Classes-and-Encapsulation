#include <iostream>
#include "Common.h"
#include "Book.h"
#include "Route.h"
#include "Rectangle.h"
#include "Flight.h"
#include "Band.h"

using namespace std;


enum MaimMenu
{
	FirstTask = 1,
	SecondTask = 2,
	ThirdTask = 3,
	FourthTask = 4,
	FifthTask = 5,
	Exit = 6
};

int main()
{
	while (true)
	{
		cout << "\n\n\t||MAIN MENU||\n\n";
		cout << "\nPlease enter a number between 1 and 6: \n";
		cout << "\nLoad DemoBook: 1";
		cout << "\nLoad DemoRoute: 2";
		cout << "\nLoad DemoRectangleWithPoint: 3";
		cout << "\nLoad DemoFlightWithTime: 4";
		cout << "\nLoad DemoBand: 5";
		cout << "\nExit program: 6";
		cout << "\nMake your choice: ";
		int menuNumber = ReadingCorrectSize();
		cout << endl << endl << endl;
		switch (menuNumber)
		{
		case FirstTask:
		{
			cout << "\n\nDemoBook\n";
			DemoBook();
			break;
		}
		case SecondTask:
		{
			cout << "\n\nDemoRoute\n";
			DemoRoute();
			break;
		}
		case ThirdTask:
		{
			cout << "\n\nDemoRectangleWithPoint\n";
			Rectangle rectangle;
			rectangle.DemoRectangleWithPoint();
			break;
		}
		case FourthTask:
		{
			cout << "\n\nDemoFlightWithTime\n";
			Flight flight;
			flight.DemoFlightWithTime();
			break;
		}
		case FifthTask:
		{
			cout << "\n\nDemoBand\n";
			Band band;
			band.DemoBand();
			break;
		}
		case Exit:
		{
			cout << endl;
			system("pause");
			return 0;
		}
		default:
		{
			cout << "You made a mistake. Try again";
			break;
		}
		}
	}
}