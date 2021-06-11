//protected : 접근 지정자
//자기 자신과 파생 클래스의 경우에만 참조할 수 있으나 외부에서는 참조가 허락되지 않는다.

#include "ch11_04_a.h"

void A::SetVar(const int proVar_A, const int priVar_A)
{
	this->proVar_A = proVar_A;
	this->priVar_A = priVar_A;
}

void A::ShowVar()
{
	cout << "proVar_A = " << proVar_A << endl;
	cout << "priVar_A = " << priVar_A << endl;
}

void B::Show()
{
	b = 30;
	cout << "b = " << b << endl;
	proVar_A = 200;	//proVar_A는 protected 접근 속성을 같는 멤버 함수이기 때문에 파생 클래스에서 접근할 수 있다.
	cout << "proVar_A = " << proVar_A << endl;	
}