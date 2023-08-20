#include <iostream>
using namespace std;

int main(void)
{
	//1. 변수 이름 길이 제한없음
	int helloWorldAAAAAAAAAAAAAAAAAAA = 10; // 이름이 긴 변수
	cout << helloWorldAAAAAAAAAAAAAAAAAAA << endl;


	//2. C++의 변수는 대소문자를 구별함
	int Hello = 10;
	int hello = 20;

	//Hello 변수와 hello 변수는 다른 변수임
	cout << Hello << endl;
	cout << hello << endl;

	//3. 변수의 이름 처음에는 숫자가 오면 안됨 (뒤에 오는건 상관없음)
	//int 6Hello = 10;
	int Hello6 = 20;

	//4. 변수이름에 사용 가능한 특수기호는 ('_'와 '$')이다.
	int _hello = 10;
	int $_h_e_l_$ = 10;

	//다른 특수 기호는 오류가 남
	//int @hello = 10;

	//5. 키워드는 변수이름으로 사용불가
	//int int = 10;

	//6. 동일한 이름의 변수는 사용 불가
	//int hello = 10;
	//int hello = 20;

	return 0;
}