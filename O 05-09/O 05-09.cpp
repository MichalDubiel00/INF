// O 05-09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

string trimme(string s)
{
	string new_str;
	int ite = 0,jte = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != '+')
		{
			ite = i;
			break;
		}
	}
	for (int i = s.length()-1; i > 0; i--)
	{
		if (s[i] != '+')
		{
			jte = i+1;
			break;
		}
	}
	for (ite; ite < jte; ite++)
	{
		new_str += s[ite];
	}
	return new_str;
}

int main()
{
	string s = "";
	cout << "Bitte geben Sie die Textzeile ein: ? ";
	getline(cin, s);
	cout << "Vorher: " << s << endl;
	cout << "Nachher: " << trimme(s) << endl;
	system("PAUSE");
	return 0;
}