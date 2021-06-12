// ����� ���� Ŭ����
// : ���� ���� ó������ catch ��������� ���� �̵��� ����ϴ� throw�� ���� ���޵Ǵ� �Ű������� ��ü�� ����ϴ� ���� �������� �Ѵ�.
// : ���� ó������ �پ��� ������ �ٷ� �� �ִ�.

#include "ch14_06_sung.h"

SungException::SungException(const int total, const int num)
	:logic_error("�߸��� �μ� ��")	// ���� ó�� �޼���
{
	this->total = total;
	this->num = num;
}

int SungException::GetTotal()
{
	return total;
}

int SungException::GetNum()
{
	return num;
}

Sung::Sung()
{
	kor = math = eng = 0;
	total = 0;
	aver = 0;
}

Sung::Sung(const int kor, const int eng, const int math)
{
	this->kor = kor;
	this->eng = eng;
	this->math = math;
	total = 0;
	aver = 0;
}

int Sung::GetTotal()
{
	if (kor <= 0 || eng <= 0 || math <= 0)
		throw SungException(total, 3);

	total = kor + eng + math;
	return total;
}

double Sung::GetAver()
{
	if (total < 0)
		throw SungException(total, 3);

	aver = total / (double)3;
	return aver;
}