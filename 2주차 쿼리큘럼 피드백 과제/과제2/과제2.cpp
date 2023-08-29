/*
2. 동서남북에 대한 열거형 변수를 선언 후 숫자패드의 키를 입력받아 다음과 같이 출력하시오

	1 입력 시 = 동, 2 입력 시 = 서, 3 입력 시 = 남, 4 입력 시 = 북
*/ 

#include <iostream>
using namespace std;

enum Direction { East=1, West, South, North };

int main()
{
	int mark;
	
	printf( "숫자입력(1~4):" );
	scanf_s("%d", &mark);

	switch(mark){
		case East: printf("동"); 
			break;
		case West: printf("서"); 
			break;
		case South: printf("남"); 
			break;
		case North: printf("북");
	}

	return 0;
}