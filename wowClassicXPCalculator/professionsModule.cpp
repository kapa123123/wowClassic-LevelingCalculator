#include "professionsModule.h"
#include <iostream>

void professions::pInput()
{
	int menuProf = 0;
	std::cout << "Please input your selected Profession" << std::endl;
	std::cout << "\n ";
	std::cout << "1 - Herbalism \n 2 - Skinning \n >> ";
	std::cin >> menuProf;

	switch (menuProf)
	{
	case 1:
		system("CLS");

		std::cout << "You have chosen Herbalism. Loading now" << std::endl;
		break;


	case 2:
		system("CLS");

		std::cout << "You have chosen Skinning. Loading now";
		break;
	}
};

void professions::pCalculation()
{

};

void p_Herb::library()
{

};