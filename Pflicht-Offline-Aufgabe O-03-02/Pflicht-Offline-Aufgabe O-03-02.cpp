// Pflicht-Offline-Aufgabe O-03-02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	char c;
	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> c;
	c = toupper(c);
	if (c == 'J')
	{
		cout << "Es handelt sich um eine Ja Eingabe." << endl;
		return 0;
	}
	else if (c == 'N')
	{
		cout << "Es handelt sich um eine Nein Eingabe." << endl;
		return 0;
	}
	else
	{
		cout << "Es handelt sich um eine sonstige Eingabe." << endl;
	}
}