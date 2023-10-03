#include <iostream>
using namespace std;

int main(void)
{
	float f;
	double d;
	long double ld;

	//1. 변수에 실수 값을 대입
	f = 0.00123f; //실수 뒤에 f가 붙는 이유: f가 붙어 있지 않으면 double 타입에 상응하는 실수 값이라고 생각함 (컴파일러는 실수를 모두 double로 판단하기 때문 / float은 double보다 정밀도가 떨어짐)
	d = 1.23;
	ld = 123.0;

	cout << "소숫점 그대로 사용한 float형 변수 출력: " << f << endl;
	cout << "소숫점 그대로 사용한 double형 변수 출력: " << d << endl;
	cout << "소숫점 그대로 사용한 long double형 변수 출력: " << ld << endl;

	//2. 변수에 실수 값을 대입
	f = 1.23E-3f;
	d = 1.23E0;
	ld = 1.23E2;

	cout << "과학적 표기법 사용한 float형 변수 출력: " << f << endl;
	cout << "과학적 표기법 사용한 double형 변수 출력: " << d << endl;
	cout << "과학적 표기법 사용한 long double형 변수 출력: " << ld << endl;

}