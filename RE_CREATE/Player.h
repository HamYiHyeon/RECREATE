#pragma once
#include "Entity.h"
#include "Location.h"
#include "Inventory.h"

//�÷��̾� Ŭ����
class Player {
public:
	static int act;//�ൿ��
	static int charNum;//ĳ�� ��
	static Inventory* inven;//�κ��丮
	static Entity* cha[3];
	static Location* loc;

	Player(){}
	static void ActReset() { act = 10; }
	static void SetChar(int i);
	static void showInfo(int n);
};
