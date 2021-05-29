// 비트 연산자 : 연산 단위가 자료형에 상관없이 비트 단위로 수행된다.

#include <iostream>
using namespace std;

int main()
{
	int a = 1234, b = 0x12345678;	// 0x : 16진수 상수일 때, 앞에 '0x'를 붙여야 함

	cout << hex << "16진수 a = " << a << dec << "\t\t10진수 a = " << a << endl;
	cout << hex << "16진수 b = " << b << dec << "\t10진수 b = " << b << endl;
	// hex : 다음에 출력되는 숫자를 16진수로 표기하라는 뜻
	// dec : 다음에 출력되는 숫자를 10진수로 표기하라는 뜻 

	/*16진수 a = 4d2          10진수 a = 1234
	16진수 b = 12345678     10진수 b = 305419896*/
	return 0;
}