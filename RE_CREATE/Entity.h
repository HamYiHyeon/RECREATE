#pragma once
#include <string>
#include "Item.h"

class Entity {
protected:
    std::string name;
    int hp;
    int dfs;
    int dmg;
    Accessory* acc[2] = { nullptr, nullptr };
public:
    Entity() {
        name = "(알수없음)", hp = 0; dfs = 0; dmg = 0;
        for (int i = 0; i < 2; i++) acc[i] = new Accessory();
    }
    void showInfo();
};