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

	ImaginaryNumber AddImaginary(const ImaginaryNumber ima);	// �� ����� ���� �� �ִ� ��� �Լ��� �����Ѵ�.

private :
	double a;	// �Ǽ���
	double b;	// �����
};

#else
#endif // !_CH13_01_IMAGINARYNUMBER_
