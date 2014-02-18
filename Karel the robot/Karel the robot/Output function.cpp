// Output function.cpp

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

std::ofstream output_file; // place holder names

// no namespace for flexablity

void output() // gets the output for the program
{
	
	char ans;

    std::cout<<"Would you like that to be saved to a file? (y for yes)"; //this can be removed or changed if need be
	std::cin>>ans;
	if (ans == 'y' || ans == 'Y') //saves the data to a file
	{
		std::string outputf;


		std::cout<<"Please specify the file to save it to(up to 16 charecters): ";
		std::cin>>outputf;
		output_file.open(outputf); //appends file doesn't delete
		for(int i = 1;i <= 2; i++) //change to make it more flexible
		{
		   if (i == 1)
		   {
			  // output_file<<Karel(x,y,d,b); //that will complain until we build the rest of the program
		   }
		   else
		   {
			   //output the world data here
		   }
		}

		output_file.close();
		
		ans = 'q';
	}
}