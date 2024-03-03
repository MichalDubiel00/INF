#include <iostream>

using namespace std;

int main()
{
	int num[4], search = 0,c_search=0;
	for (int i = 0; i < 4; i++)
	{		
			cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
			cin >> num[i];

	}
	cout << "Bitte geben Sie die Vergleichszahl ein: ? ";
	cin >> search;

	for (int i = 0; i < 4; i++)
	{
		if (num[i] == search)
		{
			c_search++;
		}

	}
	cout <<c_search <<" Eingabezahlen waren gleich der Vergleichszahl." << endl;
	cout <<4-c_search << " Eingabezahlen waren ungleich der Vergleichszahl." << endl;


	return 0;
}