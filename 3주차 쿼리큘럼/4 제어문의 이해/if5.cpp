#include <iostream>
using namespace std;
int main(void) {
	int i;

	printf("������ �Է��ϼ���:");
	scanf_s("%d", &i);
	if (i % 2 == 0) {
		printf("%d�� ¦���Դϴ�.\n", i);
	}
	else {
		printf("%d�� Ȧ���Դϴ�.\n", i);
	}
}