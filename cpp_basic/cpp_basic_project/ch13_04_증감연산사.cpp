// ���� ������ �����ε�
// �� ���� ������ ? �� ���� ������ ? ������ �� �־�� ��

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

// �� ���� ������ : ���� ���¿��� �Ű������� ���� ��
// Ŭ������ operator()++;

// �� ���� ������ : ���� ���¿��� �Ű������� ���� ��
// Ŭ������ operator++(int dummy);

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

//ImaginaryNumber ImaginaryNumber::AddImaginary(const ImaginaryNumber ima)
//{
//	ImaginaryNumber res;	// ������ ����� ������ ��� ��ü res�� �����Ѵ�.
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

ImaginaryNumber ImaginaryNumber::operator++(void)	// �� ���� ������ �Լ�
{
	this->a++;	// �Ǽ���
	return *this;
}

ImaginaryNumber ImaginaryNumber::operator++(int dummy)	// �� ���� ������ �Լ� 
{
	this->b++;	// �����
	return *this;
}
