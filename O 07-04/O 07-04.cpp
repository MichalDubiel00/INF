// O 07-04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

struct Person
{
	string nachname, vorname;
	int alter;
	char geschlecht;
};

void filter(Person personen[],int anzahl)
{
	int auswahl = 0, count = 0;
	cout << "1 - Weibliche Erwachsene\n2 - Maennliche Erwachsene\n3 - Weibliche Kinder\n4 - Maennliche Kinder\n";
	cout << "? ";
	cin >> auswahl;
	switch (auswahl) {
	case 1: 
		for (int i = 0; i < anzahl; i++)
		{
			if (personen[i].alter > 17 && personen[i].geschlecht == 'w')
			{
				cout << personen[i].nachname << ", " << personen[i].vorname << ", " << personen[i].geschlecht << ", " << personen[i].alter << endl;
				count++;

			}
		}
		cout << "Summe: " << count << endl;

		break;
	case 2: 
		for (int i = 0; i < anzahl; i++)
		{
			if (personen[i].alter > 17 && personen[i].geschlecht == 'm')
			{
				cout << personen[i].nachname << ", " << personen[i].vorname << ", " << personen[i].geschlecht << ", " << personen[i].alter << endl;
				count++;

			}
		}
		cout << "Summe: " << count << endl;

		break;
	case 3:
		for (int i = 0; i < anzahl; i++)
		{
			if (personen[i].alter < 18 && personen[i].geschlecht == 'w')
			{
				cout << personen[i].nachname << ", " << personen[i].vorname << ", " << personen[i].geschlecht << ", " << personen[i].alter << endl;
				count++;

			}
		}
		cout << "Summe: " << count << endl;

		break;
	case 4: 
		for (int i = 0; i < anzahl; i++)
		{
			if (personen[i].alter < 18 && personen[i].geschlecht == 'm')
			{
				cout << personen[i].nachname << ", " << personen[i].vorname << ", " << personen[i].geschlecht << ", " << personen[i].alter << endl;
				count++;

			}
		}
		cout << "Summe: " << count << endl;

		break;
	}
}

int main()
{
	Person personen[100] = {
{ "Musterfrau1", "Petra1", 18, 'w' },
{ "Mustermann1", "Klaus1", 18, 'm' },
{ "Mustermaedchen1", "Lisa1", 1, 'w' },
{ "Musterjunge1", "Jan1", 1, 'm' },
{ "Musterfrau2", "Petra2", 19, 'w' },
{ "Mustermann2", "Klaus2", 19, 'm' },
{ "Mustermaedchen2", "Lisa2", 2, 'w' },
{ "Musterjunge2", "Jan2", 2, 'm' },
{ "Musterfrau3", "Petra3", 20, 'w' },
{ "Mustermann3", "Klaus3", 20, 'm' },
{ "Mustermaedchen3", "Lisa3", 3, 'w' },
{ "Musterjunge3", "Jan3", 3, 'm' },
{ "Musterfrau4", "Petra4", 21, 'w' },
{ "Mustermann4", "Klaus4", 21, 'm' },
{ "Mustermaedchen4", "Lisa4", 4, 'w' },
{ "Musterjunge4", "Jan4", 4, 'm' },
{ "Musterfrau5", "Petra5", 22, 'w' },
{ "Mustermann5", "Klaus5", 22, 'm' },
{ "Mustermaedchen5", "Lisa5", 5, 'w' },
{ "Musterjunge5", "Jan5", 5, 'm' },
{ "Musterfrau6", "Petra6", 23, 'w' },
{ "Mustermann6", "Klaus6", 23, 'm' },
{ "Mustermaedchen6", "Lisa6", 6, 'w' },
{ "Musterjunge6", "Jan6", 6, 'm' },
{ "Musterfrau7", "Petra7", 24, 'w' },
{ "Mustermann7", "Klaus7", 24, 'm' },
{ "Mustermaedchen7", "Lisa7", 7, 'w' },
{ "Musterjunge7", "Jan7", 7, 'm' },
{ "Musterfrau8", "Petra8", 25, 'w' },
{ "Mustermann8", "Klaus8", 25, 'm' },
{ "Mustermaedchen8", "Lisa8", 8, 'w' },
{ "Musterjunge8", "Jan8", 8, 'm' }
	};
	int anzahlpersonen = 32;
	char bl = ' ';
	do
	{
		cout << "Eine weitere Person eingeben (j/n)? ";
		cin >> bl;
		if (bl == 'j')
		{
			cout << "Bitte den Nachnamen der " << anzahlpersonen + 1 << ". Person eingeben: ? ";
			cin >> personen[anzahlpersonen].nachname;
			cout << "Bitte den Vornamen der " << anzahlpersonen + 1 << ". Person eingeben: ? ";
			cin >> personen[anzahlpersonen].vorname;
			cout << "Bitte das Alter der " << anzahlpersonen + 1 << ". Person eingeben: ? ";
			cin >> personen[anzahlpersonen].alter;
			cout << "Bitte das Geschlecht der " << anzahlpersonen + 1 << ". Person eingeben: ? ";
			cin >> personen[anzahlpersonen].geschlecht;
			anzahlpersonen++;
		}
	
	} while (bl !='n');

	cout << "Ihre Auswahl:" << endl;
	filter(personen,anzahlpersonen);
	return 0;
}
