//a 배열을 선언하고, 각각의 값을 출력한다.

#include <iostream>
using namespace std;

int main(void)
{
	//배열
	int i, Score[30];
	for (i = 0;i < 30;i++)
		scanf_s("%d", &Score[i]);

	//구조체
	struct {
		char Name[10];
		int Age;
		double Height;
	} Friend;

	Friend.Age = 28;
	printf("내 친구 이름은 %s이다.\n", Friend.Name);

	//포인터
	int Num = 629;
	int* pi;

	pi = &Num;
	printf("Num의 값은 %d입니다.\n", *pi);

	//사용자정의형
	typedef int jungsoo;
	typedef enum { True, False } Bool;
	typedef int* pint;
	typedef int arint[10];
	typedef struct { int a; double b; } myst;

	Bool Male;
	Male = True;

	//논리형
	typedef int BOOL;
#define TRUE 1
#define FALSE 0

}