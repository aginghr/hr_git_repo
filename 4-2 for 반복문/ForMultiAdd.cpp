//�ݺ����� ����Ͽ� (1) + (1*2) + (1*2*3) + (1*2*3*4) + (1*2*3*4*5)�� ����� ���϶�

#include <iostream>
using namespace std;

int main(void) {
	int i, j, k, l;
	l = 0;
	for (i = 1;i <= 5;i = i + 1) {
		k = 1;
		for (j = 1; j < i; j = j + 1) {
			k = k * (j + 1);
		}
		l = l + k;
	}
	printf("%d\n", l);
}