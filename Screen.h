
#ifndef SCREEN_H
#define SCREEN_H
#include <iostream>
#include "Krist.h"
#include "Background.h"

using std::cout;
using std::endl;

/*
	20 X 100
			x
	--------->
	|
	|
	|y
	|
*/
class Screen
{
public:
	void init();
	void refresh();
	void out();
	void updateKrist(Krist const &krist);
	void updateBackground(Background &background);
	void backgroundScrollBack(Background &background, int step);
	void updateTree(Tree &tree);
	void scrollBackTree(Tree &tree, int step);

private:
	char pixes[20][100];

};





#endif
