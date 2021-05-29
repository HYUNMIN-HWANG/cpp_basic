// 논리형, 관계 연산자, 논리 연산자
// 1 참 True / 0 거짓 False
// 논리형 (bool) 1 바이트 - true, false

#include <iostream>
using namespace std;

int main()
{
	bool a = true;

	cout << "a = " << a << endl;	//1
	a = false;
	cout << "a = " << a << endl;	//0
	a = -98;
	cout << "a = " << a << endl;	//1
	a = 0;
	cout << "a= " << a << endl;		//0

	return 0;
}