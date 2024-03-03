// O 05-08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

string ersetze(string zeile,
	char zu_ersetzendes_zeichen,
	string ersatztext)
{
	string n_str;
	for (int i = 0; i < zeile.length(); i++)
	{
		if (zeile[i] != zu_ersetzendes_zeichen)
		{
			n_str += zeile[i];
		}
		else 
		{
			n_str += ersatztext;
		}

	}
	return n_str;
}

int main()
{
	string s1 = "", s2 = "";
	char c;
	cout << "Bitte geben Sie die Textzeile ein: ? ";
	getline(cin, s1);
	cout << "Bitte geben Sie das zu ersetzende Zeichen ein: ? ";
	cin >> c;
	cin.ignore();
	cout << "Bitte geben Sie den einzusetzenden Text ein: ? ";
	getline(cin, s2);
	cout << "Ergebnis: " << ersetze(s1, c, s2) << endl;
	system("PAUSE");
	return 0;
}