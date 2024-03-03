// O 06-01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


void spalte_ab_erstem(char zeichen,	string eingabe,	string& erster_teil,string& zweiter_teil)
{
	int split = 0;
	for (int i = 0; i < eingabe.length(); i++)
	{
		if (eingabe[i] == zeichen) { split = i; break; }
		else split = eingabe.length();

	}
	for (int i = 0; i < split; i++)
	{
		erster_teil += eingabe[i];
	}
	for (int i = split+1; i < eingabe.length(); i++)
	{
		zweiter_teil += eingabe[i];
	}
}
int main()
{
	string erster_teil, zweiter_teil,eingabe;
	char c = ' ';
    std::cout << "Bitte geben Sie die einzeilige Zeichenkette ein: ? ";
	getline(cin, eingabe);
	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> c;
	spalte_ab_erstem(c,eingabe,erster_teil,zweiter_teil);
	cout << "Der erste Teil der Zeichenkette lautet: " << erster_teil << endl;
	cout << "Der zweite Teil der Zeichenkette lautet: " << zweiter_teil << endl;
	return 0;
}

