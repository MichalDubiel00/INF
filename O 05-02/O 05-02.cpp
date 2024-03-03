#include <iostream>

using namespace std;

int main()
{
	int num[6], search = 0;
	for (int i = 0; i < 6; i++)
	{
		do
		{
			cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
			cin >> num[i];

		} while (num[i] > 6 || num[i] < 1);
	}
	cout << "Bitte geben Sie die Suchzahl ein: ? ";
	cin >> search;

	for (int i = 0; i < 6; i++)
	{
		if (num[i]==search)
		{
			cout << "Die Suchzahl kam unter den Eingaben vor." << endl;
			return 0;
		}

	}
	cout << "Die Suchzahl kam NICHT unter den Eingaben vor." << endl;

	return 0;
}