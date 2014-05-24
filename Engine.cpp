#include "Engine.h"

void Engine::run(string &input)
{
	if ( input.empty() ) {
		render.begin();
		render.end();
	} else if ( input == "krist" ) {
		render.begin();
		render.renderKrist();
		render.end();
	} else if ( input == "step forward" ) {
		int step = 2;
		render.begin();
		render.renderKristStepForward(step);
		render.end();
	} else if ( input == "background" ) {
		render.begin();
		render.renderBackground();
		render.end();
	} 

}








