#include <iostream>
using namespace std;

int main(void) {
	int i, j, k;
	for (i = 15;i >= 0;i = i - 1) {
		for (j = 1;j <= i;j = j + 1) {
			printf(" ");
		}
		for (k = 1;k <= 15 - j; k = k + 1) {
			printf("*");
		}
		for (k = 1;k < 15 - j; k = k + 1) {
			printf("*");
		}
		printf("\n");

	}
}