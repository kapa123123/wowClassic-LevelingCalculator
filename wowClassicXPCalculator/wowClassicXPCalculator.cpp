#include <iostream>
#include <iostream>

void input();

int main()
{
	input();
}


void input()
{
	int currXP; //Users Current XP
	int highestXP; //XP Needed to Level
	int xpPerKill; //XP Gained farming individual Mob
	int mobCount; //How many mobs need to be killed to ding
	
	std::cout << "Please Input your current XP " << "\n" << ">>";
	std::cin >> currXP;

	std::cout << "Please Input your Needed XP" << "\n" << ">>";
	std::cin >> highestXP;

	system("CLS");

	std::cout << "Please Input your XP Per Kill " << "\n" << ">>";
	std::cin >> xpPerKill;

	system("CLS");

	int neededXP = highestXP - currXP;
	mobCount = neededXP / xpPerKill;

	std::cout << mobCount;
	


};