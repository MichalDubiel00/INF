// Datei: zeichenkette_suchen_main.cpp

#define CATCH_CONFIG_RUNNER
#include "catch.h"

#include <iostream>
using namespace std;

#include "zeichenkette_suchen.h"
#include "catch.h"

int main()
{
    // Aufruf der Unit Tests ...
	Catch::Session().run();
	//dein code ab hier
	char text[20];
	char zkette[20];

	cout << "Bitte geben Sie den Text ein : ";

	cout << "Bitte geben Sie den Text ein: ";
	cin.getline(text, 20);
	cout << "Bitte geben Sie die zu suchende Zeichenkette ein : ";
	cin.getline(zkette, 20);

	int result = zeichenkette_suchen(text, zkette);

	if (result > -1)
	{
		cout << "Die Zeichenkette '" << zkette << "' ist in dem Text '" << text << "'enthalten\nSie startet ab Zeichen " << result << " (bei Zaehlung ab 0)." << endl;
	}
	else
	{
		cout << "Die Zeichenkette '" << zkette << "' ist NICHT in dem Text '" << text << "'enthalten" << endl;

	}

    system("PAUSE");
    return 0;
}
