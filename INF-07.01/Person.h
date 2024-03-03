#pragma once
#include <iostream>
#include <string>
#include <fstream>


struct Person
{
	std::string surname, name,birthday;
};

Person extrahiere_person(std::string eingabezeile);
std::string trimme(std::string s);
void spalte_ab_erstem(char zeichen, std::string eingabe, std::string& erster_teil, std::string& zweiter_teil);
std::string ersetze(std::string zeile, char zu_ersetzendes_zeichen, std::string ersatztext);

