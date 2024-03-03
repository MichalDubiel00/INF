// INF-05.01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#define MAX_X 5
#define MAX_Y 9


using namespace std;

int main()
{
	int num[MAX_X] = {0};
	//input
	for (int i = 0; i < MAX_X; i++)
	{	
		do
		{
			cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
			cin >> num[i];
		} while (num[i]>MAX_Y||num[i]<1);
	
		
	}
	//display
	for (int i = MAX_Y; i > 0; i--)
	{
		cout << i;
		for (int j = 0; j < MAX_X; j++) 
		{
			if (i == num[j]) { cout << '*'; }
			else  if (i < num[j]) { cout << '+'; }
			else cout << '.';
		}
		cout << endl;
	}
	cout << ' ';
	for (int i = 0; i < MAX_X; i++)
	{
		cout << i+1;
	}
	cout << '\n';

	return 0;
}
