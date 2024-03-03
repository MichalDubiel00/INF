// INF-03.01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int day1 = 0, month1 = 0, year1 = 0, day2 = 0, month2 = 0, year2 = 0;

	cout << "Bitte geben Sie den Tag des ersten Datums ein:";
	cin >> day1;
	//test for wrong input
	if (day1 <= 0 || day1 > 31)
	{
		cerr << "geben sie eine gueltige zahl" << endl;
		return -1;
	}
	cout << "Bitte geben Sie den Monat des ersten Datums ein:";
	cin >> month1;
	//test for wrong input
	if (month1 <= 0 || month1 > 12)
	{
		cerr << "geben sie eine gueltige zahl" << endl;
		return -1;
	}
	cout << "Bitte geben Sie das Jahr des ersten Datums ein:";
	cin >> year1;
	cout << "Bitte geben Sie den Tag des zweiten Datums ein:";
	cin >> day2;
	//test for wrong input
	if (day2 <= 0 || day2 > 31)
	{
		cerr << "geben sie eine gueltige zahl" << endl;
		return -1;
	}
	cout << "Bitte geben Sie den Monat des zweiten Datums ein:";
	cin >> month2;
	//test for wrong input
	if (month2 <= 0 || month2 > 12)
	{
		cerr << "geben sie eine gueltige zahl" << endl;
		return -1;
	}
	cout << "Bitte geben Sie das Jahr des zweiten Datums ein:";
	cin >> year2;

	if (year1 == year2 && month1 == month2 && day1 == day2)
	{
		cout << "Beide Datumsangaben sind gleich." << endl;
		return 0;
	}
	else if (year1 < year2 || (year1 == year2 && month1 < month2) || (year1 == year2 && month1 == month2 && day1 < day2))
	{
		cout << "Das erste Datum liegt vor dem zweiten Datum." << endl;
		return 0;
	}
	else
	{
		cout << "Das zweite Datum liegt vor dem ersten Datum." << endl;
		return 0;
	}
	cerr << "Falsche eingabe" << endl;
	return -1;
}