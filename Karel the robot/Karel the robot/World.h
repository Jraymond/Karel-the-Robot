//World.h


#pragma once


class World
{

private:
	int ave; // verticals
	int str; // horizontals
	int b; // beepers
	bool w; // wall variable   should be a bool type 



public:
	World(); //default
	World(int ave, int str); //builds the world
	int set_b(int ave, int str, int b); //sets a beeper  setting one at a time at first, can change that later -josh 2/17
	int set_w(int ave, int str, bool w); // sets a wall

	~World();

};