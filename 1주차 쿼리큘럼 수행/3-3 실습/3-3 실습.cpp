#include <iostream>
using namespace std;

int main(void)
{
	//1. 변수의 용도를 예상할 수 있게 이름 짓기
	int student_Age = 20;

	//2. 단어와 단어 구분 가능하게 짓기 (가독성이 student_Age 보다 떨어지는 아래 예시)
	int studentage = 20;

	//3. 필요없이 긴 이름 피할 것
	int theageofstudent = 20;

	//4. 헝가리안 표기법 (변수 이름 지을 때 규칙 주는 것)
	int iStudent_Age = 10; //첫글자 i로 int형 데이터타입을 유추
	float fStudent_Age2 = 10.0f; //첫글자 f로 float형 데이터타입을 유추

	cout << fStudent_Age2;


	return 0;
}