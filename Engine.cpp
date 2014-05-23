#include "Engine.h"

void Engine::run(string &input)
{
	if ( input.empty() ) {
		render.init();
	} else if ( input == "krist" ) {
		render.renderKrist();
	}

}








