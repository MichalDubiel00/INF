 // INF-04.01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string text,crypto;
	unsigned int v = 0;
    std::cout << "Bitte geben Sie den zu verschluesselnden Text ein:";
	getline(cin, text);
	cout << "Bitte geben Sie die Anzahl Verschiebepositionen ein (als positive ganze Zahl): ";
	cin >> v;
	while (v>26)
	{
		v -= 26;
	}
	for (int i = 0; i < text.length(); i++)
	{
		
		if (isalpha(text[i])) {
			if (text[i] + v > 'z' && text[i] <= 'z' || text[i] + v > 'Z' && text[i] <= 'Z'  ) { crypto += (text[i] + v) - 26; }
			else { crypto += (text[i] + v); }
		}
		else crypto += text[i];
	}
	cout << crypto << endl;
	return 0;

}
