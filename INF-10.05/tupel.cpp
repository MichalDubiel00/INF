#include "tupel.h"
#include <iostream>


template<typename T, typename T2>
int vergleiche(Tupel<T, T2> p1, Tupel<T, T2> p2)
{
	if (p1.komponente1 < p2.komponente1 && p1.komponente2 < p2.komponente2)
		return -1;
	else if (p1.komponente1 > p2.komponente1 && p1.komponente2 > p2.komponente2)
		return 1;
	else
		return 0;
}

template
int vergleiche(Tupel<std::string, int> p1, Tupel<std::string, int> p2);
template
int vergleiche(Tupel<int, int> p1, Tupel<int, int> p2);

