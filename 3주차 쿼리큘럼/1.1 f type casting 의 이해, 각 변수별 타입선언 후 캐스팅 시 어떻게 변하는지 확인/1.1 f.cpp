#include <iostream>
using namespace std;

int main(void) {
	float n = 10.5f;

	//float���� int������ ��ȯ
	int casting = n;

	//���
	cout << "n�� ���� ��:" << n << endl;
	cout << "n�� int�� ĳ���� �� ��:" << casting << endl;

	int m = 3;
	bool casting2 = m;

	//���
	cout << "m�� ���� ��:" << m << endl;
	cout << "m�� bool�� ĳ���� �� ��:" << casting2 << endl;

	int o = 0;
	bool casting3 = o;

	//���
	cout << "o�� ���� ��:" << o << endl;
	cout << "o�� bool�� ĳ���� �� ��:" << casting3 << endl;

	float p = -1.5;
	unsigned casting4 = p;

	//���
	cout << "p�� ���� ��:" << p << endl;
	cout << "p�� bool�� ĳ���� �� ��:" << casting4 << endl;


}