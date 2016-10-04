#include "Dice.h"
#include <math.h>

Dice::Dice(int sides) {
	NumSides = sides;
	NumRolls = 0;

}

int Dice::Roll() {
	int Num = rand() % NumSides+1;
	NumRolls++;
	return Num;
}
int Dice::GetSides() {
	return NumSides;
}
int Dice::GetRolls() {
	return NumRolls;
}