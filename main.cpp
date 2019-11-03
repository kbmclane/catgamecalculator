/*
Author: Katie McLane
The purpose of this program is to calculate 
*/

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int * stringCraft(int count) {
	int cottonCost = 3 * count;
	int cost = 50;
	if (count > 1) {
		for (int i = 2; i <= count; i++) {
			cost += 25 * (i + 1);
		}
	}
	static int returnArr[2] = { cost, cottonCost };
	return returnArr;
}
//int returnArr[2] = { cost, cottonCost };

int * woodCraft(int count) {
	int logCost = 3 * count;
	int cost = 50;
	if (count > 1) {
		for (int i = 2; i <= count; i++) {
			cost += 25 * (i + 1);
		}
	}
	static int returnArr[2] = { cost, logCost };
	return returnArr;
};
//int returnArr[2] = { cost, logCost };

int * ribbonCraft(int count) {
	int cost = 100;
	if (count > 1) {
		for (int i = 2; i <= count; i++) {
			cost += 50 * (i + 1);
		}
	}
	int *stringCost = stringCraft(count * 2);
	int *woodCost = woodCraft(count * 2);
	cost += stringCost[0];
	cost += woodCost[0];
	static int returnArr[3] = {cost, stringCost[1],  woodCost[1]};
	return returnArr;
};
//int returnArr[3] = { cost, stringCost[1],  woodCost[1] };

int * metalCraft(int count) {
	int cost = 100;
	if (count > 1) {
		for (int i = 2; i <= count; i++) {
			cost += 50 * (i + 1);
		}
	}
	int rockCost = 3 * count;
	static int returnArr[2] = {cost, rockCost};
	return returnArr;
};
//int returnArr[2] = { cost, rockCost };

int * needleCraft(int count) {
	int cost = 200;
	if (count > 1) {
		for (int i = 2; i <= count; i++) {
			cost += 100 * (i + 1);
		}
	}
	int * ribbonCost = ribbonCraft(count);
	int * metalCost = metalCraft(count * 4);
	cost += ribbonCost[0];
	cost += metalCost[0];
	static int returnArr[4] = {cost, ribbonCost[1], ribbonCost[2], metalCost[1]};
	return returnArr;
};
//int returnArr[4] = {cost, ribbonCost[1], ribbonCost[2], metalCost[1]};

int * sparkleCraft(int count) {
	int cost = 300;
	if (count > 1) {
		for (int i = 2; i <= count; i++) {
			cost += 150 * (i + 1);
		}
	}
	int * ribbonCost = ribbonCraft(count * 2);
	int * needleCost = needleCraft(count * 2);
	int totalCotton = ribbonCost[1] + needleCost[1];
	int totalLog = ribbonCost[2] + needleCost[2];
	static int returnArr[4] = {cost, totalCotton, totalLog, needleCost[3]};
	return returnArr;
};
//int returnArr[4] = { cost, totalCotton, totalLog, needleCost[3] };

int * bronzeCraft(int count) {
	int cost = 200;
	if (count > 1) {
		for (int i = 2; i <= count; i++) {
			cost += 100 * (i + 1);
		}
	}
	int rockCost = count * 4;
	static int returnArr[2] = {cost, rockCost};
	return returnArr;
};
//int returnArr[2] = { cost, rockCost };

int * silverCraft(int count) {
	int cost = 300;
	if (count > 1) {
		for (int i = 2; i <= count; i++) {
			cost += 150 * (i + 1);
		}
	}
	int * sparkleCost = sparkleCraft(count);
	int * bronzeCost = bronzeCraft(count * 3);
	cost += sparkleCost[0];
	cost += bronzeCost[0];
	int totalRock = bronzeCost[1] + sparkleCost[3];
	static int returnArr[4] = {cost, sparkleCost[1], sparkleCost[2], totalRock};
	return returnArr;
};
//int returnArr[4] = { cost, sparkleCost[1], sparkleCost[2], totalRock };

int * goldCraft(int count) {
	int cost = 500;
	if (count > 1) {
		for (int i = 2; i <= count; i++) {
			cost += 250 * (i + 1);
		}
	}
	int * silverCost = silverCraft(count * 2);
	int * sparkleCost = sparkleCraft(count * 2);
	cost += sparkleCost[0];
	cost += silverCost[0];
	int totalCotton = sparkleCost[1] + silverCost[1];
	int totalLog = sparkleCost[2] + silverCost[2];
	int totalRock = sparkleCost[3] + silverCost[3];
	static int returnArr[4] = { cost, totalCotton, totalLog, totalRock };
	return returnArr;
};
//	int returnArr[4] = { cost, totalCotton, totalLog, totalRock };

