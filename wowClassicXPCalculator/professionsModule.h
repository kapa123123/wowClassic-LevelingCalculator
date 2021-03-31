#pragma once

class professions
{
public:
	int profXP; //Current XP
	int highestXP; //Needed XP
	int xpDatabase; //storing values to lvl
	char chosenProf; //Name the profession 

	void pInput();
	void pCalculation();

};