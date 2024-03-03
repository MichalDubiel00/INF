// Freiwillige Offline-Aufgabe O 04-03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int height = 2, width = 2;
	cout << "Bitte geben Sie die Breite des Rechtecks ein: ? ";
	cin >> width;
	cout << "Bitte geben Sie die Hoehe des Rechtecks ein: ? ";
	cin >> height;
	for (int i = 0; i < height; i++)
	{
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
			for (int j = 0; j < width; j++)
			{
				if (j == 0)
				{
					cout << '*';
				}
				else if (j != 0 && j != width - 1)
				{
					cout << '+';
				}
				else if (j == width - 1)
				{
					cout << '*' << endl;
				}
			}
		}
	}

}