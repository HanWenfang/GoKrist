
#ifndef BACKGROUND_H
#define BACKGROUND_H
#include "Tree.h"


class Background
{
public:
	Background():tree1(10, 15, '*'), tree2(40, 15, '*'), tree3(80, 15, '*') {}

	Tree tree1;
	Tree tree2;
	Tree tree3;
};






#endif
