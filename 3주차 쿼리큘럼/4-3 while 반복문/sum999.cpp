#include <iostream>
using namespace std;

int main(void) {
	int i;
	int n = 0;
	int sum = 0;
	double average;

	while(1) {
		printf("������ �Է��ϼ���(���� ���� 999):");
		scanf_s("%d", &i);
		if (i == 999) {
			break;
		}
		sum = sum + i;
		n = n + 1;
	}

	if (n == 0) {
		average = 0;
	}
	else {
		average = (double)sum / n;
	}

	printf("�Է��� ���� �� ���� %d�Դϴ�. \n", sum);
	printf("�Է��� ���� ����� %.2f�Դϴ�. \n", average);
}