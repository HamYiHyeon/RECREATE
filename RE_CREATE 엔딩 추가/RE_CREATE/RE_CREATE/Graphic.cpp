#include "Graphic.h"

void gotoxy(int x, int y)
{
    COORD pos = { 2 * x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


void stage(int floor, int stage)
{
    int x = 20;
    int y = 4;

    gotoxy(x, y); cout << "┌───────┐";
    gotoxy(x, y + 1); cout << "│"; gotoxy(x + 4, y + 1); cout << "│";
    gotoxy(x, y + 2); cout << "│"; gotoxy(x + 4, y + 2); cout << "│"; gotoxy(x + 5, y + 2); cout << "────";
    gotoxy(x, y + 3); cout << "│"; gotoxy(x + 4, y + 3); cout << "│";
    gotoxy(x, y + 4); cout << "└───────┘";

    gotoxy(x + 7, y); cout << " ┌───────┐";
    gotoxy(x + 7, y + 1); cout << " │"; gotoxy(x + 11, y + 1); cout << " │";
    gotoxy(x + 7, y + 2); cout << " │"; gotoxy(x + 11, y + 2); cout << " │"; gotoxy(x + 12, y + 2); cout << " ────";
    gotoxy(x + 7, y + 3); cout << " │"; gotoxy(x + 11, y + 3); cout << " │";
    gotoxy(x + 7, y + 4); cout << " └───────┘";

    // 현재 위치
    gotoxy(x + 8, y + 7); cout << "지하 " << floor << "층";

    gotoxy(x + 15, y); cout << "┌───────┐";
    gotoxy(x + 15, y + 1); cout << "│"; gotoxy(x + 19, y + 1); cout << "│";
    gotoxy(x + 15, y + 2); cout << "│"; gotoxy(x + 19, y + 2); cout << "│";
    gotoxy(x + 15, y + 3); cout << "│"; gotoxy(x + 19, y + 3); cout << "│";
    gotoxy(x + 15, y + 4); cout << "└───────┘";

    // 현재 위치 활성화

    switch (stage)
    {

    case 1:
        now_stage1();
        break;
    
    case 2:
        now_stage2();
        break;

    case 3:
        
        now_stage3();
        break;

    default:
        break;
    }

}

// 현재 위치. 임시로 stage 내에 넣어놓음.
void now_stage1()
{
    int x = 21;
    int y = 4;
    // 스테이지1
    gotoxy(x, y + 2); cout << "\033[36mㅤ■\033[0m";
}
void now_stage2()
{
    int x = 21;
    int y = 4;
    // 스테이지2
    gotoxy(x + 7, y + 2); cout << "\033[36m ㅤ■\033[0m";
}
void now_stage3()
{
    int x = 21;
    int y = 4;
    // 스테이지3
    gotoxy(x + 15, y + 2); cout << "\033[36mㅤ■\033[0m";
}




// 시작 화면 아스키 아트
void start_ascii()
{
    int x = 17;
    int y = 4;

    gotoxy(x, y - 2); cout << "                  .       |         .    .";
    gotoxy(x, y - 1); cout << "            .  *         -*-          *";
    gotoxy(x, y); cout << "                 \\        |         /   .";
    gotoxy(x, y + 1); cout << ".    .            .      /^\\     .              .   ";
    gotoxy(x, y + 2); cout << "   *    |\\   /\\    /\\  / / \\ \\  /\\    /\\   /|    *";
    gotoxy(x, y + 3); cout << " .   .  |  \\ \\/ /\\ \\ / /     \\ \\ / /\\ \\/ /  | .     ";
    gotoxy(x, y + 4); cout << "         \\ | _ _\\/_ _ \\_\\_ _ /_/_ _\\/_ _ \\_/";
    gotoxy(x, y + 5); cout << "           \\  *  *  *   \\ \\/ /  *  *  *  /";
    gotoxy(x, y + 6); cout << "            ` ~ ~ ~ ~ ~  ~\\/~ ~ ~ ~ ~ ~ '";
}


// 틀
void frame()
{
    int x = 0;
    int y = 13;
    int z = 32;
    int q = 59;
    gotoxy(x, x); cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓";
    gotoxy(y + 3, x); cout << "┳"; gotoxy(q - 16, x); cout << "┳";
    gotoxy(x, x + 1); cout << "┃"; gotoxy(y + 3, x + 1); cout << "┃"; gotoxy(q - 16, x + 1); cout << "┃"; gotoxy(q, x + 1); cout << "┃";
    gotoxy(x, x + 2); cout << "┃"; gotoxy(y + 3, x + 2); cout << "┃"; gotoxy(q - 16, x + 2); cout << "┃"; gotoxy(q, x + 2); cout << "┃";
    gotoxy(x, x + 3); cout << "┃"; gotoxy(y + 3, x + 3); cout << "┃"; gotoxy(q - 16, x + 3); cout << "┃"; gotoxy(q, x + 3); cout << "┃";
    gotoxy(x, x + 4); cout << "┃"; gotoxy(y + 3, x + 4); cout << "┃"; gotoxy(q - 16, x + 4); cout << "┃"; gotoxy(q, x + 4); cout << "┃";
    gotoxy(x, x + 5); cout << "┃"; gotoxy(y + 3, x + 5); cout << "┃"; gotoxy(q - 16, x + 5); cout << "┃"; gotoxy(q, x + 5); cout << "┃";
    gotoxy(x, x + 6); cout << "┃"; gotoxy(y + 3, x + 6); cout << "┃"; gotoxy(q - 16, x + 6); cout << "┃"; gotoxy(q, x + 6); cout << "┃";
    gotoxy(x, x + 7); cout << "┃"; gotoxy(y + 3, x + 7); cout << "┃"; gotoxy(q - 16, x + 7); cout << "┃"; gotoxy(q, x + 7); cout << "┃";
    gotoxy(x, x + 8); cout << "┃"; gotoxy(y + 3, x + 8); cout << "┃"; gotoxy(q - 16, x + 8); cout << "┃"; gotoxy(q, x + 8); cout << "┃";
    gotoxy(x, x + 9); cout << "┃"; gotoxy(y + 3, x + 9); cout << "┃"; gotoxy(q - 16, x + 9); cout << "┃"; gotoxy(q, x + 9); cout << "┃";
    gotoxy(x, x + 10); cout << "┃"; gotoxy(y + 3, x + 10); cout << "┃"; gotoxy(q - 16, x + 10); cout << "┃"; gotoxy(q, x + 10); cout << "┃";
    gotoxy(x, x + 11); cout << "┃"; gotoxy(y + 3, x + 11); cout << "┃"; gotoxy(q - 16, x + 11); cout << "┃"; gotoxy(q, x + 11); cout << "┃";
    gotoxy(x, x + 12); cout << "┃"; gotoxy(y + 3, x + 12); cout << "┃"; gotoxy(q - 16, x + 12); cout << "┃"; gotoxy(q, x + 12); cout << "┃";
    gotoxy(x, y); cout << "┠━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┨";
    gotoxy(y + 3, y); cout << "┻"; gotoxy(q - 16, y); cout << "┻";
    gotoxy(x, y + 1); cout << "┃"; gotoxy(q, y + 1); cout << "┃";
    gotoxy(x, y + 2); cout << "┃"; gotoxy(q, y + 2); cout << "┃";
    gotoxy(x, y + 3); cout << "┃"; gotoxy(q, y + 3); cout << "┃";
    gotoxy(x, y + 4); cout << "┃"; gotoxy(q, y + 4); cout << "┃";
    gotoxy(x, y + 5); cout << "┃"; gotoxy(q, y + 5); cout << "┃";
    gotoxy(x, y + 6); cout << "┃"; gotoxy(q, y + 6); cout << "┃";
    gotoxy(x, y + 7); cout << "┃"; gotoxy(q, y + 7); cout << "┃";
    gotoxy(x, y + 8); cout << "┃"; gotoxy(q, y + 8); cout << "┃";
    gotoxy(x, y + 9); cout << "┃"; gotoxy(q, y + 9); cout << "┃";
    gotoxy(x, y + 10); cout << "┃"; gotoxy(q, y + 10); cout << "┃";
    gotoxy(x, y + 11); cout << "┃"; gotoxy(q, y + 11); cout << "┃";
    gotoxy(x, y + 12); cout << "┃"; gotoxy(q, y + 12); cout << "┃";
    gotoxy(x, y + 13); cout << "┃"; gotoxy(q, y + 13); cout << "┃";
    gotoxy(x, y + 14); cout << "┃"; gotoxy(q, y + 14); cout << "┃";
    gotoxy(x, y + 15); cout << "┃"; gotoxy(q, y + 15); cout << "┃";
    gotoxy(x, y + 16); cout << "┃"; gotoxy(q, y + 16); cout << "┃";
    gotoxy(x, y + 17); cout << "┃"; gotoxy(q, y + 17); cout << "┃";
    gotoxy(x, y + 18); cout << "┃"; gotoxy(q, y + 18); cout << "┃";
    gotoxy(x, z); cout << "┠━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┨";
    gotoxy(x, z + 1); cout << "┃"; gotoxy(q, z + 1); cout << "┃";
    gotoxy(x, z + 2); cout << "┃"; gotoxy(q, z + 2); cout << "┃";
    gotoxy(x, z + 3); cout << "┃"; gotoxy(q, z + 3); cout << "┃";
    gotoxy(x, z + 4); cout << "┃"; gotoxy(q, z + 4); cout << "┃";
    gotoxy(x, z + 5); cout << "┃"; gotoxy(q, z + 5); cout << "┃";
    gotoxy(x, z + 6); cout << "┃"; gotoxy(q, z + 6); cout << "┃";
    gotoxy(x, z + 7); cout << "┃"; gotoxy(q, z + 7); cout << "┃";
    gotoxy(x, z + 8); cout << "┃"; gotoxy(q, z + 8); cout << "┃";
    gotoxy(x, z + 9); cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛";

}

// 기본 선택지
void basic_choice()
{
    int x = 1;
    int y = 34;
    gotoxy(x, y); cout << "│ \033[94m상태창 \033[90m(1)\033[0m│ " << "│ \033[94m스킬 \033[90m(2)\033[0m│ ";
    gotoxy(x, y + 2); cout << " Enter Number: " << endl;
}

// 상단에 나오는 PC 정보창
void PC1_info()
{
    int x = 1;
    int y = 0;
    gotoxy(x, y + 1); cout << "[돌격자]"; // 변수설정해서...선택한 클래스 나오게? 하기?
    gotoxy(x, y + 2); cout << "HP: 97 / 100"; // 이것도 변수로해서..
    gotoxy(x, y + 3); cout << "행동력: 10"; // 이것두..

    // 상태이상 표시
    // 상태 이상 없을 땐 안뜨면 좋겟어요
    gotoxy(x + 4, y + 1); cout << "(상태이상)"; // 괄호 안에 상태이상 변수
}
void PC2_info()
{
    int x = 1;
    int y = 4;
    gotoxy(x, y + 1); cout << "[용병]";
    gotoxy(x, y + 2); cout << "HP: 97 / 100";
    gotoxy(x, y + 3); cout << "행동력: 10";

    // 상태이상 표시
    gotoxy(x + 4, y + 1); cout << "(중독)";
}
void PC3_info()
{
    int x = 1;
    int y = 8;
    gotoxy(x, y + 1); cout << "[치유사]";
    gotoxy(x, y + 2); cout << "HP: 70 / 80";
    gotoxy(x, y + 3); cout << "행동력: 10";

    // 상태이상 표시
    gotoxy(x + 4, y + 1); cout << "(출혈)";
}

// 상단에 나오는 적 정보창
void enemy1_info()
{
    int x = 44;
    int y = 0;
    gotoxy(x, y + 1); cout << "[늑대]";
    gotoxy(x, y + 2); cout << "HP: 200";

    // 상태이상 표시
    gotoxy(x + 4, y + 1); cout << "(상태이상)";
}
void enemy2_info()
{
    int x = 44;
    int y = 4;
    gotoxy(x, y + 1); cout << "[늑대]";
    gotoxy(x, y + 2); cout << "HP: 200";

    // 상태이상 표시
    gotoxy(x + 4, y + 1); cout << "(상태이상)";
}
void enemy3_info()
{
    int x = 44;
    int y = 8;
    gotoxy(x, y + 1); cout << "[늑대]";
    gotoxy(x, y + 2); cout << "HP: 200";

    // 상태이상 표시
    gotoxy(x + 4, y + 1); cout << "(상태이상)";
}

// 대사 출력
void dialogue()
{
    int x = 1;
    int y = 12;

    // 스킬 사용 출력은 스킬 선택한 순서대로 출력 가능할까요?
    gotoxy(x, y + 2); cout << "\033[33m가드! \033[0m";
    gotoxy(x, y + 3); cout << "돌격자" << "(이)가 " << "적의 공격을 미리 대비하여 방어 자세를 취합니다.";

    gotoxy(x, y + 5); cout << "\033[33m치유! \033[0m";
    gotoxy(x, y + 6); cout << "치유사" << "(이)가 " << "치유의 에너지를 이용하여 용병을 회복합니다.";

    gotoxy(x, y + 8); cout << "\033[33m찌르기! \033[0m";
    gotoxy(x, y + 9); cout << "용병" << "(이)가 " << "날카로운 검기로 늑대1의 약점을 찌릅니다.";

    // PC의 스킬 대사 출력 이후, 결과 출력
    gotoxy(x, y + 11); cout << "\033[34m돌격자가 방어 자세를 취한다.\033[0m";
    gotoxy(x, y + 12); cout << "> 돌격자의 HP: 97 / 150"; // [지정대상]의 HP: (현재체력) / (최대체력) 

    gotoxy(x, y + 14); cout << "\033[96m치유사가 용병을 15 만큼 치유했다.\033[0m";
    gotoxy(x, y + 15); cout << "> 용병의 HP: 97 / 100"; // [돌격자]의 HP: (현재체력) / (최대체력) 

    gotoxy(x, y + 17); cout << "\033[31m용병이 늑대1에게 25 만큼의 피해를 입혔다!\033[0m"; // [PC]이 [적 이름]에게 [데미지] 만큼의 피해를 입혔다!
    gotoxy(x, y + 18); cout << "> 늑대1의 HP: 154 / 200"; // [적]의 HP: (현재체력) / (최대체력)
}

void class_choice() {
    
    int x = 3;
    int y = 14;
    gotoxy(x - 3, y - 1); cout << "┠━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┨";


    //카드2
    gotoxy(x + 15, y + 1); cout << "< 1 >";
    gotoxy(x + 11, y + 2); cout << "┌─────────────────┐ ";
    gotoxy(x + 11, y + 3); cout << "│"; gotoxy(x + 20, y + 3); cout << "│"; gotoxy(x + 13, y + 3); cout << "    용병    ";
    gotoxy(x + 11, y + 4); cout << "│"; gotoxy(x + 20, y + 4); cout << "│";
    gotoxy(x + 11, y + 5); cout << "│"; gotoxy(x + 20, y + 5); cout << "│";
    gotoxy(x + 11, y + 6); cout << "│"; gotoxy(x + 20, y + 6); cout << "│";
    gotoxy(x + 11, y + 7); cout << "│"; gotoxy(x + 20, y + 7); cout << "│";
    gotoxy(x + 11, y + 8); cout << "│"; gotoxy(x + 20, y + 8); cout << "│";
    gotoxy(x + 11, y + 9); cout << "│"; gotoxy(x + 20, y + 9); cout << "│";
    gotoxy(x + 11, y + 10); cout << "│"; gotoxy(x + 20, y + 10); cout << "│";
    gotoxy(x + 11, y + 11); cout << "│"; gotoxy(x + 20, y + 11); cout << "│";
    gotoxy(x + 11, y + 12); cout << "│"; gotoxy(x + 20, y + 12); cout << "│";
    gotoxy(x + 11, y + 13); cout << "│"; gotoxy(x + 20, y + 13); cout << "│";
    gotoxy(x + 11, y + 14); cout << "│"; gotoxy(x + 20, y + 14); cout << "│";
    gotoxy(x + 11, y + 15); cout << "│"; gotoxy(x + 20, y + 15); cout << "│";
    gotoxy(x + 11, y + 16); cout << "│"; gotoxy(x + 20, y + 16); cout << "│"; 
    gotoxy(x + 11, y + 17); cout << "└─────────────────┘";

    //카드3
    gotoxy(x + 26, y + 1); cout << "< 2 >";
    gotoxy(x + 22, y + 2); cout << "┌─────────────────┐ ";
    gotoxy(x + 22, y + 3); cout << "│"; gotoxy(x + 31, y + 3); cout << "│"; gotoxy(x + 24, y + 3); cout << "   치유사   ";
    gotoxy(x + 22, y + 4); cout << "│"; gotoxy(x + 31, y + 4); cout << "│";
    gotoxy(x + 22, y + 5); cout << "│"; gotoxy(x + 31, y + 5); cout << "│";
    gotoxy(x + 22, y + 6); cout << "│"; gotoxy(x + 31, y + 6); cout << "│";
    gotoxy(x + 22, y + 7); cout << "│"; gotoxy(x + 31, y + 7); cout << "│";
    gotoxy(x + 22, y + 8); cout << "│"; gotoxy(x + 31, y + 8); cout << "│";
    gotoxy(x + 22, y + 9); cout << "│"; gotoxy(x + 31, y + 9); cout << "│";
    gotoxy(x + 22, y + 10); cout << "│"; gotoxy(x + 31, y + 10); cout << "│";
    gotoxy(x + 22, y + 11); cout << "│"; gotoxy(x + 31, y + 11); cout << "│";
    gotoxy(x + 22, y + 12); cout << "│"; gotoxy(x + 31, y + 12); cout << "│";
    gotoxy(x + 22, y + 13); cout << "│"; gotoxy(x + 31, y + 13); cout << "│";
    gotoxy(x + 22, y + 14); cout << "│"; gotoxy(x + 31, y + 14); cout << "│";
    gotoxy(x + 22, y + 15); cout << "│"; gotoxy(x + 31, y + 15); cout << "│";
    gotoxy(x + 22, y + 16); cout << "│"; gotoxy(x + 31, y + 16); cout << "│"; 
    gotoxy(x + 22, y + 17); cout << "└─────────────────┘";

    //카드4
    gotoxy(x + 37, y + 1); cout << "< 3 >";
    gotoxy(x + 33, y + 2); cout << "┌─────────────────┐ ";
    gotoxy(x + 33, y + 3); cout << "│"; gotoxy(x + 42, y + 3); cout << "│"; gotoxy(x + 35, y + 3); cout << "   돌격자   ";
    gotoxy(x + 33, y + 4); cout << "│"; gotoxy(x + 42, y + 4); cout << "│";
    gotoxy(x + 33, y + 5); cout << "│"; gotoxy(x + 42, y + 5); cout << "│";
    gotoxy(x + 33, y + 6); cout << "│"; gotoxy(x + 42, y + 6); cout << "│";
    gotoxy(x + 33, y + 7); cout << "│"; gotoxy(x + 42, y + 7); cout << "│";
    gotoxy(x + 33, y + 8); cout << "│"; gotoxy(x + 42, y + 8); cout << "│";
    gotoxy(x + 33, y + 9); cout << "│"; gotoxy(x + 42, y + 9); cout << "│";
    gotoxy(x + 33, y + 10); cout << "│"; gotoxy(x + 42, y + 10); cout << "│";
    gotoxy(x + 33, y + 11); cout << "│"; gotoxy(x + 42, y + 11); cout << "│";
    gotoxy(x + 33, y + 12); cout << "│"; gotoxy(x + 42, y + 12); cout << "│";
    gotoxy(x + 33, y + 13); cout << "│"; gotoxy(x + 42, y + 13); cout << "│";
    gotoxy(x + 33, y + 14); cout << "│"; gotoxy(x + 42, y + 14); cout << "│";
    gotoxy(x + 33, y + 15); cout << "│"; gotoxy(x + 42, y + 15); cout << "│";
    gotoxy(x + 33, y + 16); cout << "│"; gotoxy(x + 42, y + 16); cout << "│"; 
    gotoxy(x + 33, y + 17); cout << "└─────────────────┘";


    //skil_input();

    skil_dealer(1);
    skil_healer(2);
    skil_tanker(3);
}

void class_chosen(int i) {

    system("cls");
    frame();
    start_ascii();

    int x = 3;
    int y = 14;
    gotoxy(x - 3, y - 1); cout << "┠━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┨";



    //카드3
    gotoxy(x + 22, y + 2); cout << "┌─────────────────┐ ";
    gotoxy(x + 22, y + 3); cout << "│"; gotoxy(x + 31, y + 3); cout << "│"; 
    gotoxy(x + 22, y + 4); cout << "│"; gotoxy(x + 31, y + 4); cout << "│";
    gotoxy(x + 22, y + 5); cout << "│"; gotoxy(x + 31, y + 5); cout << "│";
    gotoxy(x + 22, y + 6); cout << "│"; gotoxy(x + 31, y + 6); cout << "│";
    gotoxy(x + 22, y + 7); cout << "│"; gotoxy(x + 31, y + 7); cout << "│";
    gotoxy(x + 22, y + 8); cout << "│"; gotoxy(x + 31, y + 8); cout << "│";
    gotoxy(x + 22, y + 9); cout << "│"; gotoxy(x + 31, y + 9); cout << "│";
    gotoxy(x + 22, y + 10); cout << "│"; gotoxy(x + 31, y + 10); cout << "│";
    gotoxy(x + 22, y + 11); cout << "│"; gotoxy(x + 31, y + 11); cout << "│";
    gotoxy(x + 22, y + 12); cout << "│"; gotoxy(x + 31, y + 12); cout << "│";
    gotoxy(x + 22, y + 13); cout << "│"; gotoxy(x + 31, y + 13); cout << "│";
    gotoxy(x + 22, y + 14); cout << "│"; gotoxy(x + 31, y + 14); cout << "│";
    gotoxy(x + 22, y + 15); cout << "│"; gotoxy(x + 31, y + 15); cout << "│";
    gotoxy(x + 22, y + 16); cout << "│"; gotoxy(x + 31, y + 16); cout << "│"; 
    gotoxy(x + 22, y + 17); cout << "└─────────────────┘";


    //skil_input();
    switch (i) {
    case '1':
        gotoxy(x + 25, y + 3); cout << " 용병";
        skil_dealer(2);
        break;
    case '2':
        gotoxy(x + 25, y + 3); cout << " 치유사";
        skil_healer(2);
        break;
    case '3':
        gotoxy(x + 25, y + 3); cout << " 돌격자";
        skil_tanker(2);
        break;
    default:
        break;
    }
    
}

// 스킬 선택 시 등장하는 카드
void skil_choice(int i, string skillname, int act)
{
    string blank = "                ";
    size_t middle = blank.size() / 2; // 중앙 위치 계산
    std::string blankname = blank; // 원본 문자열 복사

    // 중앙 위치에 문자열 삽입
    blankname.insert(middle, skillname);

    int originalLength = blankname.length();

    int length = 12;

    std::string name;
    if (length >= originalLength) {
        name = blankname;
    }
    else {
        // 중앙 위치 계산
        int start = (originalLength - length) / 2;

        // 중앙 부분 자르기
        name = blankname.substr(start, length);
    }
    int x = 3;
    int y = 14;
    gotoxy(x - 3, y - 1); cout << "┠━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┨";

    // 카드1
    if (i == 0) {
        gotoxy(x + 4, y + 1); cout << "< 1 >";
        gotoxy(x, y + 2); cout << "┌─────────────────┐ ";
        gotoxy(x, y + 3); cout << "│"; gotoxy(x + 9, y + 3); cout << "│"; gotoxy(x + 2, y + 3); cout << name << "  ";
        gotoxy(x, y + 4); cout << "│"; gotoxy(x + 9, y + 4); cout << "│";
        gotoxy(x, y + 5); cout << "│"; gotoxy(x + 9, y + 5); cout << "│";
        gotoxy(x, y + 6); cout << "│"; gotoxy(x + 9, y + 6); cout << "│";
        gotoxy(x, y + 7); cout << "│"; gotoxy(x + 9, y + 7); cout << "│";
        gotoxy(x, y + 8); cout << "│"; gotoxy(x + 9, y + 8); cout << "│";
        gotoxy(x, y + 9); cout << "│"; gotoxy(x + 9, y + 9); cout << "│";
        gotoxy(x, y + 10); cout << "│"; gotoxy(x + 9, y + 10); cout << "│";
        gotoxy(x, y + 11); cout << "│"; gotoxy(x + 9, y + 11); cout << "│";
        gotoxy(x, y + 12); cout << "│"; gotoxy(x + 9, y + 12); cout << "│";
        gotoxy(x, y + 13); cout << "│"; gotoxy(x + 9, y + 13); cout << "│";
        gotoxy(x, y + 14); cout << "│"; gotoxy(x + 9, y + 14); cout << "│";
        gotoxy(x, y + 15); cout << "│"; gotoxy(x + 9, y + 15); cout << "│";
        gotoxy(x, y + 16); cout << "│"; gotoxy(x + 9, y + 16); cout << "│"; gotoxy(x + 5, y + 16); cout << "\033[33m" << act <<"\033[0m"; // 행동력
        gotoxy(x, y + 17); cout << "└─────────────────┘";
    }

    
    //카드2
    else if (i == 1) {
        gotoxy(x + 15, y + 1); cout << "< 2 >";
        gotoxy(x + 11, y + 2); cout << "┌─────────────────┐ ";
        gotoxy(x + 11, y + 3); cout << "│"; gotoxy(x + 20, y + 3); cout << "│"; gotoxy(x + 13, y + 3); cout << name << "  ";
        gotoxy(x + 11, y + 4); cout << "│"; gotoxy(x + 20, y + 4); cout << "│";
        gotoxy(x + 11, y + 5); cout << "│"; gotoxy(x + 20, y + 5); cout << "│";
        gotoxy(x + 11, y + 6); cout << "│"; gotoxy(x + 20, y + 6); cout << "│";
        gotoxy(x + 11, y + 7); cout << "│"; gotoxy(x + 20, y + 7); cout << "│";
        gotoxy(x + 11, y + 8); cout << "│"; gotoxy(x + 20, y + 8); cout << "│";
        gotoxy(x + 11, y + 9); cout << "│"; gotoxy(x + 20, y + 9); cout << "│";
        gotoxy(x + 11, y + 10); cout << "│"; gotoxy(x + 20, y + 10); cout << "│";
        gotoxy(x + 11, y + 11); cout << "│"; gotoxy(x + 20, y + 11); cout << "│";
        gotoxy(x + 11, y + 12); cout << "│"; gotoxy(x + 20, y + 12); cout << "│";
        gotoxy(x + 11, y + 13); cout << "│"; gotoxy(x + 20, y + 13); cout << "│";
        gotoxy(x + 11, y + 14); cout << "│"; gotoxy(x + 20, y + 14); cout << "│";
        gotoxy(x + 11, y + 15); cout << "│"; gotoxy(x + 20, y + 15); cout << "│";
        gotoxy(x + 11, y + 16); cout << "│"; gotoxy(x + 20, y + 16); cout << "│"; gotoxy(x + 16, y + 16); cout << "\033[33m" << act << "\033[0m";
        gotoxy(x + 11, y + 17); cout << "└─────────────────┘";
    }

    
    
    //카드3
    else if (i == 2) {
        gotoxy(x + 26, y + 1); cout << "< 3 >";
        gotoxy(x + 22, y + 2); cout << "┌─────────────────┐ ";
        gotoxy(x + 22, y + 3); cout << "│"; gotoxy(x + 31, y + 3); cout << "│"; gotoxy(x + 24, y + 3); cout << name << "  ";
        gotoxy(x + 22, y + 4); cout << "│"; gotoxy(x + 31, y + 4); cout << "│";
        gotoxy(x + 22, y + 5); cout << "│"; gotoxy(x + 31, y + 5); cout << "│";
        gotoxy(x + 22, y + 6); cout << "│"; gotoxy(x + 31, y + 6); cout << "│";
        gotoxy(x + 22, y + 7); cout << "│"; gotoxy(x + 31, y + 7); cout << "│";
        gotoxy(x + 22, y + 8); cout << "│"; gotoxy(x + 31, y + 8); cout << "│";
        gotoxy(x + 22, y + 9); cout << "│"; gotoxy(x + 31, y + 9); cout << "│";
        gotoxy(x + 22, y + 10); cout << "│"; gotoxy(x + 31, y + 10); cout << "│";
        gotoxy(x + 22, y + 11); cout << "│"; gotoxy(x + 31, y + 11); cout << "│";
        gotoxy(x + 22, y + 12); cout << "│"; gotoxy(x + 31, y + 12); cout << "│";
        gotoxy(x + 22, y + 13); cout << "│"; gotoxy(x + 31, y + 13); cout << "│";
        gotoxy(x + 22, y + 14); cout << "│"; gotoxy(x + 31, y + 14); cout << "│";
        gotoxy(x + 22, y + 15); cout << "│"; gotoxy(x + 31, y + 15); cout << "│";
        gotoxy(x + 22, y + 16); cout << "│"; gotoxy(x + 31, y + 16); cout << "│"; gotoxy(x + 27, y + 16); cout << "\033[33m" << act << "\033[0m";
        gotoxy(x + 22, y + 17); cout << "└─────────────────┘";
    }
    

    //카드4
    else if (i == 3) {
        gotoxy(x + 37, y + 1); cout << "< 4 >";
        gotoxy(x + 33, y + 2); cout << "┌─────────────────┐ ";
        gotoxy(x + 33, y + 3); cout << "│"; gotoxy(x + 42, y + 3); cout << "│"; gotoxy(x + 35, y + 3); cout << name << "  ";
        gotoxy(x + 33, y + 4); cout << "│"; gotoxy(x + 42, y + 4); cout << "│";
        gotoxy(x + 33, y + 5); cout << "│"; gotoxy(x + 42, y + 5); cout << "│";
        gotoxy(x + 33, y + 6); cout << "│"; gotoxy(x + 42, y + 6); cout << "│";
        gotoxy(x + 33, y + 7); cout << "│"; gotoxy(x + 42, y + 7); cout << "│";
        gotoxy(x + 33, y + 8); cout << "│"; gotoxy(x + 42, y + 8); cout << "│";
        gotoxy(x + 33, y + 9); cout << "│"; gotoxy(x + 42, y + 9); cout << "│";
        gotoxy(x + 33, y + 10); cout << "│"; gotoxy(x + 42, y + 10); cout << "│";
        gotoxy(x + 33, y + 11); cout << "│"; gotoxy(x + 42, y + 11); cout << "│";
        gotoxy(x + 33, y + 12); cout << "│"; gotoxy(x + 42, y + 12); cout << "│";
        gotoxy(x + 33, y + 13); cout << "│"; gotoxy(x + 42, y + 13); cout << "│";
        gotoxy(x + 33, y + 14); cout << "│"; gotoxy(x + 42, y + 14); cout << "│";
        gotoxy(x + 33, y + 15); cout << "│"; gotoxy(x + 42, y + 15); cout << "│";
        gotoxy(x + 33, y + 16); cout << "│"; gotoxy(x + 42, y + 16); cout << "│"; gotoxy(x + 38, y + 16); cout << "\033[33m" << act << "\033[0m";
        gotoxy(x + 33, y + 17); cout << "└─────────────────┘";
    }
    

    //카드5
    else if (i == 4) {
        gotoxy(x + 48, y + 1); cout << "< 5 >";
        gotoxy(x + 44, y + 2); cout << "┌─────────────────┐ ";
        gotoxy(x + 44, y + 3); cout << "│"; gotoxy(x + 53, y + 3); cout << "│"; gotoxy(x + 46, y + 3); cout << name << "  ";
        gotoxy(x + 44, y + 4); cout << "│"; gotoxy(x + 53, y + 4); cout << "│";
        gotoxy(x + 44, y + 5); cout << "│"; gotoxy(x + 53, y + 5); cout << "│";
        gotoxy(x + 44, y + 6); cout << "│"; gotoxy(x + 53, y + 6); cout << "│";
        gotoxy(x + 44, y + 7); cout << "│"; gotoxy(x + 53, y + 7); cout << "│";
        gotoxy(x + 44, y + 8); cout << "│"; gotoxy(x + 53, y + 8); cout << "│";
        gotoxy(x + 44, y + 9); cout << "│"; gotoxy(x + 53, y + 9); cout << "│";
        gotoxy(x + 44, y + 10); cout << "│"; gotoxy(x + 53, y + 10); cout << "│";
        gotoxy(x + 44, y + 11); cout << "│"; gotoxy(x + 53, y + 11); cout << "│";
        gotoxy(x + 44, y + 12); cout << "│"; gotoxy(x + 53, y + 12); cout << "│";
        gotoxy(x + 44, y + 13); cout << "│"; gotoxy(x + 53, y + 13); cout << "│";
        gotoxy(x + 44, y + 14); cout << "│"; gotoxy(x + 53, y + 14); cout << "│";
        gotoxy(x + 44, y + 15); cout << "│"; gotoxy(x + 53, y + 15); cout << "│";
        gotoxy(x + 44, y + 16); cout << "│"; gotoxy(x + 53, y + 16); cout << "│"; gotoxy(x + 49, y + 16); cout << "\033[33m" << act << "\033[0m";
        gotoxy(x + 44, y + 17); cout << "└─────────────────┘";
    }
    
    //skil_input();

    //skil_tanker();
    //skil_dealer();
    //skil_healer();
}

// 스킬 선택 시 카드에 출력되는 그래픽. 임시로 skil_choice 안에 넣어놓음.
void skil_tanker(int i)
{
    int x = 2;
    int y = 15;

    //카드1
    if (i == 0) {
        gotoxy(x + 2, y + 5); cout << "\033[34m  |`-._/\\_.-`|";
        gotoxy(x + 2, y + 6); cout << "  |    ||    |";
        gotoxy(x + 2, y + 7); cout << "  |___o()o___|";
        gotoxy(x + 2, y + 8); cout << "  |__((<>))__|";
        gotoxy(x + 2, y + 9); cout << "  \\   o\\/o   /";
        gotoxy(x + 2, y + 10); cout << "   \\   ||   /";
        gotoxy(x + 2, y + 11); cout << "    \\  ||  /";
        gotoxy(x + 2, y + 12); cout << "     '.||.'";
        gotoxy(x + 2, y + 13); cout << "       ``\033[0m";
    }
    

    //카드2
    else if (i == 1) {
        
        gotoxy(x + 13, y + 5); cout << "\033[34m  |`-._/\\_.-`|";
        gotoxy(x + 13, y + 6); cout << "  |    ||    |";
        gotoxy(x + 13, y + 7); cout << "  |___o()o___|";
        gotoxy(x + 13, y + 8); cout << "  |__((<>))__|";
        gotoxy(x + 13, y + 9); cout << "  \\   o\\/o   /";
        gotoxy(x + 13, y + 10); cout << "   \\   ||   /";
        gotoxy(x + 13, y + 11); cout << "    \\  ||  /";
        gotoxy(x + 13, y + 12); cout << "     '.||.'";
        gotoxy(x + 13, y + 13); cout << "       ``\033[0m";
    }

    //카드3
    else if (i == 2) {
        
        gotoxy(x + 24, y + 5); cout << "\033[34m  |`-._/\\_.-`|";
        gotoxy(x + 24, y + 6); cout << "  |    ||    |";
        gotoxy(x + 24, y + 7); cout << "  |___o()o___|";
        gotoxy(x + 24, y + 8); cout << "  |__((<>))__|";
        gotoxy(x + 24, y + 9); cout << "  \\   o\\/o   /";
        gotoxy(x + 24, y + 10); cout << "   \\   ||   /";
        gotoxy(x + 24, y + 11); cout << "    \\  ||  /";
        gotoxy(x + 24, y + 12); cout << "     '.||.'";
        gotoxy(x + 24, y + 13); cout << "       ``\033[0m";
    }

    //카드4
    else if (i == 3) {
        
        gotoxy(x + 35, y + 5); cout << "\033[34m  |`-._/\\_.-`|";
        gotoxy(x + 35, y + 6); cout << "  |    ||    |";
        gotoxy(x + 35, y + 7); cout << "  |___o()o___|";
        gotoxy(x + 35, y + 8); cout << "  |__((<>))__|";
        gotoxy(x + 35, y + 9); cout << "  \\   o\\/o   /";
        gotoxy(x + 35, y + 10); cout << "   \\   ||   /";
        gotoxy(x + 35, y + 11); cout << "    \\  ||  /";
        gotoxy(x + 35, y + 12); cout << "     '.||.'";
        gotoxy(x + 35, y + 13); cout << "       ``\033[0m";
    }

    //카드5
    else if (i == 4) {
        
        gotoxy(x + 46, y + 5); cout << "\033[34m  |`-._/\\_.-`|";
        gotoxy(x + 46, y + 6); cout << "  |    ||    |";
        gotoxy(x + 46, y + 7); cout << "  |___o()o___|";
        gotoxy(x + 46, y + 8); cout << "  |__((<>))__|";
        gotoxy(x + 46, y + 9); cout << "  \\   o\\/o   /";
        gotoxy(x + 46, y + 10); cout << "   \\   ||   /";
        gotoxy(x + 46, y + 11); cout << "    \\  ||  /";
        gotoxy(x + 46, y + 12); cout << "     '.||.'";
        gotoxy(x + 46, y + 13); cout << "       ``\033[0m";
    }
    


}

void skil_dealer(int i)
{
    int x = 3;
    int y = 14;

    //카드1
    if (i == 0) {
        
        gotoxy(x + 2, y + 5); cout << "\033[31m     /\\";
        gotoxy(x + 2, y + 6); cout << "    // \\";
        gotoxy(x + 2, y + 7); cout << "    || |";
        gotoxy(x + 2, y + 8); cout << "    || |";
        gotoxy(x + 2, y + 9); cout << "    || |";
        gotoxy(x + 2, y + 10); cout << " __ || | __";
        gotoxy(x + 2, y + 11); cout << "/___||_|___\\";
        gotoxy(x + 2, y + 12); cout << "    _MM_";
        gotoxy(x + 2, y + 13); cout << "   (&<>&)";
        gotoxy(x + 2, y + 14); cout << "    ~~~~\033[0m";
    }

    //카드2
    else if (i == 1) {
        
        gotoxy(x + 13, y + 5); cout << "\033[31m     /\\";
        gotoxy(x + 13, y + 6); cout << "    // \\";
        gotoxy(x + 13, y + 7); cout << "    || |";
        gotoxy(x + 13, y + 8); cout << "    || |";
        gotoxy(x + 13, y + 9); cout << "    || |";
        gotoxy(x + 13, y + 10); cout << " __ || | __";
        gotoxy(x + 13, y + 11); cout << "/___||_|___\\";
        gotoxy(x + 13, y + 12); cout << "    _MM_";
        gotoxy(x + 13, y + 13); cout << "   (&<>&)";
        gotoxy(x + 13, y + 14); cout << "    ~~~~\033[0m";
    }

    //카드3
    else if (i == 2) {
        
        gotoxy(x + 24, y + 5); cout << "\033[31m     /\\";
        gotoxy(x + 24, y + 6); cout << "    // \\";
        gotoxy(x + 24, y + 7); cout << "    || |";
        gotoxy(x + 24, y + 8); cout << "    || |";
        gotoxy(x + 24, y + 9); cout << "    || |";
        gotoxy(x + 24, y + 10); cout << " __ || | __";
        gotoxy(x + 24, y + 11); cout << "/___||_|___\\";
        gotoxy(x + 24, y + 12); cout << "    _MM_";
        gotoxy(x + 24, y + 13); cout << "   (&<>&)";
        gotoxy(x + 24, y + 14); cout << "    ~~~~\033[0m";
    }


    //카드4
    else if (i == 3) {
        
        gotoxy(x + 35, y + 5); cout << "\033[31m     /\\";
        gotoxy(x + 35, y + 6); cout << "    // \\";
        gotoxy(x + 35, y + 7); cout << "    || |";
        gotoxy(x + 35, y + 8); cout << "    || |";
        gotoxy(x + 35, y + 9); cout << "    || |";
        gotoxy(x + 35, y + 10); cout << " __ || | __";
        gotoxy(x + 35, y + 11); cout << "/___||_|___\\";
        gotoxy(x + 35, y + 12); cout << "    _MM_";
        gotoxy(x + 35, y + 13); cout << "   (&<>&)";
        gotoxy(x + 35, y + 14); cout << "    ~~~~\033[0m";

    }

    //카드5
    else if (i == 4) {
        
        gotoxy(x + 46, y + 5); cout << "\033[31m     /\\";
        gotoxy(x + 46, y + 6); cout << "    // \\";
        gotoxy(x + 46, y + 7); cout << "    || |";
        gotoxy(x + 46, y + 8); cout << "    || |";
        gotoxy(x + 46, y + 9); cout << "    || |";
        gotoxy(x + 46, y + 10); cout << " __ || | __";
        gotoxy(x + 46, y + 11); cout << "/___||_|___\\";
        gotoxy(x + 46, y + 12); cout << "    _MM_";
        gotoxy(x + 46, y + 13); cout << "   (&<>&)";
        gotoxy(x + 46, y + 14); cout << "    ~~~~\033[0m";
    }


    
    
}

void skil_healer(int i)
{
    int x = 3;
    int y = 14;


    //카드1
    if (i == 0) {
        
        gotoxy(x + 2, y + 5); cout << "\033[96m (`-._o_.-')";
        gotoxy(x + 2, y + 6); cout << "  (`- | -')";
        gotoxy(x + 2, y + 7); cout << "   `-.|.-'";
        gotoxy(x + 2, y + 8); cout << "     o|o ";
        gotoxy(x + 2, y + 9); cout << "    ( | )";
        gotoxy(x + 2, y + 10); cout << "     `!'";
        gotoxy(x + 2, y + 11); cout << "     (|)";
        gotoxy(x + 2, y + 12); cout << "      X";
        gotoxy(x + 2, y + 13); cout << "     (|)";
        gotoxy(x + 2, y + 14); cout << "     '|`\033[0m";
    }

    //카드2
    else if (i == 1) {
        
        gotoxy(x + 13, y + 5); cout << "\033[96m (`-._o_.-')";
        gotoxy(x + 13, y + 6); cout << "  (`- | -')";
        gotoxy(x + 13, y + 7); cout << "   `-.|.-'";
        gotoxy(x + 13, y + 8); cout << "     o|o";
        gotoxy(x + 13, y + 9); cout << "    ( | )";
        gotoxy(x + 13, y + 10); cout << "     `!'";
        gotoxy(x + 13, y + 11); cout << "     (|)";
        gotoxy(x + 13, y + 12); cout << "      X";
        gotoxy(x + 13, y + 13); cout << "     (|)";
        gotoxy(x + 13, y + 14); cout << "     '|`\033[0m";
    }

    //카드3
    else if (i == 2) {
        
        gotoxy(x + 24, y + 5); cout << "\033[96m (`-._o_.-')";
        gotoxy(x + 24, y + 6); cout << "  (`- | -')";
        gotoxy(x + 24, y + 7); cout << "   `-.|.-'";
        gotoxy(x + 24, y + 8); cout << "     o|o";
        gotoxy(x + 24, y + 9); cout << "    ( | )";
        gotoxy(x + 24, y + 10); cout << "     `!'";
        gotoxy(x + 24, y + 11); cout << "     (|)";
        gotoxy(x + 24, y + 12); cout << "      X";
        gotoxy(x + 24, y + 13); cout << "     (|)";
        gotoxy(x + 24, y + 14); cout << "     '|`\033[0m";
    }

    //카드4
    else if (i == 3) {
        
        gotoxy(x + 35, y + 5); cout << "\033[96m (`-._o_.-')";
        gotoxy(x + 35, y + 6); cout << "  (`- | -')";
        gotoxy(x + 35, y + 7); cout << "   `-.|.-'";
        gotoxy(x + 35, y + 8); cout << "     o|o";
        gotoxy(x + 35, y + 9); cout << "    ( | )";
        gotoxy(x + 35, y + 10); cout << "     `!'";
        gotoxy(x + 35, y + 11); cout << "     (|)";
        gotoxy(x + 35, y + 12); cout << "      X";
        gotoxy(x + 35, y + 13); cout << "     (|)";
        gotoxy(x + 35, y + 14); cout << "     '|`\033[0m";
    }


    //카드5
    else if (i == 4) {
        
        gotoxy(x + 46, y + 5); cout << "\033[96m (`-._o_.-')";
        gotoxy(x + 46, y + 6); cout << "  (`- | -')";
        gotoxy(x + 46, y + 7); cout << "   `-.|.-'";
        gotoxy(x + 46, y + 8); cout << "     o|o";
        gotoxy(x + 46, y + 9); cout << "    ( | )";
        gotoxy(x + 46, y + 10); cout << "     `!'";
        gotoxy(x + 46, y + 11); cout << "     (|)";
        gotoxy(x + 46, y + 12); cout << "      X";
        gotoxy(x + 46, y + 13); cout << "     (|)";
        gotoxy(x + 46, y + 14); cout << "     '|`\033[0m";
    }
    

    
}

// 스킬 선택, 다시 뽑기를 물어봄. 임시로 skil_choice 함수 안에 넣어놓음.
void skil_input()
{
    int x = 1;
    int y = 34;
    gotoxy(x, y); cout << "│ \033[94m스킬 선택 \033[90m(1)\033[0m│ " << "│ \033[94m다시 뽑기 \033[90m(2)\033[0m│ ";
    gotoxy(x, y + 2); cout << " Enter Number: " << endl;
}

void screen_reset() {
    
    int x = 1;
    int y = 14;

    gotoxy(x, y + 1); cout << "                                                                                                                  ";
    gotoxy(x, y + 2); cout << "                                                                                                                  ";
    gotoxy(x, y + 3); cout << "                                                                                                                  ";
    gotoxy(x, y + 4); cout << "                                                                                                                  ";
    gotoxy(x, y + 5); cout << "                                                                                                                  ";
    gotoxy(x, y + 6); cout << "                                                                                                                  ";
    gotoxy(x, y + 7); cout << "                                                                                                                  ";
    gotoxy(x, y + 8); cout << "                                                                                                                  ";
    gotoxy(x, y + 9); cout << "                                                                                                                  ";
    gotoxy(x, y + 10); cout << "                                                                                                                  ";
    gotoxy(x, y + 11); cout << "                                                                                                                  ";
    gotoxy(x, y + 12); cout << "                                                                                                                  ";
    gotoxy(x, y + 13); cout << "                                                                                                                  ";
    gotoxy(x, y + 14); cout << "                                                                                                                  ";
    gotoxy(x, y + 15); cout << "                                                                                                                  ";
    gotoxy(x, y + 16); cout << "                                                                                                                  ";
    gotoxy(x, y + 17); cout << "                                                                                                                  ";
}

void console_reset() {

    int x = 1;
    int y = 34;
    gotoxy(x, y); cout << "                                                            ";
    gotoxy(x, y + 2); cout << "                                                          " << endl;
    gotoxy(x, y + 4); cout << "                                                          " << endl;
    gotoxy(x, y + 6); cout << "                                                          " << endl;

}

void status_reset() {
    int x = 1;
    int y = 0;

    for (int i = 0; i < 12; i++) {
        gotoxy(x, y + 1 + i); cout << "                           ";
    }
    
    x = 44;
    y = 0;
    for (int i = 0; i < 12; i++) {
        gotoxy(x, y + 1 + i); cout << "                           ";
    }
}


void skil_tanker_used(int i)
{
    int x = 2;
    int y = 15;

    //카드1
    if (i == 0) {
        gotoxy(x + 2, y + 5); cout << "\033[90m  |`-._/\\_.-`|";
        gotoxy(x + 2, y + 6); cout << "  |    ||    |";
        gotoxy(x + 2, y + 7); cout << "  |___o()o___|";
        gotoxy(x + 2, y + 8); cout << "  |__((<>))__|";
        gotoxy(x + 2, y + 9); cout << "  \\   o\\/o   /";
        gotoxy(x + 2, y + 10); cout << "   \\   ||   /";
        gotoxy(x + 2, y + 11); cout << "    \\  ||  /";
        gotoxy(x + 2, y + 12); cout << "     '.||.'";
        gotoxy(x + 2, y + 13); cout << "       ``\033[0m";
    }


    //카드2
    else if (i == 1) {

        gotoxy(x + 13, y + 5); cout << "\033[90m  |`-._/\\_.-`|";
        gotoxy(x + 13, y + 6); cout << "  |    ||    |";
        gotoxy(x + 13, y + 7); cout << "  |___o()o___|";
        gotoxy(x + 13, y + 8); cout << "  |__((<>))__|";
        gotoxy(x + 13, y + 9); cout << "  \\   o\\/o   /";
        gotoxy(x + 13, y + 10); cout << "   \\   ||   /";
        gotoxy(x + 13, y + 11); cout << "    \\  ||  /";
        gotoxy(x + 13, y + 12); cout << "     '.||.'";
        gotoxy(x + 13, y + 13); cout << "       ``\033[0m";
    }

    //카드3
    else if (i == 2) {

        gotoxy(x + 24, y + 5); cout << "\033[90m  |`-._/\\_.-`|";
        gotoxy(x + 24, y + 6); cout << "  |    ||    |";
        gotoxy(x + 24, y + 7); cout << "  |___o()o___|";
        gotoxy(x + 24, y + 8); cout << "  |__((<>))__|";
        gotoxy(x + 24, y + 9); cout << "  \\   o\\/o   /";
        gotoxy(x + 24, y + 10); cout << "   \\   ||   /";
        gotoxy(x + 24, y + 11); cout << "    \\  ||  /";
        gotoxy(x + 24, y + 12); cout << "     '.||.'";
        gotoxy(x + 24, y + 13); cout << "       ``\033[0m";
    }

    //카드4
    else if (i == 3) {

        gotoxy(x + 35, y + 5); cout << "\033[90m  |`-._/\\_.-`|";
        gotoxy(x + 35, y + 6); cout << "  |    ||    |";
        gotoxy(x + 35, y + 7); cout << "  |___o()o___|";
        gotoxy(x + 35, y + 8); cout << "  |__((<>))__|";
        gotoxy(x + 35, y + 9); cout << "  \\   o\\/o   /";
        gotoxy(x + 35, y + 10); cout << "   \\   ||   /";
        gotoxy(x + 35, y + 11); cout << "    \\  ||  /";
        gotoxy(x + 35, y + 12); cout << "     '.||.'";
        gotoxy(x + 35, y + 13); cout << "       ``\033[0m";
    }

    //카드5
    else if (i == 4) {

        gotoxy(x + 46, y + 5); cout << "\033[90m  |`-._/\\_.-`|";
        gotoxy(x + 46, y + 6); cout << "  |    ||    |";
        gotoxy(x + 46, y + 7); cout << "  |___o()o___|";
        gotoxy(x + 46, y + 8); cout << "  |__((<>))__|";
        gotoxy(x + 46, y + 9); cout << "  \\   o\\/o   /";
        gotoxy(x + 46, y + 10); cout << "   \\   ||   /";
        gotoxy(x + 46, y + 11); cout << "    \\  ||  /";
        gotoxy(x + 46, y + 12); cout << "     '.||.'";
        gotoxy(x + 46, y + 13); cout << "       ``\033[0m";
    }



}

void skil_dealer_used(int i)
{
    int x = 3;
    int y = 14;

    //카드1
    if (i == 0) {

        gotoxy(x + 2, y + 5); cout << "\033[90m     /\\";
        gotoxy(x + 2, y + 6); cout << "    // \\";
        gotoxy(x + 2, y + 7); cout << "    || |";
        gotoxy(x + 2, y + 8); cout << "    || |";
        gotoxy(x + 2, y + 9); cout << "    || |";
        gotoxy(x + 2, y + 10); cout << " __ || | __";
        gotoxy(x + 2, y + 11); cout << "/___||_|___\\";
        gotoxy(x + 2, y + 12); cout << "    _MM_";
        gotoxy(x + 2, y + 13); cout << "   (&<>&)";
        gotoxy(x + 2, y + 14); cout << "    ~~~~\033[0m";
    }

    //카드2
    else if (i == 1) {

        gotoxy(x + 13, y + 5); cout << "\033[90m     /\\";
        gotoxy(x + 13, y + 6); cout << "    // \\";
        gotoxy(x + 13, y + 7); cout << "    || |";
        gotoxy(x + 13, y + 8); cout << "    || |";
        gotoxy(x + 13, y + 9); cout << "    || |";
        gotoxy(x + 13, y + 10); cout << " __ || | __";
        gotoxy(x + 13, y + 11); cout << "/___||_|___\\";
        gotoxy(x + 13, y + 12); cout << "    _MM_";
        gotoxy(x + 13, y + 13); cout << "   (&<>&)";
        gotoxy(x + 13, y + 14); cout << "    ~~~~\033[0m";
    }

    //카드3
    else if (i == 2) {

        gotoxy(x + 24, y + 5); cout << "\033[90m     /\\";
        gotoxy(x + 24, y + 6); cout << "    // \\";
        gotoxy(x + 24, y + 7); cout << "    || |";
        gotoxy(x + 24, y + 8); cout << "    || |";
        gotoxy(x + 24, y + 9); cout << "    || |";
        gotoxy(x + 24, y + 10); cout << " __ || | __";
        gotoxy(x + 24, y + 11); cout << "/___||_|___\\";
        gotoxy(x + 24, y + 12); cout << "    _MM_";
        gotoxy(x + 24, y + 13); cout << "   (&<>&)";
        gotoxy(x + 24, y + 14); cout << "    ~~~~\033[0m";
    }


    //카드4
    else if (i == 3) {

        gotoxy(x + 35, y + 5); cout << "\033[90m     /\\";
        gotoxy(x + 35, y + 6); cout << "    // \\";
        gotoxy(x + 35, y + 7); cout << "    || |";
        gotoxy(x + 35, y + 8); cout << "    || |";
        gotoxy(x + 35, y + 9); cout << "    || |";
        gotoxy(x + 35, y + 10); cout << " __ || | __";
        gotoxy(x + 35, y + 11); cout << "/___||_|___\\";
        gotoxy(x + 35, y + 12); cout << "    _MM_";
        gotoxy(x + 35, y + 13); cout << "   (&<>&)";
        gotoxy(x + 35, y + 14); cout << "    ~~~~\033[0m";

    }

    //카드5
    else if (i == 4) {

        gotoxy(x + 46, y + 5); cout << "\033[90m     /\\";
        gotoxy(x + 46, y + 6); cout << "    // \\";
        gotoxy(x + 46, y + 7); cout << "    || |";
        gotoxy(x + 46, y + 8); cout << "    || |";
        gotoxy(x + 46, y + 9); cout << "    || |";
        gotoxy(x + 46, y + 10); cout << " __ || | __";
        gotoxy(x + 46, y + 11); cout << "/___||_|___\\";
        gotoxy(x + 46, y + 12); cout << "    _MM_";
        gotoxy(x + 46, y + 13); cout << "   (&<>&)";
        gotoxy(x + 46, y + 14); cout << "    ~~~~\033[0m";
    }




}

void skil_healer_used(int i)
{
    int x = 3;
    int y = 14;


    //카드1
    if (i == 0) {

        gotoxy(x + 2, y + 5); cout << "\033[90m (`-._o_.-')";
        gotoxy(x + 2, y + 6); cout << "  (`- | -')";
        gotoxy(x + 2, y + 7); cout << "   `-.|.-'";
        gotoxy(x + 2, y + 8); cout << "     o|o ";
        gotoxy(x + 2, y + 9); cout << "    ( | )";
        gotoxy(x + 2, y + 10); cout << "     `!'";
        gotoxy(x + 2, y + 11); cout << "     (|)";
        gotoxy(x + 2, y + 12); cout << "      X";
        gotoxy(x + 2, y + 13); cout << "     (|)";
        gotoxy(x + 2, y + 14); cout << "     '|`\033[0m";
    }

    //카드2
    else if (i == 1) {

        gotoxy(x + 13, y + 5); cout << "\033[90m (`-._o_.-')";
        gotoxy(x + 13, y + 6); cout << "  (`- | -')";
        gotoxy(x + 13, y + 7); cout << "   `-.|.-'";
        gotoxy(x + 13, y + 8); cout << "     o|o";
        gotoxy(x + 13, y + 9); cout << "    ( | )";
        gotoxy(x + 13, y + 10); cout << "     `!'";
        gotoxy(x + 13, y + 11); cout << "     (|)";
        gotoxy(x + 13, y + 12); cout << "      X";
        gotoxy(x + 13, y + 13); cout << "     (|)";
        gotoxy(x + 13, y + 14); cout << "     '|`\033[0m";
    }

    //카드3
    else if (i == 2) {

        gotoxy(x + 24, y + 5); cout << "\033[90m (`-._o_.-')";
        gotoxy(x + 24, y + 6); cout << "  (`- | -')";
        gotoxy(x + 24, y + 7); cout << "   `-.|.-'";
        gotoxy(x + 24, y + 8); cout << "     o|o";
        gotoxy(x + 24, y + 9); cout << "    ( | )";
        gotoxy(x + 24, y + 10); cout << "     `!'";
        gotoxy(x + 24, y + 11); cout << "     (|)";
        gotoxy(x + 24, y + 12); cout << "      X";
        gotoxy(x + 24, y + 13); cout << "     (|)";
        gotoxy(x + 24, y + 14); cout << "     '|`\033[0m";
    }

    //카드4
    else if (i == 3) {

        gotoxy(x + 35, y + 5); cout << "\033[90m (`-._o_.-')";
        gotoxy(x + 35, y + 6); cout << "  (`- | -')";
        gotoxy(x + 35, y + 7); cout << "   `-.|.-'";
        gotoxy(x + 35, y + 8); cout << "     o|o";
        gotoxy(x + 35, y + 9); cout << "    ( | )";
        gotoxy(x + 35, y + 10); cout << "     `!'";
        gotoxy(x + 35, y + 11); cout << "     (|)";
        gotoxy(x + 35, y + 12); cout << "      X";
        gotoxy(x + 35, y + 13); cout << "     (|)";
        gotoxy(x + 35, y + 14); cout << "     '|`\033[0m";
    }


    //카드5
    else if (i == 4) {

        gotoxy(x + 46, y + 5); cout << "\033[90m (`-._o_.-')";
        gotoxy(x + 46, y + 6); cout << "  (`- | -')";
        gotoxy(x + 46, y + 7); cout << "   `-.|.-'";
        gotoxy(x + 46, y + 8); cout << "     o|o";
        gotoxy(x + 46, y + 9); cout << "    ( | )";
        gotoxy(x + 46, y + 10); cout << "     `!'";
        gotoxy(x + 46, y + 11); cout << "     (|)";
        gotoxy(x + 46, y + 12); cout << "      X";
        gotoxy(x + 46, y + 13); cout << "     (|)";
        gotoxy(x + 46, y + 14); cout << "     '|`\033[0m";
    }



}


void end1()
{
    int x = 1;
    int y = 15;

    gotoxy(x, y); cout << "\033[94m피비린내와 고통이 덮인 전장에 선 당신은 마지막 일격을 가했다.\033[0m ";
    gotoxy(x, y + 2); cout << "신의 몸은 푸른 빛을 내뿜으며 산산이 부서졌고, 던전 깊은 곳에 자리 잡았던 그 힘은 서서히 사라졌다. ";
    gotoxy(x, y + 3); cout << "그러나 기쁨이나 안도감 대신, 그 자리에 남은 것은 오직 공허함과 씁쓸함뿐이었다.";
    Sleep(2000);

    gotoxy(x, y + 6); cout << "당신은 보상을 얻기 위해 이 지하 던전에 들어왔다. ";
    gotoxy(x, y + 7); cout << "신의 은총과 보물을 꿈꾸며 수많은 위험을 감수하고, 수많은 생명을 빼앗았다. ";
    gotoxy(x, y + 9); cout << "하지만 결국 당신이 마주한 것은 그 어떤 보상도 아닌, 세상에 드리워진 어둠의 진실이었다.";
    Sleep(2000);

    gotoxy(x, y + 12); cout << "신이 죽자마자, 던전의 벽이 무너지기 시작했다. ";
    gotoxy(x, y + 13); cout << "그와 함께 지상으로 돌아갈 출구가 열리기를 바랐지만, 그런 일은 일어나지 않았다.";
    gotoxy(x, y + 15); cout << "\033[31m오히려 던전의 붕괴는 더 깊은 어둠을 불러왔고, 당신의 발밑에서부터 지하 던전 전체가 붕괴하기 시작했다.\033[0m";
    Sleep(2000);
}

void end2()
{
    int x = 1;
    int y = 16;

    gotoxy(x, y); cout << "한편, 신의 최후의 말이 당신의 귀에 울렸다. ";
    Sleep(2000);

    gotoxy(x, y + 3); cout << "\033[31m나는 죽지 않는다. 나의 존재는 이 세상의 일부다. ";
    gotoxy(x, y + 4); cout << "내가 사라져도, 나는 다시 돌아올 것이다. 그리고 그때는, 네가 이룬 모든 것을 파괴하리라.\033[0m";
    Sleep(2000);

    gotoxy(x, y + 7); cout << "세상은 신이 사라지며 잠시 안도할지 모르지만, 그로 인해 신의 힘이 완전히 사라진 것은 아니다.";
    gotoxy(x, y + 9); cout << "\033[95m신의 말처럼, 그는 언제든 다시 돌아올 수 있다. 당신의 노력은 단지 일시적인 평화를 가져왔을 뿐이다.\033[0m";
    Sleep(2000);
}

void end3()
{
    int x = 1;
    int y = 16;

    gotoxy(x, y); cout << "지상에 돌아갈 방법을 찾지 못한 당신은 던전의 폐허 속에 갇혀버렸다. ";
    gotoxy(x, y + 1); cout << "\033[33m던전이 무너지며 생긴 틈 사이로 빛이 들어왔지만, 그 빛은 \033[31m희망이 아닌 절망을 상징했다.\033[0m";
    Sleep(2000);

    gotoxy(x, y + 3); cout << "당신은 이제 세상으로 돌아갈 수 없는 존재가 되었다.";
    gotoxy(x, y + 4); cout << "지하 던전에서의 당신의 여정은 끝이 났지만, 그 끝은 절망과 혼란으로 가득했다.";
    Sleep(2000);

    gotoxy(x, y + 7); cout << "결국, 당신은 지하 던전에서 스스로를 갈고 닦아 또 다시 신의 재림을 막기 위한 준비를 시작했다.";
    Sleep(2000);

    gotoxy(x, y + 10); cout << "당신의 존재는 이제 신을 저지하는 자로서 세상에 남을 것이다. ";
    gotoxy(x, y + 11); cout << "그러나 세상은 당신이 그들을 위해 싸웠다는 사실을 결코 알지 못할 것이다. ";
    Sleep(2000);

    gotoxy(x, y + 13); cout << "당신의 희생은 오직 당신만이 아는 비극으로 남게 될 것이다.";
    Sleep(2000);
}