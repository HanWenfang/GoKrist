
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
	screen.updateKrist(krist);
}

/*
	clear all the screen
*/
void Render::begin()
{
	screen.refresh();

	if(backgroundFlag) {
		renderBackground();
	}

}

/*
	flush the screen buffer
*/
void Render::end()
{
	screen.out();
}

/*
	how to render or change the picture on the screen	
*/
void Render::renderKristStepForward(int step)
{
	/*
		background scroll
	*/
	if(backgroundFlag) {
		renderBackgroundScrollBack(step);
	}


	krist.left_upper_x += step;
	renderKrist();
}

void Render::renderBackground()
{
	screen.updateBackground(background);
	backgroundFlag = true;
}

void Render::renderBackgroundScrollBack(int step)
{
	screen.backgroundScrollBack(background, step);
}

