#include "Entity.h"

void Entity::showInfo() {
	std::cout
		<< "클래스: " << name << "\t체력: " << hp << "\t데미지: " << dmg << std::endl
		<< "장비: ";
	for (int i = 0; i < 2; i++) {
		acc[i]->showInfo();
		if (i == 0) std::cout << " / ";
	}
}