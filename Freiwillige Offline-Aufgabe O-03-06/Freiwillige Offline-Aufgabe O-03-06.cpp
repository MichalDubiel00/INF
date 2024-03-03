// Freiwillige Offline-Aufgabe O-03-06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int zahl[3];
	int small[2] = { INT16_MAX,0 };
	int big[2] = { INT16_MIN,0 };

	for (int i = 0; i < 3; i++)
	{
		cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
		cin >> zahl[i];
		if (zahl[i] >= big[0]) {
			big[0] = zahl[i];
			if (zahl[i] != big[0]) { big[1] = i; }
		}
		if (zahl[i] <= small[0]) {
			small[0] = zahl[i];
			if (zahl[i] != small[0]) { small[1] = i; }
		}
	}
	cout << "Die kleinste eingegebene Zahl lautet: " << small[0] << endl;
	cout << "Die groesste eingegebene Zahl lautet: " << big[0] << endl;
	return 0;
}