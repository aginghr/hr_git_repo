#include <iostream>
using namespace std;

int main(void) {
	int i;
	int n = 0;
	int sum = 0;
	double average;

	while(1) {
		printf("정수를 입력하세요(끝낼 때는 999):");
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

	printf("입력한 수의 총 합은 %d입니다. \n", sum);
	printf("입력한 수의 평균은 %.2f입니다. \n", average);
}