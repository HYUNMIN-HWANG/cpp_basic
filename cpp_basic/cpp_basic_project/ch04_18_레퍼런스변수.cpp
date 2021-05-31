// 래퍼런스 변수 : 이미 선언된 변수를 다른 이름으로 부른 변수
// 어떤 변수를 다른 이름으로 부르는 가
// 자료형 & 변수 이름 = 변수;

#include <iostream>
using namespace std;

int main()
{
	int a = 100;
	int &ra = a;

	cout << "a = " << a << endl;
	cout << "ra = " << ra << endl;

	cout << "********************" << endl;

	ra = 200;
	cout << "a = " << a << endl;
	cout << "ra = " << ra << endl;

	return 0;
}


//a = 100
//ra = 100
//* *******************
//a = 200
//ra = 200