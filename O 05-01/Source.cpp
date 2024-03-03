#include <iostream>

using namespace std;

int main()
{
	int num[9];
	for (int i = 0; i < 9; i++)
	{
		do
		{
			cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
			cin >> num[i];

		} while (num[i]>6 || num[i] < 1);
	}

	for (int i = 0; i < 9; i++)
	{
		cout << "Die " << i + 1 << ". eingegebene Zahl lautete: " << num[i] << endl;
	}
	return 0;
}