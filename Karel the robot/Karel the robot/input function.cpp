// input function.cpp

#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>

std::ifstream input_file;  // place holder names

// no namespace for flexablity

void get_input() // gets the input for the program
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
			  //input karel data
		   }
		   else
		   {
			   //input the world data here
		   }
		}
		// have to remember to close the inpute file at some point in the program
	}

	

}