// 별도의 변수를 저장하여 사칙연산의 결과를 출력하자.
// 자료형에 따라 데이터의 표현 방법과 연산 결과가 달라진다.

#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;
	int sum, sub, mul, div1;
	double div2;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "정수 입력 : ";
	cin >> num1;

	cout << "정수 입력 : ";
	cin >> num2;

	sum = num1 + num2;
	sub = num1 - num2;
	mul = num1 * num2;
	div1 = num1 / num2;
	div2 = num1 / num2;

	cout << "덧셈 결과 " << sum << endl;
	cout << "뺄셈 결과 " << sub << endl;
	cout << "곱셈 결과 " << mul << endl;
	cout << "나눗셈(int) 결과 " << div1 << endl;
	cout << "나눗셈(double) 결과 " << div2 << endl;

	div2 = num1 / (double)num2;
	cout << "나눗셈(double) 결과 " << div2 << endl;

	return 0;
}

//정수 입력 : 10
//정수 입력 : 4
//덧셈 결과 14
//뺄셈 결과 6
//곱셈 결과 40
//나눗셈(int) 결과 2
//나눗셈(double) 결과 2.000000
//나눗셈(double) 결과 2.500000
