// Freiwillige Offline-Aufgabe O 04-11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string text;
	char swap, swaper;
	int count = 0;

	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, text);
	cout << "Bitte den zu ersetzenden Buchstaben eingeben: ? ";
	cin >> swap;
	cout << "Bitte den Ersatz-Buchstaben eingeben: ? ";
	cin >> swaper;
	for (int i = text.length(); i >= 0; i--)
	{
		if (text[i] == swap) { text[i] = swaper; }
	}
	cout << "Der Text nach der Ersetzung: " << text << endl;
	return 0;
}