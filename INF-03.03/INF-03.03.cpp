// INF-03.03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	char z1 = 0, z2 = 0;

	cout << "Bitte geben Sie die erste Ziffer ein: ? ";
	cin >> z1;

	cout << "Bitte geben Sie die zweite Ziffer ein: ? ";
	cin >> z2;
	if (z1 == 'q' || z2 == 'q')
	{
		cerr << "Das Programm wurde durch Eingabe von q beendet." << endl;
		return -1;
	}
	cout << z1 - 48 << '+' << z2 - 48 << '=' << z1 + z2 - 96;
}