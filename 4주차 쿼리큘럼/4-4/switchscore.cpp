#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main(void) {
	int Score;

	printf("������ �Է��Ͻÿ� :");
	scanf_s("%d", &Score);

	switch(Score / 10) {
		case 10:
		case 9:
			printf("���Դϴ�.\n");
			break;
		case 8:
			printf("���Դϴ�.\n");
			break;
		case 7:
			printf("���Դϴ�.\n");
			break;
		case 6:
			printf("���Դϴ�.\n");
			break;
		default:
			printf("���Դϴ�.\n");
			break;
	}
}