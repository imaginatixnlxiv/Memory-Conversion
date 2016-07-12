//Implementations of functions declared in conversion.h
#include <iostream>
#include <string>
#include "conversion.h"
/***************************************
*	Function that handles menu         *
*	this function includes choosing    *
*	type of memory and inputting size  *
*	returns bool that either continues *
* 	program or ends it                 *
****************************************/
bool menu_conversion::menu()
{
	bool exit = false;//Flag
	char user_choice;//User Input for type of memory
	bool passed = NULL;//Flag
	char forbidden[22] = {'F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};//Forbidden inputs
	while(exit != true)
	{
		std::cout << "A) Input Conversion" << std::endl;
		std::cout << "B) Quit Program" << std::endl;
		std::cout <<"NOTE: menu is CASE SENSITIVE" << std::endl;
		std::cin >> user_choice;
		if(user_choice == 'A')
		{
			std::cout<< std::string(50, '\n');//"Clearing" screen
			do
			{
				std::cout << "Input the current memory state" << std::endl;
				std::cout << "A)Byte" << std::endl;
				std::cout << "B)Kilobyte" << std::endl;
				std::cout << "C)Megabyte" << std::endl;
				std::cout << "D)Gigabyte" << std::endl;
				std::cout << "E)Quit Program" << std::endl;
				std::cin >> current_state;
				/*Testing input if current_state is equal to any
				  Option above passed is equal to true and user
				  exits loop
				  if it isn't then it doesn't pass and user must input again
				*/
				if(current_state == 'A')
					passed = true;
				else if(current_state == 'B')
					passed = true;
				else if(current_state == 'C')
					passed = true;
				else if(current_state == 'D')
					passed = true;
				else if(current_state == 'E')
					passed = true;
				else
				{
					passed = false;
					std::cout<< "ERROR INPUT INVALID" << std::endl;
					std::cout<< "INPUT AGAIN" << std::endl;
				}
			}while(passed == false);//If user enters a non-forbidden char they will exit the loop
			if(current_state == 'E')
			{
				return true;
			}	
			else
			{
				std::cout<<"Input size" << std::endl;
				std::cin>>size;
				return false;
			}
		}
		else
		{
			return true;
		}
	}
}
/************************************
*	Function that handles conversion*
*	and output of converted values  *
*************************************/
void menu_conversion::converting()
{
	float byte;//Size converted to byte
	float kilobyte;//Size converted to kilobyte
	float megabyte;//Size converted to megabyte
	float gigabyte;//Size converted to gigabyte
	if(current_state == 'A')
	{
		//Calculations
		kilobyte = size / 1000;
		megabyte = size / 1000000;
		gigabyte = size / 1000000000;
		//Output
		std::cout<<"KiloByte: " << kilobyte << std::endl;
		std::cout<<"MegaByte: " << megabyte << std::endl;
		std::cout<<"GigaByte: " << gigabyte << std::endl;
	}//Calculations for if current state is A which is a Byte
	else if(current_state == 'B')
	{
		//Calculations
		byte = size * 1000;
		megabyte = size / 1000;
		gigabyte = size / 1000000;
		//Output
		std::cout<<"Byte: " << byte << std::endl;
		std::cout<<"MegaByte: " << megabyte << std::endl;
		std::cout<<"GigaByte: " << gigabyte << std::endl;
	}//Calculations for if current state is B which is a kilobyte
	else if(current_state == 'C')
	{
		//Calculations
		byte = size * 1000000;
		kilobyte = size * 1000;
		gigabyte = size / 1000;
		//Output
		std::cout<<"Byte: " << byte << std::endl;
		std::cout<<"KiloByte: " << kilobyte << std::endl;
		std::cout<<"GigaByte: " << gigabyte << std::endl; 
	}//Calculations for if current state is C which is a mega byte
	else if(current_state == 'D')
	{
		//Calculations
		byte = size * 1000000000;
		kilobyte = size * 1000000;
		megabyte = size * 1000;
		//Output
		std::cout<<"Byte: " << byte << std::endl;
		std::cout<<"KiloByte: " << kilobyte << std::endl;
		std::cout<<"MegaByte: " << Megabyte << std::endl;
	}//Calculations for if current state is D which is a gigabyte
}