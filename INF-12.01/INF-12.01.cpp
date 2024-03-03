// Datei: main.cpp
#include <iostream>
#define CATCH_CONFIG_RUNNER
#include "catch.h"
#include "CharListenKnoten.h"
#include "MyString2.h"

int main()
{
	Catch::Session().run();
	MyString2 s("abcdefgh");
	CharListenKnoten* k_ptr = new CharListenKnoten('a');

	s = s + 'x';

	s.print();
	return 0;
}