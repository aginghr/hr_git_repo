/* a int, double, float, long�� ������ Ÿ�� ���� ���� Ư���� �����Ѵ�. (���� �� ����ؾ� �ϴ���)
   b �پ��� ������ ���� �� sizeof�� �̿��Ͽ� ������ �޸� ũ�⸦ ���� ����غ���. */
#include <iostream>
using namespace std;

int main(void)
{
    // ������ ������ Ÿ�� ���� ���� �� �ʱ�ȭ
    int Int = 0;
    short Short = 0;
    long Long = 0;

    // ������ ������ Ÿ�Ժ� ũ�� ���
    cout << "IntŸ�� �޸� ũ�� : " << sizeof(Int) << endl;
    cout << "ShortŸ�� �޸� ũ�� : " << sizeof(Short) << endl;
    cout << "LongŸ�� �޸� ũ�� : " << sizeof(Long) << endl;

    // �Ǽ��� ������ Ÿ�� ���� ���� �� �ʱ�ȭ
    float Float = 0;
    double Double = 0;

    // �Ǽ��� ������ Ÿ�Ժ� ũ�� ���
    cout << "FloatŸ�� �޸� ũ�� : " << sizeof(Float) << endl;
    cout << "DoubleŸ�� �޸� ũ�� : " << sizeof(Double) << endl;

    // ���� �� ������ ������ Ÿ�� ���� ���� �� �ʱ�ȭ
    bool Bool = false;
    char Char = 'A';

    // ���� �� ������ ������ Ÿ�Ժ� ũ�� ���
    cout << "BoolŸ�� �޸� ũ�� : " << sizeof(Bool) << endl;
    cout << "charŸ�� �޸� ũ�� : " << sizeof(Char) << endl;

    return 0;
}