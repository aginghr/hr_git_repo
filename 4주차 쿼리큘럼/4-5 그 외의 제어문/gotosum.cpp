#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main(void) {
	int i, sum;

	i = 1;
	sum = 0;
here:
	sum = sum + i;
	if (i < 100) {
		i = i + 1;
		goto here;
	}
	printf("1~100까지의 합 = %d\n", sum);
}