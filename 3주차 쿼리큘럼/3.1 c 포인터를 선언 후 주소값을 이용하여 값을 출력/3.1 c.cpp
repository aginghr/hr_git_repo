//�����͸� ���� �� �ּҰ��� �̿��Ͽ� ���� ���
#include <iostream>
using namespace std;
int main(void) {
	int Num = 629;
	//������ ����. �̷��� �ϸ� pi��� ���� �޸��ּҸ� ��Ÿ���� ����
	int* pi;

	//pi�� Num������ �ּҸ� ����. �׷� pi�� �ּҰ� Num�� �ּҷ� �����
	pi = &Num;
	printf("Num�� ���� %d�Դϴ�. \n", *pi); //*pi��� �ϸ�, pi�ּҿ� ����Ǿ� �ִ� ���� ��ȯ��
}
