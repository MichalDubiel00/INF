#include <iostream>
#include <string>
using namespace std;


int main()
{
	int* b = new int(10);
	b[0] = 1;
	for (int i = 1; i < 10; i++)
	{
		b[i] = b[i - 1] + 2;
	}

	int* p1 = &b[0];
	int c = *(p1 + 5);
	int* p2 = &b[2];
	int d = *p1 + *p2;
	
	cout << c << "/" << d;
}