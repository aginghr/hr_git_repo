// 1. int, double, long, short �� ���� ���� �� data size�� ����Ͻÿ�.

#include <iostream>
using namespace std;
int main() 
{
	int int_variable;
	double double_variable;
	long long_variable;
	short short_variable;
	printf("int ���� ������: %d / double ���� ������: %d / long ���� ������: %d / short ���� ������: %d", sizeof(int_variable), sizeof(double_variable), sizeof(long_variable), sizeof(short_variable));
	return 0;
}