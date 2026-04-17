// BjarneLearningCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <C:\Users\Davon.Daniels\source\repos\BjarneLearningCPP\std_lib_facilities.h>

int main() 
{
	std::cout << "Enter the name of the person you want to write to \n";
	std::string first_name;
	std::string friend_name;
	std::cin >> first_name;
	std::cout << "Dear " << first_name << ",\n";
	std::cout << " Its been quite awhile since I have seen you! \n";
	std::cout << " How are you doing my friend! \n";
	std::cout << " Its been atleast 8 years since we have spoken. What is your bestfriends name? \n";
	std::cin >> friend_name;
	std::cout << " Have you seen " << friend_name << " lately? \n";
	char friend_sex = 0;
	std::cout << " Can you please enter m if " << friend_name << " is a male " << " and f for female? \n";
	std::cin >> friend_sex;
	if (friend_sex == 'm') 
	{
		std::cout << "If you see " << friend_name << " Please ask him to call me. \n";
	}
	else if (friend_sex == 'f') 
	{
		std::cout << " If you see " << friend_name << " please ask her to call me. \n";
	}
	int age;
	std::cout << " How old is " << friend_name << std::endl;
	std::cin >> age;
	if (age <= 0 || age >= 110 ) 
	{
		simple_error("you're kidding!");
	}
	else if (age < 12) 
	{
		std::cout << "Next year you will be " << age + 1 << std::endl;
	}
	else if (age == 17) 
	{
		std::cout << " Next year you will be able to vote " << std::endl;
	}
	else if (age > 70) 
	{
		std::cout << " I hope you are enjoying retirement " << std::endl;
	}

	std::cout << "Yours sincerely, " << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "David Jackson";
}
