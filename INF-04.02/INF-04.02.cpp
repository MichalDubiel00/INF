// INF-04.02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int min = 0, h = 0, t_min = 0, end_l;
	do
	{
		h = 0;
		cout << "Bitte geben Sie die Stunden der Startuhrzeit ein: ";
		cin >> h;
	} while (h < 0 || h>23);

	do
	{
		min = 0;
		cout << "Bitte geben Sie die Minuten der Startuhrzeit ein: ";
		cin >> min;
	} while (min < 0 || min >= 60);

	cout << "Der erste Bus faehrt also um " << setfill('0') << setw(2) << h << ':' << setfill('0') << setw(2) << min << "Uhr." << endl;

	do
	{
		t_min = 0;
		cout << "Bitte geben Sie die Taktzeit in Minuten ein : ";
		cin >> t_min;
	} while (t_min < 0 || t_min >= 180);

	while (h < 24)
	{
		end_l = 0;
		cout << setfill('0') << setw(2) << h << ':' << setfill('0') << setw(2) << min << ' ';
		min += t_min;
		while (min > 59)
		{
			h++;
			min -= 60;
			end_l++;
		}
		if (end_l > 0) { cout << '\n'; }
	}
}