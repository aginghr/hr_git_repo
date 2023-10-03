#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

void gotoxy(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main(void) {
	int x, y;
	int ch;

	x = 40;
	y = 10;
	system("cls");

	for (;;) {
		gotoxy(x, y);
		_putch('#');
		ch = _getch();
		if (ch == 0xE0 || ch == 0) {
			ch = _getch();
			switch (ch) {
			case 75:
				x = x - 1;
				break;
			case 77:
				x = x + 1;
				break;
			case 72:
				y = y - 1;
				break;
			case 80:
				y = y + 1;
				break;

			}
		}
		else {
			switch (ch) {
			case ' ':
				system("cls");
				break;
			case 'q':
			case 'Q':
				exit(0);
			}
		}
	}
}