#include <iostream>
using namespace std;

int main(void) {
	int i;

	for (;;) {
		printf("정수를 입력하세요(끝낼 때는 0) : ");
		scanf_s("%d", &i);
		if (i == 0) {
			break;
		}
		if (i % 2 == 0) {
			printf("%d는 짝수입니다.\n", i);
		}
		else {
			printf("%d는 홀수입니다.\n", i);
		}
	}
}