#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main(void) {
	int ch;
	for (;;) {
		ch = _getch();
		if (ch == 0xE0 || ch == 0) {
			ch = _getch();
			printf("Ȯ�� Ű �Է�, �ڵ� = %d\n", ch);
		}
		else {
			printf("�Ϲ� ���� �Է�, ���� = %c, �ڵ� = %d\n", ch, ch);
			if (ch == 'q') exit(0);
		}
	}
}
