#include "ch12_05_GeometricObject.h"

void DisplayGeometricObject(GeometricObject& object)	// GeometricObject 클래스의 참조 객체를 사용함, GeometricObject의 객체 주소를 전달받는다.
{
	cout << "line1 : " << object.GetLine1() << endl;
	cout << "line2 : " << object.GetLine2() << endl;
	GeometricObject* p = &object;
	Isosceles* p1 = dynamic_cast<Isosceles*>(p);	//다운캐스팅
	Rectangle* p2 = dynamic_cast<Rectangle*>(p);	//다운캐스팅

	if (p1 != NULL)
	{
		p1->AreaCalculation();
		p1->Compute();

		cout << "이등변 삼각형의 넓이 : " << p1->GetArea() << endl;
		cout << "이등변 삼각형의 등변 : " << p1->GetSide1() << endl;
	}

	if (p2 != NULL)
	{
		p2->AreaCalculation();
		p2->Compute();

		cout << "사각형의 넓이 : " << p2->GetArea() << endl;
		cout << "사각형의 등변 : " << p2->GetRound() << endl;
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
//이등변 삼각형의 넓이 : 67.5
//이등변 삼각형의 등변 : 16.0857
//* ***********************************
//line1 : 10
//line2 : 12
//사각형의 넓이 : 120
//사각형의 등변 : 44