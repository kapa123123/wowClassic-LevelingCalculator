#pragma once
class core
{
public:
	int currentXP; //Users Current XP
	int highestXP; //XP Needed to Level
	int xpPerKill; //XP Gained farming individual Mob
	int mobCount; //How many mobs need to be killed to ding

	void input();
	void calculation();

	
};

