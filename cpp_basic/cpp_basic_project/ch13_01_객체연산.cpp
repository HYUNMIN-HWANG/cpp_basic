// ������ �����ε�
// ������, �������� �������� ���� �� �̹� ������ ������ Ư�� Ŭ������ ����, ���� ������ �ٽ� ������ ����ϴ� ��

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
		_gcvt_s(str_r, a, 10); // _gcvt_s : �������� ���� ���ڿ� ���·� ��ȯ�ϴ� �Լ�, a�� 10������ ������ ���ڿ��� ��ȯ�� str_r�� �����Ѵ�.
		_gcvt_s(str_i, b, 10);

		strcat_s(str_r, 20, "+");	//strcat_s : ���ڿ��� �߰��Ѵ�, �Ǽ���
		strcat_s(str_r, 20, str_i);	//�Ǽ���+�����
		strcat_s(str_r, 20, "i");	//�Ǽ���+����� i

		str.append(str_r);

	}

	if (b == 0)
		str = "Imaginary Number is not!";

	return str;
}

ImaginaryNumber ImaginaryNumber::AddImaginary(const ImaginaryNumber ima)
{
	ImaginaryNumber res;	// ������ ����� ������ ��� ��ü res�� �����Ѵ�.

	res.a = this->a + ima.a;
	res.b = this->b + ima.b;

	return res;
}