#include <iostream>
using namespace std;

int main(void) {
	int i, j;
	printf("ù ��° ������ �Է��ϼ���:");
	scanf_s("%d", &i);
	printf("�� ��° ������ �Է��ϼ���:");
	scanf_s("%d", &j);

	if (i > j) {
		printf("%d���� %d�� �� �۽��ϴ�.\n", i, j);
	}
	else if (i < j) {
		printf("%d���� %d�� �� �۽��ϴ�.\n", i, j);
	}
	else {
		printf("%d�� %d�� ���� ���Դϴ�.\n", i, j);
	}
}