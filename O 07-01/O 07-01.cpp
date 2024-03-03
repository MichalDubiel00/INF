// O 07-01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string text[4];
	int longest = 0, count = 0;
	for (int i = 0; i < 4; i++)
	{
		cout << "Textzeile = ? ";
		getline(cin,text[i]);
		if (text[i].empty()) { break; }
		count++;
	}
	for (int i = 0; i < count; i++)
	{
		if (text[i].length() > longest)
		{
			longest = text[i].length();
		}
	}
	for (int i = 0; i < count; i++)
	{
		for (int j = text[i].length(); j < longest; j++)
		{
			cout << "#";
		}
		cout << text[i] << endl;
	}
}
