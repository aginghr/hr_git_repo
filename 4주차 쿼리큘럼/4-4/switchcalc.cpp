#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main(void) {
	char op;
	int a = 10, b = 5;

	printf("10�� 5�� ������ �����Ͻʽÿ�(+-*/):");
	scanf_s("%c", &op);

	switch (op) {
	case '+':
		printf("10 %c 5 = %d\n", op, a + b);
		break;
	case '-':
		printf("10 %c 5 = %d\n", op, a - b);
		break;
	case '*':
		printf("10 %c 5 = %d\n", op, a * b);
		break;
	case '/':
		printf("10 %c 5 = %d\n", op, a / b);
		break;
	default:
		printf("+-*/ �� �ϳ��� ������ �ֽʽÿ�.\n");
		break;
	}
}

