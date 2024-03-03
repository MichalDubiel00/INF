#include "MyString2.h"
#include <iostream>



MyString2::MyString2(std::string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		hinten_anfuegen(anker, str[i]);

	}
}

CharListenKnoten* MyString2::get_anker() const
{
    return anker;
}

void MyString2::set_anker(CharListenKnoten* anker)
{
    this->anker = anker;
}

MyString2::MyString2(const MyString2& orig)
{
	anker = deep_copy(orig.anker);
}
MyString2& MyString2::operator=(const MyString2& orig)
{
	loesche_alle(anker);
	anker = deep_copy(orig.anker);

	return *this;
}

MyString2::~MyString2()
{
	loesche_alle(anker);
}

unsigned int MyString2::length() const
{
		int count = 0; 
		CharListenKnoten* current = anker;
		while (current)
		{
			count++;
			current = current->get_next();
		}
		return count;
}

char MyString2::at(unsigned int pos) const
{

	
		int count = 0;
		CharListenKnoten* current = anker;
		while (current != nullptr) {
			if (count == pos)
				return (current->get_data());
			count++;
			current = current->get_next();
		}

	return '\0';
}

std::string MyString2::to_string() const
{
	std::string cpy;
	CharListenKnoten* current = anker;
	while (current)
	{
		cpy += current->get_data();
		current = current->get_next();
	}
	return cpy;
}

MyString2 MyString2::operator+(char c) const
{
	MyString2 ergebnis = *this;
	hinten_anfuegen(ergebnis.anker, c);
	return ergebnis;
}

void MyString2::print()
{
	CharListenKnoten* current = anker;
	while (current) {
		std::cout << current->get_data();
		current = current->get_next();
	}
}
