// input function.cpp

#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>
#include "Karel.h"

std::ifstream input_file;  // place holder names

// no namespace for flexablity

int get_input() // gets the input for the program
{
	
	char ans;
	


    std::cout<<" input from file?"; // this can be removed if need be
	std::cin>>ans;
    if ( ans == 'y' )
	 {
		std::string inputf;

		std::cout<<"What is the name of the input file? (add .txt)\n";
		std::cin>>inputf;
		input_file.open(inputf);
		if (input_file.fail())
		{
			std::cout<<"open fail.";
			std::cin>>ans;
			exit(1);
		}
		for(int i = 1; i <= 2; i++)
		{
		   if (i == 1)
		   {
			   int temp[4];
			  for (int i = 1; i<=4;i++)
			  {
				  
				 input_file>>temp[i-1];


			  }

			  x = temp[0];
			  y = temp[1];
			  d = temp[2];
			  b = temp[3];


			   return x, y, d, b; 
	// return here to stop the loop, when we call the function again it will start at 2 and return world data

		   }
		   else
		   {
			   //input the world data here
		   }
		}
		// have to remember to close the inpute file at some point in the program
	}

	
	return 0;
}