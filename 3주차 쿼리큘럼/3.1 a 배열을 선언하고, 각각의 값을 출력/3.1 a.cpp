//a �迭�� �����ϰ�, ������ ���� ����Ѵ�.

#include <iostream>
using namespace std;

int main(void)
{
	//�迭
	int i, Score[30];
	for (i = 0;i < 30;i++)
		scanf_s("%d", &Score[i]);

	//����ü
	struct {
		char Name[10];
		int Age;
		double Height;
	} Friend;

	Friend.Age = 28;
	printf("�� ģ�� �̸��� %s�̴�.\n", Friend.Name);

	//������
	int Num = 629;
	int* pi;

	pi = &Num;
	printf("Num�� ���� %d�Դϴ�.\n", *pi);

	//�����������
	typedef int jungsoo;
	typedef enum { True, False } Bool;
	typedef int* pint;
	typedef int arint[10];
	typedef struct { int a; double b; } myst;

	Bool Male;
	Male = True;

	//����
	typedef int BOOL;
#define TRUE 1
#define FALSE 0

}