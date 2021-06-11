#include "ch12_05_GeometricObject.h"

void DisplayGeometricObject(GeometricObject& object)	// GeometricObject Ŭ������ ���� ��ü�� �����, GeometricObject�� ��ü �ּҸ� ���޹޴´�.
{
	cout << "line1 : " << object.GetLine1() << endl;
	cout << "line2 : " << object.GetLine2() << endl;
	GeometricObject* p = &object;
	Isosceles* p1 = dynamic_cast<Isosceles*>(p);	//�ٿ�ĳ����
	Rectangle* p2 = dynamic_cast<Rectangle*>(p);	//�ٿ�ĳ����

	if (p1 != NULL)
	{
		p1->AreaCalculation();
		p1->Compute();

		cout << "�̵ �ﰢ���� ���� : " << p1->GetArea() << endl;
		cout << "�̵ �ﰢ���� � : " << p1->GetSide1() << endl;
	}

	if (p2 != NULL)
	{
		p2->AreaCalculation();
		p2->Compute();

		cout << "�簢���� ���� : " << p2->GetArea() << endl;
		cout << "�簢���� � : " << p2->GetRound() << endl;
	}
}


int main()
{
	Isosceles p1(9, 15);
	Rectangle p2(10, 12);

	DisplayGeometricObject(p1);

	cout << "************************************" << endl;

	DisplayGeometricObject(p2);

	return 0;

}


//line1: 9
//line2 : 15
//�̵ �ﰢ���� ���� : 67.5
//�̵ �ﰢ���� � : 16.0857
//* ***********************************
//line1 : 10
//line2 : 12
//�簢���� ���� : 120
//�簢���� � : 44