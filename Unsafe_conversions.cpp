// BjarneLearningCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <C:\Users\Davon.Daniels\source\repos\BjarneLearningCPP\std_lib_facilities.h>

int main() 
{
	//Unsafe conversions casting int into char or "Narrowing Conversions Ex: Try 56, 89, 128, 1000
	double d = 0;
	while (std::cin >> d) 
	{
		int i = d;
		char c = i;
		int i2 = c;
		std::cout << "d==" << d
			<< "i==" << i
			<< "i2==" << i2
			<< "char(" << c << "\n";
	}
}
