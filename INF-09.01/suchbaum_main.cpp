// Datei: suchbaum_main.cpp

#define CATCH_CONFIG_RUNNER
#include "catch.h"

#include <iostream>
using namespace std;

#include "binaerer_suchbaum.h"

int main()
{
    // Aufruf der Unit Tests ...
   Catch::Session().run();

    // Ihr Code ab hier ...
	suchbaum::BaumKnoten* anker = nullptr;
	
	int userInput = 0;
	int tiefe = 0;
	while (true)
	{
		cout << "Naechster Wert (99 beendet): ? ";
		cin >> userInput;
		if (userInput == 99)
			break;
		suchbaum::einfuegen(anker, userInput);
	} 

	suchbaum::ausgeben(anker);
    system("PAUSE");
    return 0;
}
