#include <iostream>
#include <Windows.h> //SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos) 사용을 위함
using namespace std;

void gotoxy(int x, int y)
{
	COORD pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main(void) {
	int i;
	system("cls");

	for (i = 1;i <= 80;i = i + 1) {
		gotoxy(i, 10);
		putchar('#');
		gotoxy(i - 1, 10);
		putchar(' ');
		Sleep(100);
	}
}