#include <iostream>
using namespace std;

int main(void) {
	int i;

	for (;;) {
		printf("������ �Է��ϼ���(���� ���� 0) : ");
		scanf_s("%d", &i);
		if (i == 0) {
			break;
		}
		if (i % 2 == 0) {
			printf("%d�� ¦���Դϴ�.\n", i);
		}
		else {
			printf("%d�� Ȧ���Դϴ�.\n", i);
		}
	}
}