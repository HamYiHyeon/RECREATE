#include <iostream>
#include "UI.h"
#include "Player.h"
#include "rdfunc.h"
using namespace std;

void UI::MainLogo() {
	cout << endl << endl
		<< "\t\t     ## ###   #######             ####   ## ###   #######    ###    ######   ####### " << endl
		<< "\t\t      ###  ##   ##   #            ##  ##  ###  ##   ##   #   ## ##   # ## #    ##   #" << endl
		<< "\t\t      ##   ##   ##        ##     ##       ##   ##   ##      ##   ##    ##      ##	" << endl
		<< "\t\t      ######    ####      ##     ##       ######    ####    #######    ##      ####  " << endl
		<< "\t\t      ## ##     ##               ##       ## ##     ##      ##   ##    ##      ##    " << endl
		<< "\t\t      ##  ###   ##   #    ##      ##  ##  ##  ###   ##   #  ##   ##    ##      ##   #" << endl
		<< "\t\t      ##   ##  #######    ##       ####   ##   ##  #######  ##   ##   ####    #######"
		<< endl << endl;
}

void UI::MainLobby() {
	UI::MainLogo();

	switch (UI::Start()) {
	case 1:
		for(int i =0;i<3;i++) Player::SetChar(UI::CharChoice());
		//Player::SetChar(UI::CharChoice());
		break;
	case 2:
		return;
	}

	UI::ShowState();
}

int UI::Start() {
	int i = NULL;

	while (i != 1 && i != 2) {
		cout << endl << "1:시작하기, 2:종료하기 >> ";
		i = 1; cout << i << endl;//임시로 1 설정 //cin >> i;
		if(i != 1 && i != 2) cout << "다시 입력해주세요" << endl;
	}
	return i;
}

int UI::CharChoice() {
	while (1) {
		int i = rdfunc(3);
		cout << "캐릭터 선택해주세요" << endl;
		cout << "1:딜러, 2:힐러, 3:탱커 >> " << i << endl;
		//임시로 랜덤 cin >> i;
		switch (i) {
		case 1:
			cout << "딜러 선택하셨습니다" << endl;
			break;
		case 2:
			cout << "힐러 선택하셨습니다" << endl;
			break;
		case 3:
			cout << "탱커 선택하셨습니다" << endl;
			break;
		default:
			cout << "다시 선택해주세요" << endl;
		}
		if (i >= 1 && i <= 3) return i;
	}
}

void UI::ShowState() {
	cout << endl << "플레이어 상태창" << endl;
	cout << "행동력: " << Player::act << endl;
	cout << "캐릭 수: " << Player::charNum << endl;
	int n = 0;
	cout << "현재 위치: " << Player::loc->floor << "-" << Player::loc->stage << "층 "
		<< Player::loc->biome << " 지역 " << endl;
	cout << "보유 캐릭:";
	while (n < Player::charNum) {
		cout << endl << endl;
		Player::cha[n]->showInfo();
		n++;
	}
	cout << endl << "인벤토리: ";
	cout << endl;
	Player::inven->showInfo();
}