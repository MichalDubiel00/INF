// INF-07.01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include "Person.h"


using namespace std;

void readperson(Person p)
{
	cout << p.name << ", " << p.surname << ", " << p.birthday << endl;
}

string b(string s)
{
	return "<b>" + s + "</b>";
}

string br(string s)
{
	return "<br>" + s + "</br>";
}

int main()
{
	string in = "", kurztext = "", langtext = "",html;

	ifstream myfile("personendaten.txt"); 
	if (myfile.is_open())
	{
		while (getline(myfile, in)) 
		{
				Person person = extrahiere_person(in);   //funktion extrahiere_person(in) wird fuer jede Zeile aufgeruft
				//readperson(person);
				kurztext += br(b(person.surname) + ", " + person.name) + "\n";

				langtext += br(
					b(person.name + " " + person.surname) +
					", " +
					person.birthday
				) + "\n";
		}
		myfile.close();
	}
	ifstream myfiletmpl("webseite.html.tmpl");
	ofstream outfile("webseite.html");
	{
		while (getline(myfiletmpl, html))
		{
			html = ersetze(html, '%', kurztext);
			html = ersetze(html, '$', langtext);
			outfile << html << "\n";
		}
	}
	myfiletmpl.close();
	outfile.close();

	return 0;
}
