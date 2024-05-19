#pragma once
#include <iostream>

//아이템 부모 클래스
class Item {
protected:
	std::string name = "";//아이템 이름
	int increase_hp = 0;//증가되는 체력
	int increase_dmg = 0;//증가되는 데미지
public:
	Item() {}
	virtual void ApplyState();//캐릭터에게 아이템 효과 적용
	virtual void RemoveState();//효과 해제
	virtual void DeleteItem();//아이템 삭제
	virtual void showInfo() = 0;
};

//아이템 클래스 상속 받은 악세서리 클래스
class Accessory : public Item {
	int part = 0;//목걸이 or 반지
public:
	Accessory(std::string name = "(비어 있음)", int part = 0, int hp = 0, int dmg = 0) {
		this->name = name; this->part = part; this->increase_hp = hp; this->increase_dmg = dmg;
	}
	void Install();//장비 장착
	void Release();//장비 해제
	void showInfo();
};

//아이템 클래스 상속 받은 소모성 아이템 클래스
class ConsumableItem : public Item {
	int kind = NULL;//아이템 종류
	int increase_act = 0;//행동력 1 증가
public:
	ConsumableItem(int kind, int percent);
	void Consume();//소모성 아이템 사용
};