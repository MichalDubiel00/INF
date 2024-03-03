#pragma once
#include <iostream>
#include "CharListenKnoten.h"
class MyString2
{
	CharListenKnoten* anker;
public:
	MyString2(CharListenKnoten* ANKER = nullptr) : anker{ ANKER } {}
	
	MyString2(std::string);
    CharListenKnoten* get_anker() const;
    void set_anker(CharListenKnoten* anker);
	MyString2(const MyString2& orig);
	MyString2& operator = (const MyString2& orig);
	~MyString2();
	unsigned int length() const;
	char at(unsigned int pos) const;
	std::string to_string() const;
	MyString2 operator+(char c) const;
	void print();
};

