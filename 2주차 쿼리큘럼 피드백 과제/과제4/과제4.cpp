// 4. int�� �����͸� ���� �� �ش� �ּҰ��� for ���� ���� 1~10 ������ ���ڸ� �Է��Ͻÿ�

#include <iostream>
using namespace std;

int main()
{
    int* pointer;
    int i;
    for (i = 1;i < 11;i = i + 1) {
        pointer = &i;
        printf("�ּ�: %p, ��: %d\n", (void*)&pointer, *pointer);
    }


    return 0;
}