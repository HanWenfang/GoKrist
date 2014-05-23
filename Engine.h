
#ifndef ENGINE_H
#define ENGINE_H
#include <string>
#include "Render.h"

using std::string;

class Engine
{
public:
	void run(string &input);

private:
	Render render;
};





#endif
