#pragma once
#ifndef Dice_h
#define Dice_h
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


class Dice {
public:
	Dice(int sides);
	Dice();
	int Roll();
	int GetRolls();
	int GetSides();
	

private:
	int NumSides;
	int NumRolls;




};







#endif // !1
