// 4. int형 포인터를 선언 후 해당 주소값에 for 문을 돌려 1~10 까지의 숫자를 입력하시오

#include <iostream>
using namespace std;

int main()
{
    int* pointer;
    int i;
    for (i = 1;i < 11;i = i + 1) {
        pointer = &i;
        printf("주소: %p, 값: %d\n", (void*)&pointer, *pointer);
    }


    return 0;
}