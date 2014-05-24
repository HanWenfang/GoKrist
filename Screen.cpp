
#include "Screen.h"

void Screen::init()
{
	for(unsigned int i=0; i<20; ++i)
	{
		for(unsigned int j=0; j<100; ++j)
		{
			pixes[i][j] = '.';
		}
	}
}

void Screen::refresh()
{
	init();
}

void Screen::out()
{
	for(unsigned int i=0; i<20; ++i)
	{
		for(unsigned int j=0; j<100; ++j)
		{
			cout << pixes[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

void Screen::updateKrist(Krist const &krist)
{
	/*
		j ==> y
		i ==> x
	*/
	for(unsigned int j=0; j<20; ++j)
	{
		for(unsigned int i=0; i<100; ++i)
		{
			if ( i==krist.left_upper_x && j==krist.left_upper_y ) {
				pixes[j][i] = '*';
			} else if ( i==krist.left_upper_x+3 && j==krist.left_upper_y ) {
				pixes[j][i] = '*';
			} else if(i==krist.left_upper_x && j==krist.left_upper_y + 1) {
				pixes[j][i] = '*';
			} else if(i==krist.left_upper_x+1 && j==krist.left_upper_y+1) {
				pixes[j][i] = '*';
			} else if(i==krist.left_upper_x+2 && j==krist.left_upper_y+1) {
				pixes[j][i] = '*';
			} else if(i==krist.left_upper_x+3 && j==krist.left_upper_y+1) {
				pixes[j][i] = '*';
			} 
		}
	}
}

void Screen::updateBackground(Background &background)
{
	/*
		j ==> y
		i ==> x
	*/
	updateTree(background.tree1);
	updateTree(background.tree2);
	updateTree(background.tree3);
}

void Screen::updateTree(Tree &tree)
{
	/*
		j ==> y
		i ==> x
	*/
	for(unsigned int j=0; j<20; ++j)
	{
		for(unsigned int i=0; i<100; ++i)
		{
			if ( i==tree.left_upper_x && j==tree.left_upper_y ) {
				pixes[j][i] = '*';
			} else if ( i==tree.left_upper_x+3 && j==tree.left_upper_y ) {
				pixes[j][i] = '*';
			} else if(i==tree.left_upper_x && j==tree.left_upper_y + 1) {
				pixes[j][i] = '*';
			} else if(i==tree.left_upper_x+1 && j==tree.left_upper_y+1) {
				pixes[j][i] = '*';
			} else if(i==tree.left_upper_x+2 && j==tree.left_upper_y+1) {
				pixes[j][i] = '*';
			} else if(i==tree.left_upper_x+3 && j==tree.left_upper_y+1) {
				pixes[j][i] = '*';
			} else if(i==tree.left_upper_x+1 && j==tree.left_upper_y+2) {
				pixes[j][i] = '*';
			} else if(i==tree.left_upper_x+2 && j==tree.left_upper_y+2) {
				pixes[j][i] = '*';
			} else if(i==tree.left_upper_x+1 && j==tree.left_upper_y+3) {
				pixes[j][i] = '*';
			} else if(i==tree.left_upper_x+2 && j==tree.left_upper_y+3) {
				pixes[j][i] = '*';
			} else if(i==tree.left_upper_x+1 && j==tree.left_upper_y+4) {
				pixes[j][i] = '*';
			} else if(i==tree.left_upper_x+2 && j==tree.left_upper_y+4) {
				pixes[j][i] = '*';
			} 
		}
	}
}

void Screen::backgroundScrollBack(Background &background, int step)
{
	/*
		optimize: just move the tree ?!
	*/
	scrollBackTree(background.tree1, step);
	scrollBackTree(background.tree2, step);
	scrollBackTree(background.tree3, step);
}

void Screen::scrollBackTree(Tree &tree, int step)
{
	tree.left_upper_x -= step;

	tree.left_upper_x += 100; // scroll
	tree.left_upper_x %= 100; // scroll
}


