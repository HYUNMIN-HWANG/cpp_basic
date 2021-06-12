// 사용자 예외 클래스
// : 기존 예외 처리에서 catch 블록으로의 제어 이동을 담당하는 throw에 의해 전달되는 매개변수로 객체를 사용하는 것을 목적으로 한다.
// : 예외 처리에서 다양한 정보를 다룰 수 있다.

#include "ch14_06_sung.h"

SungException::SungException(const int total, const int num)
	:logic_error("잘못된 인수 값")	// 예외 처리 메세지
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