#include <iostream>
using namespace std;

int main(void) {
	int i, sum;

	sum = 0;
	i = 1;
	while (i <= 100) {
		sum = sum + i;
		i = i + 1;
	}
	printf("1~100������ �� = %d\n", sum);
}