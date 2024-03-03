#pragma once
#include <string>
template <typename T,typename T2>
struct Tupel
{
	T komponente1;
	T2 komponente2;
};

template <typename T, typename T2>
int vergleiche(Tupel<T,T2> p1, Tupel<T, T2> p2);

