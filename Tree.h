
#ifndef TREE_H
#define TREE_H

/*
	*  *
	****
	 **
	 **
	 **
*/
class Tree
{
public:
	Tree(unsigned int x, unsigned int y, char c):left_upper_x(x), left_upper_y(y), closure(x) {}

	unsigned int left_upper_x;
	unsigned int left_upper_y;
	char closure;

};







#endif

