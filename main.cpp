/*****************************************
*	Memory conversion program in which
*	user inputs a number what type of 
*	memory is currently set and will 
* 	convert it to a desired memory
*	Author: LXIV
*	Version: 1.0.0
*****************************************/
#include <iostream>
#include "conversion.h"

/**********************************
*   Function that handles calling *
*   functions and exiting program *
*   also contains object of class *
*   menu_conversion               *
***********************************/
int main()
{
	bool quit;//Bool that handles exiting of program
    menu_conversion my_conversion;//Creating instance of menu_conversion
    //Program Title
    std::cout<< "Memory Conversion" << std::endl;
    std::cout<< "Created by: LXIV" << std::endl;
    std::cout<< "\n";
    do
    {
    	quit = my_conversion.menu();//Calls menu function
    	if(quit == false)
    	{
    		my_conversion.converting();//Calling conversion function
    	}//If statement occurs if menu returns false meaning user doesn't want to quit program
    }while(quit != true);//Loop that runs until quit is set to true
 return 0;
}
