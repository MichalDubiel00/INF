#pragma once
class MyRectangle
{
	int x1, x2, y1, y2;
public:

	MyRectangle();
	MyRectangle(int, int, int, int);

	//Getter und Setter
	int getX1() const;
	void setX1(int x1);

	int getX2() const;
	void setX2(int x2);

	int getY1() const;
	void setY1(int y1);

	int getY2() const;
	void setY2(int y2);
	//=================
	void set(int, int, int, int);
	void draw() const;
	void draw_red() const;
	bool does_not_collide_with(const MyRectangle& other) const;
	MyRectangle operator*(double);
};


