/* b ����ü�� �����Ͽ� �л� ��ü�� �����, 
10���� �л� �����͸� �����Ͽ� ���� ���� ���� �� ����Ѵ�.
*/
#include <iostream>
using namespace std;

struct Student {
	char Name[10];
	int Age;
	double Height;
};

int main(void) {

	Student students[10];

    // �л� ������ ����
    strcpy_s(students[0].Name, "Charlie");
    students[0].Age = 28;
    students[0].Height = 169.6;

    strcpy_s(students[1].Name, "Alice");
    students[1].Age = 19;
    students[1].Height = 168.3;

    strcpy_s(students[2].Name, "Frank");
    students[2].Age = 24;
    students[2].Height = 154.9;

    strcpy_s(students[3].Name, "Grace");
    students[3].Age = 22;
    students[3].Height = 187.1;

    strcpy_s(students[4].Name, "Jack");
    students[4].Age = 20;
    students[4].Height = 168.2;

    strcpy_s(students[5].Name, "Charlie");
    students[5].Age = 18;
    students[5].Height = 153.8;

    strcpy_s(students[6].Name, "David");
    students[6].Age = 22;
    students[6].Height = 166.9;

    strcpy_s(students[7].Name, "Alice");
    students[7].Age = 27;
    students[7].Height = 171.4;

    strcpy_s(students[8].Name, "Grace");
    students[8].Age = 30;
    students[8].Height = 180.5;

    strcpy_s(students[9].Name, "Bob");
    students[9].Age = 21;
    students[9].Height = 171.0;

    // ������ �л� ���� ���
    for (int i = 0; i < 10; ++i) {
        cout << "�л� " << i + 1 << "�� ����:\n";
        cout << "�̸�: " << students[i].Name << "\n";
        cout << "����: " << students[i].Age << "��\n";
        cout << "Ű: " << students[i].Height << "cm\n\n";
    }
    
    return 0;

}
