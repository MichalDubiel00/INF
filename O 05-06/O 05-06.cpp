// INF-03.02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int num[5];
	int small[2] = { INT16_MAX,0 }; // small[0] == smallest number small[1] == order of the smallest number
	int big[2] = { INT16_MIN,0 }; // big[0] == bigest number big[1] == order of the biggest number

	for (int i = 0; i < 5; i++)
	{
		cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
		cin >> num[i];

		if (num[i] > big[0]) { // check for biggest number
			big[0] = num[i];
			big[1] = i;
		}

		if (num[i] < small[0]) { // check for smallest number
			small[0] = num[i];
			small[1] = i;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "Die " << i + 1 << ". eingegebene Zahl lautete: " << num[i] << endl;
	}

	cout << "Die kleinste eingegebene Zahl lautete: " << small[0] << endl;
	cout << "Die groesste eingegebene Zahl lautete: "<< big[0] << endl;
	return 0;
}