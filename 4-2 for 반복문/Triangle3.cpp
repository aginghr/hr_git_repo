#include <iostream>
using namespace std;

int main(void) {
	int i, j;
	for (i = 15;i >= 1;i = i - 1) {
		for (j = 1;j <= i;j = j + 1) {
			printf("*");
		}
		printf("\n");
	}
}