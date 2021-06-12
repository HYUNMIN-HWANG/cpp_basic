// 증감 연산자 오버로딩
// 선 증감 연산자 ? 후 증감 연산자 ? 구분할 수 있어야 함

/*
#include <iostream>
using namespace std;

int main()
{
	int a = 100;

	cout << "a = " << a++ << endl;
	cout << "a = " << ++a << endl;

	return 0;
}

//a = 100
//a = 102
*/

// 선 증감 연산자 : 선언 형태에서 매개변수가 없을 때
// 클래스형 operator()++;

// 후 증감 연산자 : 선언 형태에서 매개변수가 있을 때
// 클래스형 operator++(int dummy);

#include "ch13_04_ImaginaryNumber.h"

ImaginaryNumber::ImaginaryNumber()
{
	a = 0;
	b = 1;
}

ImaginaryNumber::ImaginaryNumber(const double a, const double b)
{
	this->a = a;
	this->b = b;
}

void ImaginaryNumber::SetA(const double a)
{
	this->a = a;
}

void ImaginaryNumber::SetB(const double b)
{
	this->b = b;
}

double ImaginaryNumber::GetA()
{
	return a;
}

double ImaginaryNumber::GetB()
{
	return b;
}

string ImaginaryNumber::GetImaginaryNumber()
{
	char str_r[20], str_i[20];
	string str;

	if (b != 0)
	{
		_gcvt_s(str_r, a, 10); // _gcvt_s : 배정도형 수를 문자열 형태로 변환하는 함수, a를 10진수의 형태의 문자열로 변환해 str_r에 저장한다.
		_gcvt_s(str_i, b, 10);

		strcat_s(str_r, 20, "+");	//strcat_s : 문자열을 추가한다, 실수부
		strcat_s(str_r, 20, str_i);	//실수부+허수부
		strcat_s(str_r, 20, "i");	//실수부+허수부 i

		str.append(str_r);

	}

	if (b == 0)
		str = "Imaginary Number is not!";

	return str;
}

//ImaginaryNumber ImaginaryNumber::AddImaginary(const ImaginaryNumber ima)
//{
//	ImaginaryNumber res;	// 덧셈의 결과를 저장할 허수 객체 res를 생성한다.
//
//	res.a = this->a + ima.a;
//	res.b = this->b + ima.b;
//
//	return res;
//}

ImaginaryNumber ImaginaryNumber::operator+(const ImaginaryNumber object)
{
	ImaginaryNumber res;

	res.a = this->a + object.a;
	res.b = this->b + object.b;

	return res;
}

ImaginaryNumber ImaginaryNumber::operator++(void)	// 선 증감 연산자 함수
{
	this->a++;	// 실수부
	return *this;
}

ImaginaryNumber ImaginaryNumber::operator++(int dummy)	// 후 증감 연산자 함수 
{
	this->b++;	// 허수부
	return *this;
}
