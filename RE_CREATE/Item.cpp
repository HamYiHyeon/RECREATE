#include "Item.h"
#include <iostream>

void Item::ApplyState() {}//캐릭터에게 아이템 효과 적용
void Item::RemoveState() {}//효과 해제
void Item::DeleteItem() {}//아이템 삭제
void Item::showInfo() {}

void Accessory::Install() {}//장비 장착
void Accessory::Release() {}//장비 해제
void Accessory::showInfo() {
	std::cout << name;
}


ConsumableItem::ConsumableItem(int kind, int percent) {}
void ConsumableItem::Consume() {}//소모성 아이템 사용