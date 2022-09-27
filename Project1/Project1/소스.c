#include "game.h" 

int keyControl() {
	char temp = getch();

	if (temp == 'w' || temp == 'W') {
		return UP;
	}
	else if (temp == 'a' || temp == 'A') {
		return LEFT;
	}
	else if (temp == 's' || temp == 'S') {
		return DOWN;
	}
	else if (temp == 'd' || temp == 'D') {
		return RIGHT;
	}
	else if (temp == ' ') { // 스페이스바(공백)이 선택 버튼
		return SUBMIT;
	}
}

void titleDraw() {
	printf("\n\n\n\n");   
	printf("        #####    ###    ###    #    ####   ##### \n");
	printf("        #       #      #      # #   #   #  #     \n");
	printf("        ####    ####   #     #####  ####   ####  \n");
	printf("        #           #  #     #   #  #      #     \n");
	printf("        #####   ####    ###  #   #  #      ##### \n");
}

int menuDraw() {
	int x = 24;
	int y = 12;
	gotoxy(x - 2, y);
	printf("> 게임 시작");
	gotoxy(x, y + 1);
	printf("게임 정보 ");
	gotoxy(x, y + 2);
	printf("  종료  ");
	while (1) {   
		int n = keyControl(); 
		switch (n) {
		case UP: {
			if (y > 12) { 
				gotoxy(x - 2, y); 
				printf(" "); 
				gotoxy(x - 2, --y);  
				printf(">");
			}
			break;
		}

		case DOWN: { 
			if (y < 14) {   
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, ++y);
				printf(">");
			}
			break;
		}

		case SUBMIT: {
			return y - 12;
			
		}
		}
	}
}

void infoDraw() {
	system("cls"); 
	printf("\n\n");
	printf("                        [ 조작법 ]\n\n");
	printf("                    이동: W, A, S, D\n");
	printf("                    선택: 스페이스 바\n\n\n\n\n\n\n");
	printf("      스페이스바를 누르면 메인화면으로 이동합니다 ");

	while (1) {
		if (keyControl() == SUBMIT) {
			break;
		}
	}
}

