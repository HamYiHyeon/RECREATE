#pragma once
#include "Entity.h"
#include "Location.h"
#include "Inventory.h"

//플레이어 클래스
class Player {
public:
	static int act;//행동력
	static int charNum;//캐릭 수
	static Inventory* inven;//인벤토리
	static Entity* cha[3];
	static Location* loc;

	Player(){}
	static void ActReset() { act = 10; }
	static void SetChar(int i);
	static void showInfo(int n);
};
