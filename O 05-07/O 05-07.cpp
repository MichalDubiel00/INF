#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	string str,n_str;
	stringstream ss;
	int num;

	
		cout << "Bitte die Zahl oder das Wort 'ende' eingeben: ? ";
		cin >> str;
		if (str != "ende")
		{
			cout << "Der doppelte Wert betraegt: ";

					std::istringstream(str) >> num;

					cout << num *2;

				
			cout << '\n';
			return 0;
		}
		else
	cout << "Das Programm beendet sich jetzt." << endl;
	return 0;
}