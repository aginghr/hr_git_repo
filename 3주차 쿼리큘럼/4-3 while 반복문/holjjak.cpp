#include <iostream>
using namespace std;

int main(void) {
	int i;

	do {
		printf("������ �Է��ϼ���(���� ���� 0) :");
		scanf_s("%d", &i);
		if (i % 2 == 0) {
			printf("%d�� ¦���Դϴ�. \n", i);
		}
		else {
			printf("%d�� Ȧ���Դϴ�.\n", i);
		}
	} while (i != 0);
}