// Karel.h


#pragma once

// variable names are just place holders for now, we can change them later -josh 2/17

class Karel
{

private:
	int x;
	int y; // position variables
	int d; //direction variable
	int b; //#of beepers variable

public:
	Karel(); //defualt
	Karel(int x, int y, int d, int b); 
	int karel_pos(int x, int y, int d); //shows position in the maze
	int karel_beeper(int b); //shows # of beepers
	int get_xy(int x, int y); //gets x and y 
	int get_d(int d); // gets direction
	int get_b(int b); // gets number of beepers 

	~Karel();


};