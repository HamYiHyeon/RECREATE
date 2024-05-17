#pragma once
#include "Entity.h"

//name, act, dmgRate
class Dealer : public Entity {
public:
	Dealer() {
		name = "µô·¯"; hp = 100; dmg = 70;

	}
};
class Healer : public Entity {
public:
	Healer() {
		name = "Èú·¯"; hp = 70; dmg = 30;

	}
};
class Tanker : public Entity {
public:
	Tanker() {
		name = "ÅÊÄ¿"; hp = 150; dmg = 50;

	}
};