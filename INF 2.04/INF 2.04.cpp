// INF 2.04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	double flNumber, result;
	double chNumber;

	cout << "Ihre Eingabe: ?";
	cin >> flNumber;
	cout << "Ihre Auswahl der Umwandlung:\n1 - Celsius in Fahrenheit\n2 - Meter in Fuss\n3 - Euro in US Dollar" << endl;
	cin >> chNumber;

	//test for wrong input
	if (chNumber > 3 || chNumber < +0) {
		cerr << "eine zahl zwischen 1-3 geben";
		system("PAUSE");
		return -1;
	}

	double fahr = (chNumber - 2) * (chNumber - 3) * (flNumber * 1.8 + 32) * 0.5;	//case 1 Celsius in Fahrenheit
	double feet = (chNumber - 1) * (3 - chNumber) * (flNumber * 3.2808); 			//case 2 Meter in Fu�
	double dollar = (chNumber - 1) * (chNumber - 2) * (flNumber * 1.2957) * 0.5;	//case 3 Euro in Dollar

	result = fahr + feet + dollar;

	cout << "Das Ergebnis lautet:" << result << endl;

	//system("PAUSE");
	return 0;
}