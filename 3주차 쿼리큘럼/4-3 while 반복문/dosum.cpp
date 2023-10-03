#include <iostream>
using namespace std;

int main(void) {
	int i, sum;

	sum = 0;
	i = 1;
	do {
		sum = sum + i;
		i = i + 1;
	} while (i <= 100);
	printf("1~100까지의 합=%d\n", sum);
}
