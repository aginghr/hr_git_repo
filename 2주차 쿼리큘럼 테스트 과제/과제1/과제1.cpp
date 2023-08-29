// 1. int, double, long, short 형 변수 선언 후 data size를 출력하시오.

#include <iostream>
using namespace std;
int main() 
{
	int int_variable;
	double double_variable;
	long long_variable;
	short short_variable;
	printf("int 변수 사이즈: %d / double 변수 사이즈: %d / long 변수 사이즈: %d / short 변수 사이즈: %d", sizeof(int_variable), sizeof(double_variable), sizeof(long_variable), sizeof(short_variable));
	return 0;
}