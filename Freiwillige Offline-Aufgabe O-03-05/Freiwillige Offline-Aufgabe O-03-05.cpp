// Freiwillige Offline-Aufgabe O-03-05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word;
	string test;
	int j = 5;
	int i = 0;

	std::cout << "Bitte geben Sie die Zeichenkette (6 Zeichen) ein: ? ";
	cin >> word;
	j = word.length() - 1;
	while (i < word.length())
	{
		if (word[i] != word[j])
		{
			cout << "Das eingegebene Wort ist KEIN Palindrom." << endl;
			return 0;
		}
		i++;
		j--;
	}

	cout << "Das eingegebene Wort ist ein Palindrom." << endl;
	return 0;
}