// Freiwillige Offline-Aufgabe O-03-04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int hour;

	cout << "Bitte geben Sie die Stunde der aktuellen Uhrzeit ein: ? ";
	cin >> hour;
	if (hour == 23 || (hour >= 0 && hour <= 5))
	{
		cout << "Gute Nacht." << endl;
	}
	else if (hour > 5 && hour < 11)
	{
		cout << "Guten Morgen." << endl;
	}
	else if (hour > 10 && hour < 14)
	{
		cout << "Mahlzeit." << endl;
	}
	else if (hour > 13 && hour < 18)
	{
		cout << "Guten Tag." << endl;
	}
	else if (hour > 17 && hour < 23)
	{
		cout << "Guten Abend." << endl;
	}
	else
	{
		cout << "Keine erlaubte Stundenangabe." << endl;
	}
	return 0;
}