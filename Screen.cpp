
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
	out();
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

void Screen::updateKrist(Krist krist)
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
			} else if ( i==krist.left_upper_x+4 && j==krist.left_upper_y ) {
				pixes[j][i] = '*';
			} else if(i==krist.left_upper_x && j==krist.left_upper_y + 1) {
				pixes[j][i] = '*';
			} else if(i==krist.left_upper_x+1 && j==krist.left_upper_y) {
				pixes[j][i] = '*';
			} else if(i==krist.left_upper_x+2 && j==krist.left_upper_y) {
				pixes[j][i] = '*';
			} else if(i==krist.left_upper_x+3 && j==krist.left_upper_y) {
				pixes[j][i] = '*';
			} else if(i==krist.left_upper_x+4 && j==krist.left_upper_y) {
				pixes[j][i] = '*';
			} else if(i==krist.left_upper_x+1 && j==krist.left_upper_y+2) {
				pixes[j][i] = '*';
			} else if(i==krist.left_upper_x+3 && j==krist.left_upper_y+2) {
				pixes[j][i] = '*';
			} else if(i==krist.left_upper_x+1 && j==krist.left_upper_y+3) {
				pixes[j][i] = '*';
			} else if(i==krist.left_upper_x+3 && j==krist.left_upper_y+3) {
				pixes[j][i] = '*';
			} 
		}
		cout << endl;
	}
	cout << endl;
}


