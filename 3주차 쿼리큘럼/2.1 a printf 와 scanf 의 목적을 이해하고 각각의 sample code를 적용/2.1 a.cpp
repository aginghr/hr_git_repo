//a printf �� scanf �� ������ �����ϰ� ������ sample code�� �����Ѵ�.

#include <iostream>
using namespace std;

int main(void)
{
	int value = 12;
	char ch = 'S';
	printf("���� %d�̸� ���ڴ� %c�̴�.\n", value, ch);

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
	printf("ù ��° ���� �Է�:");
	scanf_s("%d", &a);
	printf("�� ��° ���� �Է�:");
	scanf_s("%d", &b);
	sum = a + b;
	printf("�Է��� �� ���� ���� %d�� \n", sum);
}