// 비트 연산자
/*
>> 오른쪽 시프트 : 이진수로 나타냈을 때 오른쪽으로 2비트 이동
<< 왼쪽 시프트 : 이진수로 나타냈을 때 왼쪽으로 2비트 이동
& 비트 논리곱(AND) 
| 비트 논리합(OR)
^ 비트 배타적 논리합(XOR)
~ 비트 부정(NOT)
*/

#include <iostream>
using namespace std;

int main()
{
	int a = 0x12345678, b, c, d, e;

	b = a >> 4;
	c = a << 4;
	d = a ^ b;
	e = ~a;

	cout << hex << "16진수 a = " << a << dec << "\t10진수 a = " << a << endl; // 16진수 a = 12345678	 10진수 a = 305419896
	cout << hex << "16진수 b = " << b << dec << "\t10진수 b = " << b << endl; // 16진수 b = 1234567      10진수 b = 19088743
	cout << hex << "16진수 c = " << c << dec << "\t10진수 c = " << c << endl; // 16진수 c = 23456780     10진수 c = 591751040
	cout << hex << "16진수 d = " << d << dec << "\t10진수 d = " << d << endl; // 16진수 d = 1317131f     10진수 d = 320279327
	cout << hex << "16진수 e = " << e << dec << "\t10진수 e = " << e << endl; // 16진수 e = edcba987     10진수 e = -305419897

	return 0;
}
