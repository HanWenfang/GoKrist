
#include "Render.h"

void Render::init()
{
	screen.refresh();
}

void Render::renderKrist()
{
	/*
		screen:0~99
	*/
	Krist krist(0, 16, '*');
	screen.updateKrist(krist);
	screen.out();
}

