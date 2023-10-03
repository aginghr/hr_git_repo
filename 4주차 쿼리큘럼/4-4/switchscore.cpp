#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main(void) {
	int Score;

	printf("성적을 입력하시오 :");
	scanf_s("%d", &Score);

	switch(Score / 10) {
		case 10:
		case 9:
			printf("수입니다.\n");
			break;
		case 8:
			printf("우입니다.\n");
			break;
		case 7:
			printf("미입니다.\n");
			break;
		case 6:
			printf("양입니다.\n");
			break;
		default:
			printf("가입니다.\n");
			break;
	}
}