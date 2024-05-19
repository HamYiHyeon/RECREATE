#pragma once
#include "Item.h"

//인벤토리 클래스
class Inventory {
	int rows = 5;//행 크기
	int cols = 5;//열 크기
	ConsumableItem* con = NULL;
	Accessory** acc = NULL;
public:
	Inventory() { 
		acc = new Accessory*[rows];
		for (int i = 0; i < rows; i++) {
			acc[i] = new Accessory[cols];
		}
	}
	void showInfo();
	void InsertItem();//인벤토리에 아이템 넣기
	void DeleteItem();//인벤토리에서 아이템 제거
};