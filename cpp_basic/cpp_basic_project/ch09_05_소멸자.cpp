// 소멸자 : 객체가 소멸할 때 자동으로 실행되는 함수
// public 속성이어야 함
// 함수의 반환값 없음
// 클래스와 이름 동일함
// (~) 기호를 함수 이름 앞에 덧붙인다.
// 오버로딩이 사용되지 않는다.

#include <iostream>
using namespace std;

class TEST
{
public:
	TEST();		// 생성자
	~TEST();	// 소멸자	
};

TEST::TEST()	// 생성자 정의
{
	cout << "------TEST 생성자------" << endl;
}

TEST::~TEST()	// 소멸자 정의
{
	cout << "=====TEST 소멸자=====" << endl;
}

int main()
{
	TEST Obj;

	cout << "즐거운 C++ 프로글래밍 !" << endl;

	return 0;
}

//------TEST 생성자------     : 객체 Obj가 생성되면서 생성자 실행됨
//즐거운 C++ 프로글래밍 !
//==== = TEST 소멸자==== =	  : return 이 실행되기 전에 객체가 소멸되면서 소멸자 실행됨
