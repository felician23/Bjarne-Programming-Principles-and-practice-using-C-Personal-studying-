#include <iostream>
#include <string>
#include <stdexcept>
#include <array>
#include <cstdlib>
#include <algorithm>


int main()
{
	// Get the users age in Months account for floating point values. Ex. 5.5 year old kid. 
	double age;
	std::string first_name = "???";
	std::cout << "Please enter your first_name and age: \n" << std::endl;
	std::cin >> first_name >> age;
	age = age * 12.0;
	std::cout << "Hello, " << first_name << " (age " << age << ")\n";

}