// 함수 오버라이딩 : 기반 클래스의 멤버 함수를 파생 클래스에서 다시 정의하는 것
	// --> 기반 클래스의 가상함수를 파생 클래스에서 재정의하는 것
// 동적결합 : 함수의 재정의가 아닌 프로그램 실행에 의해서 적절한 객체의 멤버를 참조할 수 있어야 한다.
// 동적결합은 실행 시 어떤 함수가 호출될지를 결정하는 것, 하나의 함수가 여러 클래스에서 재정의된 형태일 때 요구된다. (다형성)
	// (1) 기반 클래스의 멤버 함수가 가상 함수로 선언되어야 한다.
	// (2) 함수에서 매개변수로 전달된 변수는 객체의 주소를 포함해야 한다.

#include <iostream>
using namespace std;

class A
{
public:
	virtual string ClassMessage()	// 가상함수
	{
		return "class A";
	}
};

class B : public A
{
public:
	string ClassMessage()	// 함수 오버라이딩
	{
		return "class B";
	}
};

class C :  public B
{
public:
	string ClassMessage()	// 함수 오버라이딩
	{
		return "class C";
	}
};

void TestFunction1(A* x) // 객체의 주소를 전달함
{
	cout << x->ClassMessage().data() << endl;
}

int main()
{
	A a;
	B b;
	C c;

	//TestFunction1(a);
	//TestFunction1(b);

	TestFunction1(&a);
	TestFunction1(&b);
	TestFunction1(&c);

	return 0;
}

//class A
//class B
//class C