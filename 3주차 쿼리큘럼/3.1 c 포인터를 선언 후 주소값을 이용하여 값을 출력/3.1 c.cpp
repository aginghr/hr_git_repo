//포인터를 선언 후 주소값을 이용하여 값을 출력
#include <iostream>
using namespace std;
int main(void) {
	int Num = 629;
	//포인터 선언. 이렇게 하면 pi라는 값은 메모리주소를 나타내는 변수
	int* pi;

	//pi에 Num변수의 주소를 저장. 그럼 pi의 주소가 Num의 주소로 변경됨
	pi = &Num;
	printf("Num의 값은 %d입니다. \n", *pi); //*pi라고 하면, pi주소에 저장되어 있는 값이 반환됨
}
