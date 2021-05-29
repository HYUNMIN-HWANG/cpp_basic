//덧셈과 곱셈의 누적 연산 수행하기

#include <iostream>
using namespace std;

int main()
{
	int i_add, i_mul; //변수 선언
	i_add = 0;	// 변수 초기화
	i_mul = 1;

	i_add += 5; // 누적 덧셈
	i_add += 5; // 누적 덧셈
	i_add += 5; // 누적 덧셈

	i_mul *= 5;	// 누적 곱셈
	i_mul *= 5;	// 누적 곱셈
	i_mul *= 5;	// 누적 곱셈

	cout << "덧셈 누적 결과: " << i_add << endl; // 15
	cout << "곱셈 누적 결과: " << i_mul << endl; // 125

	int a = 10;
	a++;	// 후치 연산자

	cout << "a= " << a << endl;		// 11
	cout << "a++= " << a++ << endl;	// 11

	cout << "++a= " << ++a << endl;	// 13
	cout << "a= " << a << endl;		// 13

	return 0;
	return 0;
}