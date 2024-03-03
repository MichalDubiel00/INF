
#include <iostream>

int my_strcmp(const char* ptr1, const char* ptr2) {
	int i = 0;
	int j = 0;
	while (ptr1[i] != '\0')
	{
		i++;
	}
	while (ptr2[j] != '\0')
	{
		j++;
	}
	if (i > j)
		return -1;
	else if (i < j)
		return 1;
	else
	{
		for (int k = 0; k < i; k++)
		{
			if (ptr1[k] != ptr2[k])
				return -1;	
		}
		return 0;
	}
		
}

int main()
{
	std::cout << "Bitte ersten Text eingeben (ggfs. mit Leerzeichen): ? ";
	char firstInput[20] = {};
	std::cin.getline(firstInput, 20);
	std::cout << "Bitte zweiten Text eingeben (ggfs. mit Leerzeichen): ? ";
	char secondInput[20] = {};
	std::cin.getline(secondInput, 20);
	if (my_strcmp(firstInput,secondInput)==0)
	{
		std::cout << "Die Texte sind identisch. Ergebnis my_strcmp(): 0" << std::endl;
	}
	else
	{
		std::cout << "Ergebnis my_strcmp(): "<< my_strcmp(firstInput, secondInput) << std::endl;

	}
}

