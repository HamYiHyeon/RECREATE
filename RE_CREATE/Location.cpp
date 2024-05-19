#include "Location.h"

void Location::MoveFloor() {
	if (floor < 6) biome = "사막";
	else if (floor < 9) biome = "빙하";
	else if (floor >= 10) biome = "공허";
}
void Location::MoveStage() {
	if (stage >= 3) {
		stage = 0;
		floor++;
		MoveFloor();
	}
	else stage++;
}