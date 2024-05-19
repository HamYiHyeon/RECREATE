#pragma once
#include <iostream>

//������ �θ� Ŭ����
class Item {
protected:
	std::string name = "";//������ �̸�
	int increase_hp = 0;//�����Ǵ� ü��
	int increase_dmg = 0;//�����Ǵ� ������
public:
	Item() {}
	virtual void ApplyState();//ĳ���Ϳ��� ������ ȿ�� ����
	virtual void RemoveState();//ȿ�� ����
	virtual void DeleteItem();//������ ����
	virtual void showInfo() = 0;
};

//������ Ŭ���� ��� ���� �Ǽ����� Ŭ����
class Accessory : public Item {
	int part = 0;//����� or ����
public:
	Accessory(std::string name = "(��� ����)", int part = 0, int hp = 0, int dmg = 0) {
		this->name = name; this->part = part; this->increase_hp = hp; this->increase_dmg = dmg;
	}
	void Install();//��� ����
	void Release();//��� ����
	void showInfo();
};

//������ Ŭ���� ��� ���� �Ҹ� ������ Ŭ����
class ConsumableItem : public Item {
	int kind = NULL;//������ ����
	int increase_act = 0;//�ൿ�� 1 ����
public:
	ConsumableItem(int kind, int percent);
	void Consume();//�Ҹ� ������ ���
};