#include <iostream>
using namespace std;

int main(void)
{
	float f;
	double d;
	long double ld;

	//1. ������ �Ǽ� ���� ����
	f = 0.00123f; //�Ǽ� �ڿ� f�� �ٴ� ����: f�� �پ� ���� ������ double Ÿ�Կ� �����ϴ� �Ǽ� ���̶�� ������ (�����Ϸ��� �Ǽ��� ��� double�� �Ǵ��ϱ� ���� / float�� double���� ���е��� ������)
	d = 1.23;
	ld = 123.0;

	cout << "�Ҽ��� �״�� ����� float�� ���� ���: " << f << endl;
	cout << "�Ҽ��� �״�� ����� double�� ���� ���: " << d << endl;
	cout << "�Ҽ��� �״�� ����� long double�� ���� ���: " << ld << endl;

	//2. ������ �Ǽ� ���� ����
	f = 1.23E-3f;
	d = 1.23E0;
	ld = 1.23E2;

	cout << "������ ǥ��� ����� float�� ���� ���: " << f << endl;
	cout << "������ ǥ��� ����� double�� ���� ���: " << d << endl;
	cout << "������ ǥ��� ����� long double�� ���� ���: " << ld << endl;

}