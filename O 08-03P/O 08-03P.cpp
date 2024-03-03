#include <iostream>
#include <string>

using namespace std;

char* my_strconcat(const char* ptr1,const char* ptr2)
{

	int i = 0, j = 0;
	for (i; ptr2[j] != '\0'; ++j);
	for (i = 0; ptr1[i] != '\0'; ++i);
	char* endstr = new char[i + j + 1];

	for (i = 0; ptr1[i] != '\0'; ++i)
	{
		endstr[i] = ptr1[i];
	}
	for (j = 0; ptr2[j] != '\0'; ++i,++j)
	{
		endstr[i] = ptr2[j];
	}
	endstr[i] = '\0';
	return endstr;
}

int main()
{
	std::cout << "Bitte ersten Text eingeben (ggfs. mit Leerzeichen): ? ";
	char firstInput[20] = {};
	cin.getline(firstInput,20);
	std::cout << "Bitte zweiten Text eingeben (ggfs. mit Leerzeichen): ? ";
	char secondInput[20] = {};
	cin.getline(secondInput, 20);
	std::cout << "Ergebnis my_strconcat(): " << my_strconcat(firstInput, secondInput) << std::endl;

}