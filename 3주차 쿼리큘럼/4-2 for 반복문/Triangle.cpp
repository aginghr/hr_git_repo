#include <iostream>
using namespace std;

int main(void) {
	int i, j;

	for (i = 1;i <= 15;i = i + 1) {
		for (j = 0;j < i;j = j + 1) {
			printf("*");
		}
		printf("\n");
	}
}
