
#ifndef RENDER_H
#define RENDER_H

#include "Screen.h"
#include "Krist.h"

class Render
{
public:
	void init();
	void renderKrist();
private:
	Screen screen;
	Krist krist;
};





#endif

