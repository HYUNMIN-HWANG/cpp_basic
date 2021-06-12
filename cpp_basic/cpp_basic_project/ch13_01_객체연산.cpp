// 연산자 오버로딩
// 정수형, 배정도형 데이터의 덧셈 등 이미 제공된 연산을 특정 클래스의 덧셈, 곱셈 등으로 다시 정의해 사용하는 것

#include "ch13_01_ImaginaryNumber.h"

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

ImaginaryNumber ImaginaryNumber::AddImaginary(const ImaginaryNumber ima)
{
	ImaginaryNumber res;	// 덧셈의 결과를 저장할 허수 객체 res를 생성한다.

	res.a = this->a + ima.a;
	res.b = this->b + ima.b;

	return res;
}