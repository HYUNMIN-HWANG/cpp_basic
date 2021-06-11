#include "ch12_05_GeometricObject.h"

int main()
{
	Isosceles Tri1(4.2, 5.4);

	cout << "삼각형의 밑변 : " << Tri1.GetLine1() << endl;
	cout << "삼각형의 높이 : " << Tri1.GetLine2() << endl;
	cout << "넓이 : " << Tri1.AreaCalculation() << endl;
	cout << "등변 : " << Tri1.Compute() << endl;

	Rectangle Rect1;

	Rect1.SetLine1(20.1);	
	Rect1.SetLine2(12);

	Rect1.AreaCalculation();
	Rect1.Compute();

	cout << "사각형의 가로 : " << Rect1.GetLine1() << endl;
	cout << "사각형의 세로 : " << Rect1.GetLine2() << endl;
	cout << "면적 : " << Rect1.GetArea() << endl;
	cout << "둘레 : " << Rect1.GetRound() << endl;

	return 0;
}

//삼각형의 밑변 : 4.2
//삼각형의 높이 : 5.4
//넓이 : 11.34
//등변 : 5.90169
//사각형의 가로 : 20.1
//사각형의 세로 : 12
//면적 : 241.2
//둘레 : 64.2