#include <iostream>
#include <string>

using namespace std;

char* my_strconcat2(const char* ptr1,
	const char* ptr2,
	unsigned int count)
{

	int i = 0, j = 0;
	for (i; ptr2[j] != '\0'; ++j);
	for (i = 0; ptr1[i] != '\0'; ++i);
	char* endstr = new char[count+1];

	for (i = 0; ptr1[i] != '\0'; ++i)
	{
		if (i == count)
			break;
		endstr[i] = ptr1[i];
	}
	for (j = 0; ptr2[j] != '\0' ; ++i, ++j)
	{
		if (i == count)
			break;
		endstr[i] = ptr2[j];
	}
	endstr[i] = '\0';
	return endstr;
}

int main()
{
	int count = 0;
	std::cout << "Bitte ersten Text eingeben (ggfs. mit Leerzeichen): ? ";
	char firstInput[20] = {};
	cin.getline(firstInput, 20);
	std::cout << "Bitte zweiten Text eingeben (ggfs. mit Leerzeichen): ? ";
	char secondInput[20] = {};
	cin.getline(secondInput, 20);
	cout << "Anzahl Zeichen: ? ";
	cin >> count;
	std::cout << "Ergebnis my_strconcat(): " << my_strconcat2(firstInput, secondInput,count) << std::endl;

}