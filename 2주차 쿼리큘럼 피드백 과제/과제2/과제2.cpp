/*
2. �������Ͽ� ���� ������ ������ ���� �� �����е��� Ű�� �Է¹޾� ������ ���� ����Ͻÿ�

	1 �Է� �� = ��, 2 �Է� �� = ��, 3 �Է� �� = ��, 4 �Է� �� = ��
*/ 

#include <iostream>
using namespace std;

enum Direction { East=1, West, South, North };

int main()
{
	int mark;
	
	printf( "�����Է�(1~4):" );
	scanf_s("%d", &mark);

	switch(mark){
		case East: printf("��"); 
			break;
		case West: printf("��"); 
			break;
		case South: printf("��"); 
			break;
		case North: printf("��");
	}

	return 0;
}