// Pflicht-Offline-Aufgabe O 04-07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word;
	int j = 0, i = 0, k = 0, count = 0;

	do{
		std::cout << "Text: ? ";
		getline(cin, word);
		for (int i = 0; i < word.length(); i++)
		{
			if ((isspace(word[i]) || isupper(word[i]) || isalpha(word[i]) == false))
			{
				count++;
			}
		}
	} while (count == 0);
	
	j = word.length() - 1;
	while (k < word.length())
	{
		if (word[k] != word[j])
		{
			cout << "Das eingegebene Wort ist KEIN Palindrom." << endl;
			return 0;
		}
		k++;
		j--;
	}

	cout << "Das eingegebene Wort ist ein Palindrom." << endl;
	return 0;
}