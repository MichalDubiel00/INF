// Freiwillige Offline-Aufgabe O 04-08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string text;
	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, text);
	cout << "Eingabetext: " << text << endl;
	cout << "Ergebnis: ";
	for (int i = text.length()-1; i >= 0; i--)
	{
		cout << text[i];
	}
	cout << "\n";
	return 0;
}