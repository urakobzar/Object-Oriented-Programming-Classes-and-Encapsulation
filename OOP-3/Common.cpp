#include <iostream>

using namespace std;


double ReadingCorrectValue()
{
	double value;
	while (true)
	{
		if (cin >> value)
		{
			break;
		}
		cout << "Unfortunately, you made a mistake\n";
		cout << "(The input value must be an integer)\n";
		cout << "Enter again: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return value;
}


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