#include <iostream>
using namespace std;

int main(void) {
	float n = 10.5f;

	//float형을 int형으로 변환
	int casting = n;

	//출력
	cout << "n의 원형 값:" << n << endl;
	cout << "n이 int로 캐스팅 된 값:" << casting << endl;

	int m = 3;
	bool casting2 = m;

	//출력
	cout << "m의 원형 값:" << m << endl;
	cout << "m이 bool로 캐스팅 된 값:" << casting2 << endl;

	int o = 0;
	bool casting3 = o;

	//출력
	cout << "o의 원형 값:" << o << endl;
	cout << "o가 bool로 캐스팅 된 값:" << casting3 << endl;

	float p = -1.5;
	unsigned casting4 = p;

	//출력
	cout << "p의 원형 값:" << p << endl;
	cout << "p가 bool로 캐스팅 된 값:" << casting4 << endl;


}