#include "Person.h"

Person extrahiere_person(std::string eingabezeile)
{
	Person p; std::string rest = "";
	spalte_ab_erstem(',', eingabezeile, p.surname, rest);
	spalte_ab_erstem(',', rest, p.name, p.birthday);
	p.surname = trimme(p.surname);
	p.name = trimme(p.name);
	p.birthday = trimme(p.birthday);
	return p;
}
std::string trimme(std::string s)
{
	std::string new_str;
	int start = 0, end = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != ' ')
		{
			start = i;
			break;
		}
	}
	for (int i = s.length() - 1; i > 0; i--)
	{
		if (s[i] != ' ')
		{
			end = i + 1;
			break;
		}
	}
	for (start; start < end; start++)
	{
		new_str += s[start];
	}
	return new_str;
}

void spalte_ab_erstem(char zeichen, std::string eingabe, std::string& erster_teil, std::string& zweiter_teil)
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
	for (int i = split + 1; i < eingabe.length(); i++)
	{
		zweiter_teil += eingabe[i];
	}
}

std::string ersetze(std::string zeile,
	char zu_ersetzendes_zeichen,
	std::string ersatztext)
{
	std::string n_str;
	for (int i = 0; i < zeile.length(); i++)
	{
		if (zeile[i] != zu_ersetzendes_zeichen)
		{
			n_str += zeile[i];
		}
		else
		{
			n_str += ersatztext;
		}

	}
	return n_str;
}
