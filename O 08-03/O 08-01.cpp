

#include <iostream>
#include <string>

unsigned int my_strlen(const char* ptr)
{
	int i = 0;
	while (ptr[i] != '\0')
	{
		i++;
	}
	return i;
}

int main()
{
	std::cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	char cInput[20] = {};
	std::cin.getline(cInput, 20);
	std::cout << "Ergebnis my_strlen(): " << my_strlen(cInput)<<std::endl;
}

