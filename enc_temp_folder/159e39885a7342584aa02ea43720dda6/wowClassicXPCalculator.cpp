#include <iostream>

void input();


int main()
{
	input();
}


void input()
{
	int currXp; //Users Current XP
	int highestXp; //XP Needed to Level
	int xpPerKill; //XP Gained farming individual Mob
	int mobCount; //How many mobs need to be killed to ding
	

	std::cout << "Please Input your current XP " << "\n" << ">>";
	std::cin >> currXp;

	std::cout << "Please Input your Needed XP" << "\n" << ">>";
	std::cin >> highestXp;

	system("CLS");

	std::cout << "Please Input your XP Per Kill " << "\n" << ">>";
	std::cin >> xpPerKill;

	system("CLS");

	int neededXP = highestXp - currXp;
	mobCount = neededXP / xpPerKill;

	std::cout << mobCount;

	//Calculate time taken 
	//Include Professions Calculator
};
