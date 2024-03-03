// O 07-05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct T_Morse_Data
{
	char letter;
	std::string morse_code;
};
const T_Morse_Data morse_data[] = {
{ 'a', ".-" },
{ 'b', "-..." },
{ 'c', "-.-." },
{ 'd', "-.." },
{ 'e', "." },
{ 'f', "..-." },
{ 'g', "--." },
{ 'h', "...." },
{ 'i', ".." },
{ 'j', ".---" },
{ 'k', "-.-" },
{ 'l', ".-.." },
{ 'm', "--" },
{ 'n', "-." },
{ 'o', "---" },
{ 'p', ".--." },
{ 'q', "--.-" },
{ 'r', ".-." },
{ 's', "..." },
{ 't', "-" },
{ 'u', "..-" },
{ 'v', "...-" },
{ 'w', ".--" },
{ 'x', "-..-" },
{ 'y', "-.--" },
{ 'z', "--.." },
{ '0', "-----" },
{ '1', ".----" },
{ '2', "..---" },
{ '3', "...--" },
{ '4', "....-" },
{ '5', "....." },
{ '6', "-...." },
{ '7', "--..." },
{ '8', "---.." },
{ '9', "----." },
// Leerzeichen zur Worttrennung werden im Morsecode
// durch einen Slash '/' umgeben von Leerzeichen
// dargestellt ...
// (Alternative: Trennung durch 3 Leerzeichen)
// Hier bei uns, um die Testläufe eindeutiger zu
// machen: Trennung mittels drei Slashes
{ ' ', "///" },
{ '.', ".-.-.-" },
{ ',', "--..--" },
{ ':', "---..." },
{ '?', "..--.." },
{ '-', "-....-" },
{ '/', "-..-." },
{ '@', ".--.-." },
{ '=', "-...-" }
};
const int morse_data_len = 45;

int main()
{
	string text;

	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, text);
	for (int i = 0; i < text.length(); i++)
	{
		
		for (int j = 0; j < morse_data_len; j++)
		{
			if (tolower(text[i])==morse_data[j].letter)
			{
				cout << morse_data[j].morse_code << '#';
			}
		}
	}
	cout << '\n';
	system("PAUSE");
	return 0;
}
