#include "core.h"
#include <iostream>

void core::input()
{
	std::cout << "Please Input your current XP " << "\n" << ">>";
	std::cin >> currentXP;

	std::cout << "Please Input your Needed XP" << "\n" << ">>";
	std::cin >> highestXP;

	system("CLS");

	std::cout << "Please Input your XP Per Kill " << "\n" << ">>";
	std::cin >> xpPerKill;

	system("CLS");

	int neededXP = highestXP - currentXP;
	mobCount = neededXP / xpPerKill;

	std::cout << mobCount;
};

void core::calculation()
{

};