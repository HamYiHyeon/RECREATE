#pragma once
#include <iostream>

class Skill {
	std::string name = "";
	double dmgRate = NULL;
	int act = NULL;
public:
	Skill(std::string name,int act, int dmgRate = 0) {
		this->name = name; this->dmgRate = dmgRate;	this->act = act;
	}
	void BuffSkill(int target, int duration, int percent) {}
	void DealSkill() {}
};