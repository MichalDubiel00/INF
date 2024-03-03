// Pflicht-Offline-Aufgabe O 04-12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string text, newtext;

	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, text);

	for (int i = 0; i < text.length(); i++)
	{
		if (isupper(text[i])) { newtext += string(3, text[i]); }
		else if (islower(text[i])) { newtext += string(2, text[i]); }
		else if (isspace(text[i])) { newtext += '_'; }
		else if (isdigit(text[i])) { newtext += '.'; }
		else if (text[i] == '!' || text[i] == '?') {}
		else { newtext += text[i]; }
	}
	cout << "Der Text nach der Umwandlung: " << newtext << endl;
}