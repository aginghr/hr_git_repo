/* a int, double, float, long등 데이터 타입 선언에 따른 특성을 이해한다. (언제 왜 사용해야 하는지)
   b 다양한 변수를 선언 후 sizeof를 이용하여 각각의 메모리 크기를 직접 출력해본다. */
#include <iostream>
using namespace std;

int main(void)
{
    // 정수형 데이터 타입 변수 선언 및 초기화
    int Int = 0;
    short Short = 0;
    long Long = 0;

    // 정수형 데이터 타입별 크기 출력
    cout << "Int타입 메모리 크기 : " << sizeof(Int) << endl;
    cout << "Short타입 메모리 크기 : " << sizeof(Short) << endl;
    cout << "Long타입 메모리 크기 : " << sizeof(Long) << endl;

    // 실수형 데이터 타입 변수 선언 및 초기화
    float Float = 0;
    double Double = 0;

    // 실수형 데이터 타입별 크기 출력
    cout << "Float타입 메모리 크기 : " << sizeof(Float) << endl;
    cout << "Double타입 메모리 크기 : " << sizeof(Double) << endl;

    // 논리형 및 문자형 데이터 타입 변수 선언 및 초기화
    bool Bool = false;
    char Char = 'A';

    // 논리형 및 문자형 데이터 타입별 크기 출력
    cout << "Bool타입 메모리 크기 : " << sizeof(Bool) << endl;
    cout << "char타입 메모리 크기 : " << sizeof(Char) << endl;

    return 0;
}