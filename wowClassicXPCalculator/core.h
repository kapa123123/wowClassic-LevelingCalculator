#pragma once
class core
{
public:
	int currentXP; //Users Current XP
	int highestXP; //XP Needed to Level
	int xpPerKill; //XP Gained farming individual Mob
	int mobCount; //How many mobs need to be killed to ding

	void xpInput();
	void xpCalculation();

	
};

class profCalc
{
public:
	int profXP; //Current XP
	int highestXP; //Needed XP
	int xpDatabase; //storing values to lvl
	char chosenProf; //Name the profession 

	void profInput();
	void profCalculation();
};