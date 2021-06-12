#ifndef _CH13_01_IMAGINARYNUMBER_
#define _CH13_01_IMAGINARYNUMBER_

#include <iostream>
#include <string>
using namespace std;

class ImaginaryNumber
{
public:
	ImaginaryNumber();
	ImaginaryNumber(const double a, const double b);
	void SetA(const double a);
	void SetB(const double b);
	double GetA();
	double GetB();
	string GetImaginaryNumber();

	ImaginaryNumber AddImaginary(const ImaginaryNumber ima);	// 두 허수를 더할 수 있는 멤버 함수를 정의한다.

private :
	double a;	// 실수부
	double b;	// 허수부
};

#else
#endif // !_CH13_01_IMAGINARYNUMBER_
