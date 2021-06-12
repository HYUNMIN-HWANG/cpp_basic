// 클래스 템플릿
// 클래스 내에 사용되는 자료형을 일반화 유형으로 표기하는 것
// 클래스 내의 멤버 변수나 멤버 함수의 반환 자료형을 일반화 유형으로 사용할 수 있어 여러 자료형을 포함할 수 있는 클래스가 된다.


//template<typename 일반화 유형 이름>
//반환형 클래스 이름<일반화 유형이름>::멤버 함수(매개변수)

// 객체 생성 시점에서 정의해야 한다.
// 클래스 선언과 정의가 하나의 파일에 함께 있어야 한다.


#include "ch15_02_sung.h"

int main()
{
	SUNG<int> intSung(90, 87, 65);	// 일반화 유형-> 정수형

	cout << "총점 : " << intSung.GetSum() << endl;
	cout << "평균 : " << intSung.GetAver() << endl;

	SUNG<double> dSUNG(34.2, 55.7, 98.1);	// 일반화 유형 -> 배정도형

	cout << "총점 : " << dSUNG.GetSum() << endl;
	cout << "평균 : " << dSUNG.GetAver() << endl;

	return 0;
}

//총점: 242
//평균 : 80.6667
//총점 : 188
//평균 : 62.6667