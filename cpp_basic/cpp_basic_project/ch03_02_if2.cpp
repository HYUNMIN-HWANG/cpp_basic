//사용자가 입력한 값을 비교

#include <iostream>
using namespace std;

int main()
{
	int a = 100;

	cout << "정수 입력 : ";
	cin >> a;

	if (a > 100)
	{
		cout << "a의 값 : " << a << endl;
		cout << a << "는 100보다 크다." << endl; // 123는 100보다 크다.
	}

	cout << "즐거운 c++ 프로그램을 종료합니다." << endl;
	return 0;
}

//정수 입력 : 390
//a의 값 : 390
//390는 100보다 크다.
//즐거운 c++ 프로그램을 종료합니다.

//정수 입력 : 30
//즐거운 c++ 프로그램을 종료합니다.