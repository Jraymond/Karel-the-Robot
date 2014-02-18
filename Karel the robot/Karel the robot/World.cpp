//World.cpp


#include "World.h"
#include <iostream>
#include <vector>

World::World()
{
	ave = 0;
	str = 0;
	b = 0;
	w = 0;
}

World::World(int ave, int str) // takes the variables from ave and str and makes a 2-d arry 
{
	std::vector<int> world_size[ave][str]; // something like this
}

int World::set_b(int ave, int str, int b)
{

}

int World::set_w(int ave, int str, bool w) //this should go through every block in the arry and decied if its a wall
{

}

World::~World()
{

}