int * amethystCraft(int count) {
	int cost = 300;
	if (count > 1) {
		for (int i = 2; i <= count; i++) {
			cost += 150 * (i + 1);
		}
	}
	int quartzCost = count * 10;
	static int returnArr[2] = { cost, quartzCost };
	return returnArr;
};
//int returnArr[2] = { cost, quartzCost };

int * pendantCraft(int count) {
	int cost = 500;
	if (count > 1) {
		for (int i = 2; i <= count; i++) {
			cost += 250 * (i + 1);
		}
	}
	int * silverCost = silverCraft(count * 2);
	int * amethystCost = amethystCraft(count *7);
	cost += silverCost[0];
	cost += amethystCost[0];
	static int returnArr[5] = { cost, silverCost[1], silverCost[2], silverCost[3], amethystCost[1] };
	return returnArr;
};
//int returnArr[5] = { cost, silverCost[1], silverCost[2], silverCost[3], amethystCost[1] };

int * necklaceCraft(int count) {
	int cost = 800;
	if (count > 1) {
		for (int i = 2; i <= count; i++) {
			cost += 400 * (i + 1);
		}
	}
	int * goldCost = goldCraft(count * 2);
	int * pendantCost = pendantCraft(count * 3);
	cost += goldCost[0];
	cost += pendantCost[0];
	int totalCotton = goldCost[1] + pendantCost[1];
	int totalLog = goldCost[2] + pendantCost[2];
	int totalRock = goldCost[3] + pendantCost[3];
	static int returnArr[5] = { cost,  totalCotton, totalLog, totalRock, pendantCost[4]};
	return returnArr;
};
//	int returnArr[5] = { cost,  totalCotton, totalLog, totalRock, pendantCost[4]};

int * orbCraft(int count) {
	int cost = 300;
	if (count > 1) {
		for (int i = 2; i <= count; i++) {
			cost += 150 * (i + 1);
		}
	}
	int quartzCost = count * 20;
	static int returnArr[2] = { cost, quartzCost };
	return returnArr;
};
//int returnArr[2] = { cost, quartzCost };

int * waterCraft(int count) {
	int cost = 800;
	if (count > 1) {
		for (int i = 2; i <= count; i++) {
			cost += 400 * (i + 1);
		}
	}
	int * silverCost = silverCraft(count);
	int * orbCost = orbCraft(2 * count);
	cost += silverCost[0];
	cost += orbCost[0];
	static int returnArr[5] = { cost, silverCost[1], silverCost[2], silverCost[3],  orbCost[1]};
	return returnArr;
};
//int returnArr[5] = { cost, silverCost[1], silverCost[2], silverCost[3],  orbCost[1]};

int * fireCraft(int count) {
	int cost = 1000;
	if (count > 1) {
		for (int i = 2; i <= count; i++) {
			cost += 500 * (i + 1);
		}
	}
	int * goldCost = goldCraft(count);
	int * orbCost = orbCraft(6 * count);
	cost += goldCost[0];
	cost += orbCost[0];
	static int returnArr[5] = {cost, goldCost[1], goldCost[2], goldCost[3], orbCost[1]};
	return returnArr;
};
//int returnArr[5] = {cost, goldCost[1], goldCost[2], goldCost[3], orbCost[1]};

