#include "ch12_05_GeometricObject.h"
#include <cmath>

GeometricObject::GeometricObject()
{
	line1 = 0;
	line2 = 0;
}

GeometricObject::GeometricObject(const double line1, const double line2)
{
	this->line1 = line1;
	this->line2 = line2;
}

void GeometricObject::SetLine1(const double line1)
{
	this->line1 = line1;
}

void GeometricObject::SetLine2(const double line2)
{
	this->line2 = line2;
}

double GeometricObject::GetLine1()
{
	return line1;
}

double GeometricObject::GetLine2()
{
	return line2;
}

Isosceles::Isosceles()
	:GeometricObject()
{
	side = 0;
	area = 0;
}

Isosceles::Isosceles(const double base, const double height)
	:GeometricObject(base, height)
{
	side = 0;
	area = 0;
}

double Isosceles::AreaCalculation()	// 삼각형의 면적 계산
{
	area = line1 * line2 * 0.5;
	return area;
}

double Isosceles::Compute()	//이등변 삼각형의 등변 계산
{
	side = sqrt((line1 / 2) * (line2 / 2) + line2 * line2);
	return side;
}

double Isosceles::GetSide1()
{
	return side;
}

double Isosceles::GetArea() 
{
	return area;
}

Rectangle::Rectangle()
	:GeometricObject()
{
	round = 0;
	area = 0;
}

Rectangle::Rectangle(const double length, const double height)
	:GeometricObject(length, height)
{
	round = 0;
	area = 0;
}

double Rectangle::AreaCalculation()	// 오버라이딩, 기반 클래스의 순수 가상 함수를 재정의한 것
{
	area = line1 * line2;
	return area;
}

double Rectangle::Compute() // 오버라이딩, 기반 클래스의 순수 가상 함수를 재정의 한 것
{
	round = ((line1 * 2) + (line2 * 2));
	return round;
}

double Rectangle::GetRound()
{
	return round;
}

double Rectangle::GetArea()
{
	return area;
}
