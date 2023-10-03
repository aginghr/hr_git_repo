//a printf 와 scanf 의 목적을 이해하고 각각의 sample code를 적용한다.

#include <iostream>
using namespace std;

int main(void)
{
	int value = 12;
	char ch = 'S';
	printf("값은 %d이며 문자는 %c이다.\n", value, ch);

	int Num = 123;
	printf("-->%d<--\n", Num);
	printf("-->%5d<--\n", Num);
	printf("-->%05d<--\n", Num);
	printf("-->%-5d<--\n", Num);

	double pie = 3.14;
	printf("-->%f<--\n", pie);
	printf("-->%10f<--\n", pie);
	printf("-->%.2f<--\n", pie);
	printf("-->%10.2f<--\n", pie);
	printf("-->%010.2f<--\n", pie);
	printf("-->%-10.2f<--\n", pie);

	int a, b;
	int sum;
	printf("첫 번째 숫자 입력:");
	scanf_s("%d", &a);
	printf("두 번째 숫자 입력:");
	scanf_s("%d", &b);
	sum = a + b;
	printf("입력한 두 수의 합은 %d임 \n", sum);
}