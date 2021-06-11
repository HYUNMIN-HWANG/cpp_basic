#ifndef _CH12_05_GEOMETRICOBJECT_H_
#define _CH12_05_GEOMETRICOBJECT_H_

#include <iostream>
using namespace std;

class GeometricObject	//�߻� Ŭ���� ����
{
public:
	GeometricObject();	// ������
	GeometricObject(const double line1, const double line2); // ������
	void SetLine1(const double line1);
	void SetLine2(const double line2);
	double GetLine1();
	double GetLine2();
	virtual double AreaCalculation() = 0; // ���� ���� �Լ�
	virtual double Compute() = 0; // ���� ���� �Լ�

protected :
	double line1, line2;

};

class Isosceles : public GeometricObject
{
public:
	Isosceles();
	Isosceles(const double base, const double height);
	double AreaCalculation();
	double Compute();
	double GetSide1();
	double GetArea();
private:
	double side;
	double area;
};

class Rectangle : public GeometricObject
{
public:
	Rectangle();
	Rectangle(const double length, const double height);
	double AreaCalculation();
	double Compute();
	double GetRound();
	double GetArea();

private:
	double round;
	double area;

};

#else
#endif // !_CH12_05_GEOMETRICOBJECT_H_
