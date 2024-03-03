// Freiwillige Offline-Aufgabe O 03-07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define
using namespace std;

int main()
{
	int num[4];
	int count[2] = { 0,0 };

	for (int i = 0; i < 4; i++)
	{
		cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
		cin >> num[i];
		if (num[i] == 99) { count[0]++; }
		if (num[i] != 99) { count[1]++; }
	}
	cout << count[0] << " Eingabezahlen waren gleich der Vergleichszahl 99." << endl;
	cout << count[1] << " Eingabezahlen waren ungleich der Vergleichszahl 99." << endl;
	return 0;
}