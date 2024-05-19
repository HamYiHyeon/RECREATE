#include <iostream>
#include <random>
#include <windows.h>
#include "Location.h"
#include "CharClass.h"
#include "Item.h"
#include "Entity.h"
#include "Inventory.h"
#include "Location.h"
#include "Player.h"
#include "Skill.h"
#include "UI.h"
using namespace std;

int Player::act = 10;
int Player::charNum = 0;
Entity* Player::cha[3];
Location* Player::loc = new Location();
Inventory* Player::inven = new Inventory();

int main() {
	UI::MainLobby();
}