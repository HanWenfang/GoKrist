
#ifndef SCREEN_H
#define SCREEN_H
#include <iostream>
#include "Krist.h"

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
	void updateKrist(Krist krist);

private:
	char pixes[20][100];

};





#endif
