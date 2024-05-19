#include "Player.h"
#include "CharClass.h"
#include <iostream>

void Player::SetChar(int i) {
	switch (i) {
	case 1:
		cha[charNum++] = new Dealer();
		break;
	case 2:
		cha[charNum++] = new Healer();
		break;
	case 3:
		cha[charNum++] = new Tanker();
		break;
	}
}