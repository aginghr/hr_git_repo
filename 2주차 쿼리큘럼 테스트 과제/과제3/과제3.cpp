// 3. ����ü�� �̸�, ����, Ű, �����Ը� �����ϰ�, �ܼ�â�� ���Ͽ� ������ �����͸� __string__���� �Է� �޾� ����Ͻÿ�.

#include <iostream>
using namespace std;

struct Person {
	string Name;
	string Age;
	string Height;
	string Weight;
};

int main()
{

	Person me;

    cout << "�̸�: ";
    cin >> me.Name;

    cout << "����: ";
    cin >> me.Age;

    cout << "Ű: ";
    cin >> me.Height;

    cout << "������: ";
    cin >> me.Weight;

    cout << "�̸��� " << me.Name << "�̰�, ���̴� " << me.Age << "���̸�, Ű�� " << me.Height << "cm�� �����Դ� " << me.Weight << "kg�̴�." << endl;


	return 0;
}


