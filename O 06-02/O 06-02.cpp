// O 06-02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int addition_rekursiv(int i, int k)
{
	int sume;
	if (k == 0) { return i; }
	if (k == 1) { return i + 1; }
	return addition_rekursiv(i, k - 1)+1;
}
int subtraktion_rekursiv(int i, int k)
{
	if (k == 0) { return i; }
	if (k == 1) { return i - 1; }
	return subtraktion_rekursiv(i, k - 1) - 1;
}

int main()
{
	int i = 0, k = 0;
	cout << "Bitte geben Sie die erste Zahl ein: ? ";
	cin >> i;
	cout << "Bitte geben Sie die zweite Zahl ein: ? ";
	cin >> k;
	cout << i << " + " << k << " = "
		<< addition_rekursiv(i, k) << endl;
	cout << i << " - " << k << " = "
		<< subtraktion_rekursiv(i, k) << endl;
	system("PAUSE");
	return 0;
}
