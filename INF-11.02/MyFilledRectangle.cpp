#include "MyFilledRectangle.h"
#include"CImgGIP06.h"

MyFilledRectangle::MyFilledRectangle(int x1, int y1, int x2, int y2)
	:MyRectangle(x1, y1, x2, y2)
{
}
void MyFilledRectangle::draw() const
{
	MyRectangle::draw();
	int temp_x = x1 + 2, temp_y = y1 + 2;
	while (temp_x <= x2 - 2)
	{
		gip_draw_line(temp_x, temp_y, temp_x, y2 - 2, red);
		temp_x++;

	}
}
