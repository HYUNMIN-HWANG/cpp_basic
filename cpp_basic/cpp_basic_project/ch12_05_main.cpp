#include "ch12_05_GeometricObject.h"

int main()
{
	Isosceles Tri1(4.2, 5.4);

	cout << "�ﰢ���� �غ� : " << Tri1.GetLine1() << endl;
	cout << "�ﰢ���� ���� : " << Tri1.GetLine2() << endl;
	cout << "���� : " << Tri1.AreaCalculation() << endl;
	cout << "� : " << Tri1.Compute() << endl;

	Rectangle Rect1;

	Rect1.SetLine1(20.1);	
	Rect1.SetLine2(12);

	Rect1.AreaCalculation();
	Rect1.Compute();

	cout << "�簢���� ���� : " << Rect1.GetLine1() << endl;
	cout << "�簢���� ���� : " << Rect1.GetLine2() << endl;
	cout << "���� : " << Rect1.GetArea() << endl;
	cout << "�ѷ� : " << Rect1.GetRound() << endl;

	return 0;
}

//�ﰢ���� �غ� : 4.2
//�ﰢ���� ���� : 5.4
//���� : 11.34
//� : 5.90169
//�簢���� ���� : 20.1
//�簢���� ���� : 12
//���� : 241.2
//�ѷ� : 64.2