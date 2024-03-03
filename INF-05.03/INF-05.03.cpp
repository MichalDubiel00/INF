// INF-05.03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>

#define Max_RAND 6000

using namespace std;
 
int main()
{
	srand(time(NULL));

	int count[6] = { 0 };
	for (int i = 0; i < Max_RAND; i++)
	{
		int zufallszahl = rand() % 6 + 1;
		for (int j = 1; j < 7; j++)
		{
			if (j == zufallszahl) { count[j-1]++; }
		}
	}
	for (int i = 1; i < 7; i++)
	{
		cout << "Anzahl " << i << "-er Wuerfe: " << count[i-1]<<endl;
	}
	return 0;
}
