// Freiwillige Offline-Aufgabe O-03-03,.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	char c = 0;

	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> c;
	if (c == 'e')
	{
		cout << "Das Programm beendet sich jetzt." << endl;
		return 0;
	}
	else if (c >= '0' && c <= '9')
	{
		cout << c << " + 5 = " << c - 43 << endl;
		return 0;
	}
	else
	{
		cout << "Weder 'e' noch Ziffer" << endl;
		return 0;
	}
}