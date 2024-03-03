#include "binaerer_suchbaum.h"
#include <iostream>

using namespace std;

void suchbaum::einfuegen(BaumKnoten*& anker, int neuerWert)
{
	BaumKnoten* neuer_eintrag = new BaumKnoten;
	neuer_eintrag->wert = neuerWert;
	neuer_eintrag->links = nullptr;
	neuer_eintrag->rechts = nullptr;


	if (!anker)
	{
		anker = neuer_eintrag;
	}
	else
	{
		if (anker->wert > neuerWert) // wenn neuer wert kleiner ist als der anker
		{
			if (anker->links) //wenn ein kind ptr.links existiert
			{
				suchbaum::einfuegen(anker->links, neuerWert); //wert weiter geleitet
			}
			else
			{
				anker->links = neuer_eintrag; // sonst wirt der wert links von den parent gesetzt
			}
		}
		else if (anker->wert < neuerWert)
		{
			if (anker->rechts)
			{
				suchbaum::einfuegen(anker->rechts, neuerWert);
			}
			else
			{
				anker->rechts = neuer_eintrag;

			}
		}
		else
			return;
	}
}

void suchbaum::ausgeben(BaumKnoten* ptr)
{
	if (!ptr)
		return;
	int tiefe = 0;
	suchbaum::knoten_ausgeben(ptr,tiefe);
}

void suchbaum::knoten_ausgeben(BaumKnoten* knoten, int tiefe)
{
	if (!knoten)
		return;
	string plus(tiefe * 2, '+');
	suchbaum::knoten_ausgeben(knoten->rechts, tiefe+1); //geht zu den rechten pointer und bei jeden weiteren pass wird einz zu der tiefe addiert
	cout << plus << knoten->wert << endl; 
	suchbaum::knoten_ausgeben(knoten->links, tiefe+1);	//geht zu den linken pointer und bei jeden weiteren pass wird einz zu der tiefe addiert
}

