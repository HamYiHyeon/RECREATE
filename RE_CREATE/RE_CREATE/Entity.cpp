#include "Entity.h"

void Entity::showInfo() {
	std::cout
		<< "Ŭ����: " << name << "\tü��: " << hp << "\t������: " << dmg << std::endl
		<< "���: ";
	for (int i = 0; i < 2; i++) {
		acc[i]->showInfo();
		if (i == 0) std::cout << " / ";
	}
}