#pragma once
#include "MyRectangle.h"

class MyFilledRectangle : public MyRectangle
{
	int x;
public:
	MyFilledRectangle(int,int,int,int);
	void draw() const;
};


