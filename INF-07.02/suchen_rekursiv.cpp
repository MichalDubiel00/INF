#include "suchen_rekursiv.h"
#include <iostream>

int zeichenkette_suchen_rekursiv(std::string text, std::string zkette, unsigned int text_pos, unsigned int text_such_pos, unsigned int zkette_such_pos)
{
	if (zkette.length()>text.length() || zkette == "" || text == "" )
	{
		return -1;
	}
	if (zkette_such_pos == zkette.length())
	{
		return text_pos;
	}
	if (text.length() == text_pos)
	{
		return -1;
	}

	if (text[text_such_pos] == zkette[zkette_such_pos])
	{
		//text_such_pos++;
		//zkette_such_pos++;
		return zeichenkette_suchen_rekursiv(text, zkette, text_pos, text_such_pos+=1, zkette_such_pos+=1 );

	}
	else
	{
		//text_pos++;
		//text_such_pos = text_pos;
		//zkette_such_pos = 0;
		return zeichenkette_suchen_rekursiv(text, zkette, text_pos += 1, text_such_pos = text_pos + 1, zkette_such_pos = 0);

	}
}	

