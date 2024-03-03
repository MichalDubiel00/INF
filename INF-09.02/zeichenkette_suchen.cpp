#include "zeichenkette_suchen.h"

int zeichenkette_suchen(const char* text, const char* zkette)
{
	int back = 0;

	bool found = false;
	if (zkette[0]=='\0' || text[0] == '\0')
	{
		return -1;
	}
	int i = 0, j = 0;
	while (text[j] != '\0' && zkette[i] != '\0') // läuft so lange zkette oder text lexber ist.
	{
		if (zkette[i] != text[j]) //chect ob die zkette ungleich den texxt ist und resettet die zkette und bewegt sich um 1 nach recht an den text
		{
			j++;
			i = 0;
			back = j;

		}
		else //sonst vershiebt es sich bei beiden links
		{
			i++; 
			j++;
		}
	
	}
	if (zkette[i] == '\0')
		return back;
	else
		return -1;
}
