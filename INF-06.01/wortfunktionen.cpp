#include "wortfunktionen.h"
#include <string>
#include <iostream>

using namespace std;

void wortspiegel(std::string& text, int pos)
{
	string temp;
	int word_end = 0, word_start = 0;
	for (int i = pos; i < text.length(); i++)
	{
	
		if (isspace(text[i])||text[i]=='.'){
			word_end = i-1;
			break;
		}
		else
		{
			word_end = text.length()-1;
		}
	}
	for (int i = pos; i > 0; i--)
	{
		if (isspace(text[i]) || text[i] == '.') {
			word_start = i+1;
			break;
		}
		else
		{
			word_start = 0;
		}
	}
	for (int i = word_end; i > word_start-1; i--)
	{
		temp += text[i];
	}
	for (int i = 0; i < temp.length(); i++)
	{
		text[i + word_start] = temp[i];
	}
}
