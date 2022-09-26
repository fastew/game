#include <stdio.h>
#include <Windows.h>

void init();
void titleDraw();
void gotoxy(int, int);
void menuDraw();

int main() {
	init();
	titleDraw();
	menuDraw();
	return 0;
}


void init(){
	system("mode con cols=가로 lines=세로 | title 창 제목");
}

void titleDraw() {
	printf("\n\n\n\n");
	printf("         ############         ##            ##      ##           ##\n");
	printf("         ###        ##        ##            ##      ###          ##\n");
	printf("         ###        ###       ##            ##      ##  #        ##\n");
	printf("         ###        ###       ##            ##      ##   #       ##\n");
	printf("         ##############       ##            ##      ##    #      ##\n");
	printf("         ###        ###       ##            ##      ##     #     ##\n");
	printf("         ###        ###       ##            ##      ##      #    ##\n");
	printf("         ###        ###       ################      ##       #   ##\n");
}

void menuDraw() {
	gotoxy(24 - 2, 12);
	printf("> 게 임 시 작");
	gotoxy(24, 13);
	printf("게 임 정 보");
	gotoxy(24, 14);
	printf(" 종료 ");
}

void gotoxy(int x, int y){
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}
