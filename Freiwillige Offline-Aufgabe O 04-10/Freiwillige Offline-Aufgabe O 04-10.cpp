// Freiwillige Offline-Aufgabe O 04-10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string text;
	string c = "\n";
	int count = 0;

	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, text);
	cout << "Bitte Buchstaben eingeben: ? ";
	getline(cin, c);
	for (int i = text.length()-1; i >= 0; i--)
	{
		if (text[i] == c[0]) { count++; }
	}
	cout << "Der Buchstabe " << c << " kommt " << count << " mal im Text vor." << endl;
	return 0;
}