// BjarneLearningCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <C:\Users\Davon.Daniels\source\repos\BjarneLearningCPP\std_lib_facilities.h>

int main() 
{
	std::cout << "Welcome to the mileage converter " << std::endl;
	std::cout << "This program is designed to convert miles to kilometers. " << std::endl;
	std::cout << "To get started. Please enter the mile you would like to convert to kilometer: " << std::endl;
	
	double user_mile;
	std:cin >> user_mile;
	user_mile = user_mile * 1.609;

	std::cout << "Your conversion of miles to kilometers is: " << user_mile;
}


