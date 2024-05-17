#include <iostream>
#include "Inventory.h"


void Inventory::showInfo() {
	for (int i = 0; i < rows; ++i) {
		std::cout << "+---------------+---------------+---------------+---------------+---------------+" << std::endl << "|";
		for (int j = 0; j < cols; ++j) {
			acc[i][j].showInfo();
			std::cout << "\t|";
		}
		std::cout << std::endl;
	}
	std::cout << "+---------------+---------------+---------------+---------------+---------------+" << std::endl;
}
void Inventory::InsertItem() {}
void Inventory::DeleteItem() {}