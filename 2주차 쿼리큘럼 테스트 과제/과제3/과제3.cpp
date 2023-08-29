// 3. 구조체에 이름, 나이, 키, 몸무게를 선언하고, 콘솔창을 통하여 각각의 데이터를 __string__으로 입력 받아 출력하시오.

#include <iostream>
using namespace std;

struct Person {
	string Name;
	string Age;
	string Height;
	string Weight;
};

int main()
{

	Person me;

    cout << "이름: ";
    cin >> me.Name;

    cout << "나이: ";
    cin >> me.Age;

    cout << "키: ";
    cin >> me.Height;

    cout << "몸무게: ";
    cin >> me.Weight;

    cout << "이름은 " << me.Name << "이고, 나이는 " << me.Age << "살이며, 키는 " << me.Height << "cm에 몸무게는 " << me.Weight << "kg이다." << endl;


	return 0;
}


