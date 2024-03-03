// Freiwillige Offline-Aufgabe O 04-05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	string text;
	cout << "Bitte einzeiligen Text eingeben (ohne Leerzeichen): ? ";
	cin >> text;
	for (int i = 0; i < text.length(); i++)
	{
		cout << "Position: " << i << " Buchstabe: " << text[i] << endl;
	}
	return 0;
}