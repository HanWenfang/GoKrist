
#ifndef RENDER_H
#define RENDER_H

#include "Screen.h"
#include "Krist.h"
#include "Background.h"

class Render
{
public:
	Render():krist(0, 16, '*'), backgroundFlag(false) {}
	void init();
	void renderKrist();
	void renderKristStepForward(int step);
	void renderBackground();
	void renderBackgroundScrollBack(int step);
	void begin();
	void end();

private:
	Screen screen;
	Krist krist;
	Background background; // put the argguments in the background!
	bool backgroundFlag;
};





#endif

