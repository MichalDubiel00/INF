// Datei: liste.cpp

#include <iostream>
#include <string>
#include "liste.h"

std::string liste_als_string(TListenKnoten* anker)
{
	std::string resultat = "";

	if (anker == nullptr)
		return "Leere Liste.";
	else
	{
		resultat += "[ ";
		TListenKnoten* ptr = anker;
		do
		{
			resultat += std::to_string(ptr->data);

			if (ptr->next != nullptr) resultat += " , ";
			else resultat += " ";

			ptr = ptr->next;
		} while (ptr != nullptr);
		resultat += "]";
	}

	return resultat;
}
std::string liste_als_string_rueckwaerts(TListenKnoten* anker)
{
	
	std::string resultat = "";
	
	if (anker == nullptr)
		return "Leere Liste.";
	else
	{
		TListenKnoten* ptr = anker;
		while (ptr->next != nullptr)
		{
			ptr = ptr->next;
		}
		resultat += "[ ";
		while (ptr)
		{
			resultat += std::to_string(ptr->data);

			if (ptr->prev != nullptr) resultat += " , ";
			else resultat += " ";
			ptr = ptr->prev;
		}
		resultat += "]";
	}
	
	return resultat;
}

void in_liste_einfuegen(TListenKnoten*& anker, int wert_neu, int vor_wert)
{
	TListenKnoten* neuer_eintrag = new TListenKnoten;
	neuer_eintrag->data = wert_neu;
	neuer_eintrag->next = nullptr;
	neuer_eintrag->prev = nullptr;


	if (!anker)
	{
		anker = neuer_eintrag;
	}

	else
	{
		TListenKnoten* ptr = anker;
		while (ptr->next && ptr->data != vor_wert)
		{
			ptr = ptr->next;
		}
		if (!ptr->next && ptr->data != vor_wert)
		{
			ptr->next = neuer_eintrag;
			neuer_eintrag->prev = ptr;
			return;
		}
		if (!ptr->prev)
		{
			anker = neuer_eintrag;
			neuer_eintrag->next = ptr;
			ptr->prev = neuer_eintrag;
			return;
		}
	
		neuer_eintrag->next = ptr;
		neuer_eintrag->prev = ptr->prev;
		ptr->prev = neuer_eintrag;
		ptr->prev->prev->next = neuer_eintrag;
	}
}
// Wird modifiziert in Aufgabe INF-08.01 ...
void hinten_anfuegen(TListenKnoten *&anker, const int wert)
{
	TListenKnoten *neuer_eintrag = new TListenKnoten;
	neuer_eintrag->data = wert;
	neuer_eintrag->next = nullptr;
	neuer_eintrag->prev = nullptr;

	if (!anker)
		anker = neuer_eintrag;
		
	else
	{
		TListenKnoten *ptr = anker;
		while (ptr->next != nullptr) {
			ptr = ptr->next;
		}
		ptr->next = neuer_eintrag;
		neuer_eintrag->prev = ptr;

	}
}
void aus_liste_loeschen(TListenKnoten*& anker, int wert)
{


	if (!anker)
	{
		return;
	}
	else
	{
		TListenKnoten* ptr = anker;

		if (ptr->data == wert) {                        
			anker = ptr->next;                         
			delete ptr;                                
			if (anker) {                    
				anker->prev = nullptr;                 
			}
			return;
		}

		else
		{
			while (ptr && ptr->data != wert)
			{
				ptr = ptr->next;
			}
			if (!ptr)
			{
				return;
			}
			TListenKnoten* tmp = ptr->prev;
			tmp->next = ptr->next;
			if (ptr->next)
				ptr->next->prev = tmp;

			if (ptr->prev)
				ptr->prev->next = ptr->next;

			delete ptr;
		}
	}
}

