// Freiwillige Offline-Aufgabe O 04-06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string text;
	string newtext;
	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, text);
	cout << "Eingabetext: " << text << endl;
	
	for (int i = text.length()-1; i >= 0; i--)
	{
		newtext += text[i];
	}
	cout << "Ergebnis: "<<newtext<<endl;
	return 0;
}