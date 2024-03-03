#include "bildschirm.h"
#include <iostream>

using namespace std;


void ausgabe(std::string text, int pos)
{
	string space(pos, ' ');
	cout << text << endl;
	cout << space << '*' << endl;
}

char eingabe()
{
	char c;
	cin >> c;
	return c;
}
