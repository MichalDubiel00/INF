// Pflicht-Offline-Aufgabe O 04-04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int height = 2, width = 2, dot_num = 0;

	cout << "Bitte geben Sie die Breite des Parallelogramms ein: ? ";
	cin >> width;
	cout << "Bitte geben Sie die Hoehe des Parallelogramms ein: ? ";
	cin >> height;
	for (int i = 0; i < height; i++, dot_num++)
	{
		string dot(dot_num, '.');
		cout << dot;
		if (i == 0 || i == height - 1)
		{
			for (int j = 0; j < width; j++)
			{
				cout << '*';
			}
			cout << "\n";
		}
		else
		{
			cout << '*';

			for (int j = 0; j < width - 1; j++)
			{
				if (j != 0 && j != width - 1)
				{
					cout << '+';
				}
			}
			cout << "*\n";
		}
	}
	cout << "\n";
	system("PAUSE");
	return 0;
}