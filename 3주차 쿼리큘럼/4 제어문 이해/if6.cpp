#include <iostream>
#include <Windows.h> //SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos) ����� ����
using namespace std;

void gotoxy(int x, int y)
{
	COORD pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


int main(void) {
	int i;

	printf("���ڿ��� ����� ��ġ�� �Է��ϼ���.");
	scanf_s("%d", &i);

	if (i == 1) {
		gotoxy(20, 10);
	}
	else if (i == 2) {
		gotoxy(40, 10);
	}
	else {
		gotoxy(60, 10);
	}
	printf("Programmer\n");
}