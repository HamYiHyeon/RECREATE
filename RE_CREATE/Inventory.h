#pragma once
#include "Item.h"

//�κ��丮 Ŭ����
class Inventory {
	int rows = 5;//�� ũ��
	int cols = 5;//�� ũ��
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
	void InsertItem();//�κ��丮�� ������ �ֱ�
	void DeleteItem();//�κ��丮���� ������ ����
};