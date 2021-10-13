// INF 2.04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	double flNumber,result;
	//to fix the warnings just change int to double
	int chNumber;
    cout << "Ihre Eingabe: ?";
	cin >> flNumber;
	cout << "Ihre Auswahl der Umwandlung:\n1 - Celsius in Fahrenheit\n2 - Meter in Fuss\n3 - Euro in US Dollar" << endl;
	cin >> chNumber;
	//test for wrong input
	if (chNumber > 3 || chNumber <+ 0)
	{
		cerr << "eine zahl zwischen 1-3 geben";
		system("PAUSE");
		return -1;
	}
	result = (((chNumber * (chNumber - 2)) * (chNumber - 3))*0.5) * (flNumber * 1.8 + 32)+	 //case 1 Celsius in Fahrenheit 
			 (((chNumber * (chNumber - 1)) * (chNumber - 3))*-0.5) * (flNumber* 3.2808)+  //case 2 Meter in Fuß
			 ((((chNumber * (chNumber - 1)) * (chNumber - 2))/6)*flNumber* 1.2957);		   //case 3 Euro in Dollar
	cout << "Das Ergebnis lautet:"<< result<< endl;

	//system("PAUSE");
	return 0;
	

}

