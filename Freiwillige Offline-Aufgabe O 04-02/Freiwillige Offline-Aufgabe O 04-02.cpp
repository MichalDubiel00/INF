#include <iostream>
using namespace std;
int main()
{
	for (int z = 1, wert2 = 10, wert3 = 10; z < 11; z++, wert2 += wert2, wert3 += wert3 *2)
	{
		cout << "Zeile: " << z
			<< " Verdoppler: " << wert2
			<< " Verdreifacher: " << wert3
			<< endl;
	}
	system("PAUSE");
	return 0;
}