//Karel.cpp




#include "Karel.h"
#include <iostream>





Karel::Karel()
{
	x = 0;
	y = 0;
	d = 0;
	b = 0;

}

Karel::Karel(int x, int y, int d, int b) // we can use this for unit tests, we will have to change it to read from a file for the final program
{
	std::cout<<"x ";
	std::cin>>x;
	std::cout<<"y= ";
	std::cin>>y;
	std::cout<<"d= ";
    std::cin>>d;
	std::cout<<"b= ";
	std::cin>>b;

}

int Karel::karel_pos(int x, int y, int d) // same here as above
{
	std::cout<<"x ";
	std::cin>>x;
	std::cout<<"y ";
	std::cin>>y;
	std::cout<<"d ";
	std::cin>>d;

	return x, y, d;
}

int Karel::karel_beeper(int b)
{
	std::cout<<"b ";
	std::cin>>b;

	return b;
}

int Karel::get_xy(int x, int y)
{
	std::cout<<"x ";
	std::cin>>x;
	std::cout<<"y ";
	std::cin>>y;

	return x, y;
}

int Karel::get_d(int d)
{
	std::cout<<"d ";
	std::cin>>d;

	return d;
}

int Karel::get_b(int b)
{
	std::cout<<"b ";
	std::cin>>b;

	return b;
}

Karel::~Karel()
{
}