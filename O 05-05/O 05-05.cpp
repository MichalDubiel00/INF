#include <iostream>

using namespace std;

int main()
{
	int num[9], count = 0;
	for (int i = 0; i < 9; i++)
	{
		do
		{
			cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
			cin >> num[i];

		} while (num[i] > 6 || num[i] < 1);
	}

	for (int i = 0, j = 0; j < 9;j++)
	{
		if (i < 7) { i++; }
		{
			if (i == num[j]) { count++; }
		}
	}
	cout << "In der Eingabe kamen " << count << " unterschiedliche Zahlen vor." << endl;

	return 0;
}