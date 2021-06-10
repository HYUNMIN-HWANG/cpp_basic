//출력형식 지정자 : 출력 내용의 모양을 결정하는 것
//setw : 출력 폭을 결정함
//setprecision : 소수점 이하 자릿수 지정
//fixed : 실수형을 본래 형태로 출력
//showpoint : 소수점 출력

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a = 1234;

	cout << "a = " << a << endl;
	cout << "a = " << setw(5) << a << endl; // 5자리를 기준으로 출력
	cout << "a = " << hex << setw(5) << a << endl;	// 16진수 형태로 출력
	cout << "a = " << dec << setw(5) << a << endl;	// 10진수 형태로 출력 (dec을 표시하지 않으면 계속 hex 형태로 출력됨)

	double b = 45.8769;
	cout << "b = " << b << endl;
	cout << "b = " << fixed << b << endl;	//소수점 이하 정해진 자릿수 모두 출력 (총 6자리 표시함)

	cout << "b = " << setprecision(2) << b << endl;	//소수점 이하 두 자리 출력

	double c = 123.;
	cout << "c = " << c << endl;	//  24행에서 setprecision(2) 했던 게 그대로 유지된다.
	cout << "c = " << setprecision(0) << c << endl;	// 소수점 이하 자릿수 생략
	cout << "c = " << showpoint << c << endl;	//소수점을 반드시 표시함
	cout << 987.0 << endl;

	return 0;
}

//a = 1234
//a =  1234
//a = 4d2
//a = 1234
//b = 45.8769
//b = 45.876900
//b = 45.88
//c = 123.00
//c = 123
//c = 123.
//987.