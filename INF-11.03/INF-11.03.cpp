#include <iostream>
#define CIMGGIP_MAIN
#include "CImgGIP06.h"
using namespace std;

int main()
{
	// Für das "blaue Spielfeld" ...
	const int left_border = 100;
	const int right_border = 500;

	// Für Ausdehnung und Position des weißen Quadrats ...
	int x_player = 200, y_player = 500-20;
	int x_ball = 200, y_ball = 300;
	bool ball_x_movment = false;
	bool ball_y_movment = true;

	const int ball_size = 10;
	int delta = 3;

	gip_white_background();

	bool swap = true;
	while (gip_window_not_closed())
	{
		// Blaues "Spielfeld" neu zeichnen
		// (übermalt dann auch das letzte weiße Quadrat) ...
		gip_draw_rectangle(left_border, 100, // linke obere Ecke
			right_border, 500, // rechte untere Ecke
			blue);

		//genarate game
		gip_draw_rectangle(x_player, y_player,    // linke obere Ecke 
			x_player + 50,  // rechte untere Ecke
			y_player + 20,
			white);
		gip_draw_rectangle(x_ball, y_ball,    // linke obere Ecke 
			x_ball + ball_size,  // rechte untere Ecke
			y_ball + ball_size,
			white);
		//player position
		if (gip_mouse_x()>100 && gip_mouse_x()<500-30)
		{
			x_player = gip_mouse_x();
		}

		if (ball_x_movment)
			x_ball += delta;
		else
			x_ball -= delta;

		if (ball_y_movment)
			y_ball -= delta;
		else
			y_ball += delta;
		//kolizion

		//uper y achse colizion
		if (y_ball <= 100)
			ball_y_movment = false;
		//left colizion
		if (x_ball <= 100)
			ball_x_movment = true;
		//right colizion
		if (x_ball >= 500)
			ball_x_movment = false;
		//player colizion
		if ((x_ball <= x_player+50 && x_ball >= x_player-50) && y_ball >= y_player)
			ball_y_movment = true;

		//lose condition
		if (y_ball >= 500)
			break;
		
		//gip_wait(10);

	}
	gip_draw_text(250, 250, "GAME OVER",white);
	gip_wait(10000);
	return 0;
}
