#include "Item.h"
#include <iostream>

void Item::ApplyState() {}//ĳ���Ϳ��� ������ ȿ�� ����
void Item::RemoveState() {}//ȿ�� ����
void Item::DeleteItem() {}//������ ����
void Item::showInfo() {}

void Accessory::Install() {}//��� ����
void Accessory::Release() {}//��� ����
void Accessory::showInfo() {
	std::cout << name;
}


ConsumableItem::ConsumableItem(int kind, int percent) {}
void ConsumableItem::Consume() {}//�Ҹ� ������ ���