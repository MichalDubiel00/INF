// INF-03.02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int num; 
	int small[2] = { INT16_MAX,0 }; // small[0] == smallest number small[1] == order of the smallest number
	int big[2] = { INT16_MIN,0 }; // big[0] == bigest number big[1] == order of the biggest number

	for (int i = 0; i < 10; i++)
	{
		cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein:";
		cin >> num;

		if (num > big[0]) { // check for biggest number
			big[0] = num;
			big[1] = i;
		}

		if (num < small[0]) { // check for smallest number
			small[0] = num;
			small[1] = i;
		}
	}

	cout << "Die " << small[1] + 1 << ". Zahl war die kleinste der eingegebenen Zahlen und lautet:" << small[0] << endl;
	cout << "Die " << big[1] + 1 << ". Zahl war die groesste der eingegebenen Zahlen und lautet:" << big[0] << endl;
	return 0;
}