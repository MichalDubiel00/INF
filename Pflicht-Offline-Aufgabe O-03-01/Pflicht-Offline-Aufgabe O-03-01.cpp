// Pflicht-Offline-Aufgabe O-03-01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	char c;

	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> c;
	if (c >= 97 && c <= 122)
	{
		cout << "Es wurde ein Kleinbuchstabe (a-z) eingegeben." << endl;
		return 0;
	}
	cout << "KEIN Kleinbuchstabe (a-z)." << endl;
	return 0;
}