// O 07-02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string text[4];
	string word = "";
	int x =0, count = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << "Eingabezeile = ? ";
		getline(cin, text[i]);
		if (text[i].empty()) { break; }
		count++;
	}
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < text[i].length(); j++)
		{
			if (j>0)
			{
				 x = 1;
			}
			if (isspace(text[i][j]) == false)
			{
				word += text[i][j];
			}
			
			if (isspace(text[i][j]) && (isspace(text[i][j-x])) == false|| j == text[i].length()-1)
			{
				cout << word << endl;
				word = "";
			}
			
		}
		x = 0;

	}
	system("PAUSE");
	return 0;
}

