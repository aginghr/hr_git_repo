#include <iostream>
using namespace std;

int main(void) {
	int i;

	printf("���� �Է��� �ּ��� :");
	scanf_s("%d", &i);

	if (i == 0) {
		printf("�Է��� ���� 0�Դϴ�.\n");
	}
	else if (i == 1) {
		printf("1�� �Է��߽��ϴ�.\n");
	}
	else if (i == 2) {
		printf("2�Դϴ�.\n");
	}
	else {
		printf("0, 1, 2�� �ƴ� �ٸ� ���Դϴ�.\n");
	}
}
