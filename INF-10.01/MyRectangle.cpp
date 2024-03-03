#include "MyRectangle.h"
#include "CImgGIP06.h"
MyRectangle::MyRectangle()
{
	x1 = 0;
	y1 = 0;
	x2 = 20;
	y2 = 20;
}

MyRectangle::MyRectangle(int x1, int y1, int x2, int y2)
{
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;

}

int MyRectangle::getX1() const
{
    return x1;
}

void MyRectangle::setX1(int x1)
{
    this->x1 = x1;
}

int MyRectangle::getX2() const
{
    return x2;
}

void MyRectangle::setX2(int x2)
{
    this->x2 = x2;
}

int MyRectangle::getY1() const
{
    return y1;
}

void MyRectangle::setY1(int y1)
{
    this->y1 = y1;
}

int MyRectangle::getY2() const
{
    return y2;
}

void MyRectangle::setY2(int y2)
{
    this->y2 = y2;
}

void MyRectangle::set(int x1, int y1, int x2, int y2)
{
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;

}

void MyRectangle::draw() const
{
	gip_draw_rectangle(x1, y1, x2, y2, blue);

}
bool MyRectangle::does_not_collide_with(const MyRectangle& other) const {
	if (this->x2 < other.x1 || other.x2 < this->x1 || other.y1 > this->y2 || this->y1 > other.y2)
		return true;
	
	else
		return false;

}
 


