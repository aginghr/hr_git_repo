#include <iostream>
using namespace std;

int main(void) {
	int i, sum;

	sum = 0;
	for (i = 1;i <= 100;i = i + 1) {
		sum = sum + i;
	}
	printf("1~100������ �� = %d\n", sum);
}
