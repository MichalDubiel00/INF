#pragma once

namespace suchbaum
{
	struct BaumKnoten
	{
		int wert;
		BaumKnoten* links;
		BaumKnoten* rechts;
	};
	void einfuegen(BaumKnoten* &anker, int neuerWert);
	void ausgeben(BaumKnoten* ptr);
	void knoten_ausgeben(BaumKnoten* knoten, int tiefe);
}