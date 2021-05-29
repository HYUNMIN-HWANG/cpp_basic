/*
우선순위 높음
후치연산자, static_cast
+ - ~(단항)  전치연산자
!
* / %
+ -
< <= > >=
== !=
& ^ | (비트 연산자)
&&
||
= += -= *= /= %= (대입 연산자)
우선순위 낮음
*/


/*
산술연산자
관계연산자
논리연산자
*/

#include <iostream>
using namespace std;

int main()
{
	bool a = 3 * 4 - 78 < 12 - 8 % 5;

	cout << "연산 결과 = " << a << endl;

	return 0;
}

//연산 결과 = 1 