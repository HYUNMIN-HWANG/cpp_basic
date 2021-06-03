//디폴트 매개변수 : 함수 선언에서 함수의 매개변수에 초깃값을 정해놓고 함수 호출에서 함수의 매개변수를 지정하지 않은 경우 해당 초깃값을 호출하는 함수

#include <iostream>
using namespace std;

int TestFunc1(int a);
int TestFunc4(int a = 888);	// 디폴트 값 a=888

int main()
{
	int b = 200;

	cout << "b = " << b << endl;
	TestFunc1(b);
	cout << "b = " << b << endl;

	TestFunc1(999);
	TestFunc1(b);

	cout << "*****************************" << endl;

	TestFunc4(999);
	TestFunc4(b);
	TestFunc4();	// 디폴트 값인 a=888이 들어간다.

	cout << "*****************************" << endl;

	return 0;
}

int TestFunc1(int a)
{
	cout << "a = " << a << endl;
	a = 100;
	cout << "a = " << a << endl;
	return 0;
}

int TestFunc4(int a)
{
	cout << "a = " << a << endl;
	a = 100;
	cout << "a = " << a << endl;
	return 0;
}

//b = 200
//a = 200
//a = 100
//b = 200
//a = 999
//a = 100
//a = 200
//a = 100
//* ****************************
//a = 999
//a = 100
//a = 200
//a = 100
//a = 888
//a = 100
//* ****************************