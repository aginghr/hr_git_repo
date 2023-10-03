#include <iostream>
using namespace std;

int main(void) {
	int i;

	printf("값을 입력해 주세요 :");
	scanf_s("%d", &i);

	if (i == 0) {
		printf("입력한 값은 0입니다.\n");
	}
	else if (i == 1) {
		printf("1을 입력했습니다.\n");
	}
	else if (i == 2) {
		printf("2입니다.\n");
	}
	else {
		printf("0, 1, 2가 아닌 다른 수입니다.\n");
	}
}
