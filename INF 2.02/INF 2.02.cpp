// INF 2.02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	double meter;
	cout << "Bitte geben Sie die Laenge in Metern ein : ?" ;
	cin >> meter;
	cout << "Die Laenge in Fuss lautet:" << meter * 3.2808 << endl;
	system("PAUSE");
	return 0;
}

