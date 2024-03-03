// Freiwillige Offline-Aufgabe O 04-09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string text;
	char letter;
	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, text);
	cout << "Bitte Buchstaben eingeben: ? ";
	cin >> letter;
	for (int i = text.length(); i >= 0; i--)
	{
		if (text[i] == letter)
		{
			cout << "Der Buchstabe " << letter << " kommt im Text vor, an Position " << i << '.' << endl;
			return 0;
		}
	}
	cout << "Der Buchstabe " << letter << " kommt nicht im Text vor." << endl;
	return 0;
}