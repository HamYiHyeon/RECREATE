#include "Location.h"

void Location::MoveFloor() {
	if (floor < 6) biome = "�縷";
	else if (floor < 9) biome = "����";
	else if (floor >= 10) biome = "����";
}
void Location::MoveStage() {
	if (stage >= 3) {
		stage = 0;
		floor++;
		MoveFloor();
	}
	else stage++;
}