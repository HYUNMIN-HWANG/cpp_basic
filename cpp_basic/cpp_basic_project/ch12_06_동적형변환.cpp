// 동적 형 변환 : 실행 시 주어진 상홍에 맞게 형 변환을 수행하는 것을 의미함
// 이미 생성된 객체의 클래스를 변환하는 것
// 객체의 포인터를 변환을 원하는 클래스의 포인터로 할당함으로써 실행된다.
// dynamic_cast 연산자 활용함

// Upcasting : 파생 클래스 유형을 기반 클래스로 변환하는 것, dynamic_cast를 명시하지 않아도 된다.
// Downcasting : 기반 클래스 유형을 파생 클래스로 변환하는 것, 반드시 dynamic_cast를 명시해야 함


// Upcasting의 경우 :
#include "ch12_05_GeometricObject.h"

int main()
{
	GeometricObject* p1 = new Isosceles(9, 15); //Upcasting, 동적 형변환
	Isosceles* p2 = new Isosceles(5, 6);

	cout << "p1 : " << p1->GetLine1() << endl;
	cout << "p2 : " << p2->GetLine1() << endl;

	return 0;
}

//p1: 9
//p2 : 5