int main()  {
	string restartTrig = "";
	cout << "Welcome to the Cat Game deco calculator!" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl; 
	while (restartTrig != "q"){
		int userInput = 0;
		int decoCost = 0;
		int count = 0;
		int totalCost = 0;
		int totalCotton = 0;
		int totalLog = 0;
		int totalRock = 0;
		int totalQuartz = 0;
		int * resourceArr = {};
		while (userInput != -1) {
			cout << "What does your deco need?" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << " 1: String    |  2: Wood    |  3: Ribbon" << endl;
			cout << " 4: Metal     |  5: Needles |  6: Sparkles" << endl;
			cout << " 7: Bronze    |  8: Silver  |  9: Gold" << endl;
			cout << "10: Amethyst  | 11: Pendant | 12: Necklace" << endl;
			cout << "13: Orb       | 14: Water   | 15: Fire" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "Enter your selection (-1 to finish): ";
			cin >> userInput;
			if (userInput == -1) {
				break;
			}
			cout << "How many? ";
			cin >> count;
			switch (userInput) {
			case 1: //String
				resourceArr = stringCraft(count);
				totalCost += resourceArr[0];
				totalCotton += resourceArr[1];
				break;
			case 2: //Wood
				resourceArr = woodCraft(count);
				totalCost += resourceArr[0];
				totalLog += resourceArr[1];
				break;
			case 3: //Ribbon
				resourceArr = ribbonCraft(count);
				totalCost += resourceArr[0];
				totalCotton += resourceArr[1];
				totalLog += resourceArr[2];
				break;
			case 4: //Metal
				resourceArr = metalCraft(count);
				totalCost += resourceArr[0];
				totalRock += resourceArr[1];
				break;
			case 5: //Needles
				resourceArr = needleCraft(count);
				totalCost += resourceArr[0];
				totalCotton += resourceArr[1];
				totalLog += resourceArr[2];
				totalRock += resourceArr[3];
				break;
			case 6: //Sparkles
				resourceArr = sparkleCraft(count);
				totalCost += resourceArr[0];
				totalCotton += resourceArr[1];
				totalLog += resourceArr[2];
				totalRock += resourceArr[3];
				break;
			case 7: //Bronze
				resourceArr = bronzeCraft(count);
				totalCost += resourceArr[0];
				totalRock += resourceArr[1];
				break;
			case 8: //Silver
				resourceArr = silverCraft(count);
				totalCost += resourceArr[0];
				totalCotton += resourceArr[1];
				totalLog += resourceArr[2];
				totalRock += resourceArr[3];
				break;
			case 9: //Gold
				resourceArr = goldCraft(count);
				totalCost += resourceArr[0];
				totalCotton += resourceArr[1];
				totalLog += resourceArr[2];
				totalRock += resourceArr[3];
				break;
			case 10: //Amethyst
				resourceArr = amethystCraft(count);
				totalCost += resourceArr[0];
				totalQuartz += resourceArr[1];
				break;
			case 11: //Pendant
				resourceArr = pendantCraft(count);
				totalCost += resourceArr[0];
				totalCotton += resourceArr[1];
				totalLog += resourceArr[2];
				totalRock += resourceArr[3];
				totalQuartz += resourceArr[4];
				break;
			case 12: //Necklace
				resourceArr = necklaceCraft(count);
				totalCost += resourceArr[0];
				totalCotton += resourceArr[1];
				totalLog += resourceArr[2];
				totalRock += resourceArr[3];
				totalQuartz += resourceArr[4];
				break;
			case 13: //Orb
				resourceArr = orbCraft(count);
				totalCost += resourceArr[0];
				totalQuartz += resourceArr[1];
				break;
			case 14: //Water
				resourceArr = waterCraft(count);
				totalCost += resourceArr[0];
				totalCotton += resourceArr[1];
				totalLog += resourceArr[2];
				totalRock += resourceArr[3];
				totalQuartz += resourceArr[4];
				break;
			case 15: //Fire
				resourceArr = fireCraft(count);
				totalCost += resourceArr[0];
				totalCotton += resourceArr[1];
				totalLog += resourceArr[2];
				totalRock += resourceArr[3];
				totalQuartz += resourceArr[4];
				break;
			default:
				totalCost = totalCost;
				totalCotton = totalCotton;
				totalLog = totalLog;
				totalRock = totalRock;
				totalQuartz = totalQuartz;
				resourceArr = {};
				break;
			}
			system("CLS");
		}
		cout << "How much does your deco cost to craft? ";
		cin >> decoCost;
		cout << endl;
		cout << endl;
		cout << "Deco Requirements" << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "Total Cotton Cost                | " << totalCotton << endl;
		cout << "Total Log Cost                   | " << totalLog << endl;
		cout << "Total Rock Cost                  | " << totalRock << endl;
		cout << "Total Quartz Cost                | " << totalQuartz << endl;
		cout << "Total Coin Cost (w/o deco cost)  | " << totalCost << endl;
		cout << "Total Coin Cost (w/ deco cost)   | " << (totalCost + decoCost) << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "The feature to calculate another deco is currently broken, please quit and re-open." << endl;
		cout << "Press Q then ENTER if you are done or press any letter then ENTER to calculate another Deco!" << endl;
		cin >> restartTrig;
		system("CLS");
	}
	cout << "Thank you so much for using my Cat Game Calculator!!" << endl;
	cout << "program by farfromtroof" << endl;
	cout << "Press Q and ENTER to quit." << endl;
	cin >> restartTrig;
}