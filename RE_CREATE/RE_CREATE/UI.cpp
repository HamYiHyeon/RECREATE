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
		cout << endl << "1:�����ϱ�, 2:�����ϱ� >> ";
		i = 1; cout << i << endl;//�ӽ÷� 1 ���� //cin >> i;
		if(i != 1 && i != 2) cout << "�ٽ� �Է����ּ���" << endl;
	}
	return i;
}

int UI::CharChoice() {
	while (1) {
		int i = rdfunc(3);
		cout << "ĳ���� �������ּ���" << endl;
		cout << "1:����, 2:����, 3:��Ŀ >> " << i << endl;
		//�ӽ÷� ���� cin >> i;
		switch (i) {
		case 1:
			cout << "���� �����ϼ̽��ϴ�" << endl;
			break;
		case 2:
			cout << "���� �����ϼ̽��ϴ�" << endl;
			break;
		case 3:
			cout << "��Ŀ �����ϼ̽��ϴ�" << endl;
			break;
		default:
			cout << "�ٽ� �������ּ���" << endl;
		}
		if (i >= 1 && i <= 3) return i;
	}
}

void UI::ShowState() {
	cout << endl << "�÷��̾� ����â" << endl;
	cout << "�ൿ��: " << Player::act << endl;
	cout << "ĳ�� ��: " << Player::charNum << endl;
	int n = 0;
	cout << "���� ��ġ: " << Player::loc->floor << "-" << Player::loc->stage << "�� "
		<< Player::loc->biome << " ���� " << endl;
	cout << "���� ĳ��:";
	while (n < Player::charNum) {
		cout << endl << endl;
		Player::cha[n]->showInfo();
		n++;
	}
	cout << endl << "�κ��丮: ";
	cout << endl;
	Player::inven->showInfo();
}