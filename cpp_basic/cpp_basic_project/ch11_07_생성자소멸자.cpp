#include "ch11_07_contest.h"

CON1::CON1(const int c)
{
	this->c = c;
	cout << "*** CON1 생성자 ***" << endl;
	cout << "c = " << c << endl;
}

CON1::~CON1()
{
	cout << "*** CON1 소멸자 ***" << endl;
}

//CON2::CON2()
//{
//	cout << "*** CON2 생성자 ***" << endl;
//}
// error : 'CON1' 사용할 수 있는 적절한 기본 생성자가 없습니다.
// CON1의 생성자 호출을 위해 정수형 값이 전달되어야 하기 때문이다.
// 기반 클래스의 생성자는 파생 클래스의 생성자 초기화 목록에서 직접 호출할 수 있다.

//아래와 같이 수정
CON2::CON2()
	: CON1(300)
{
	cout << "*** CON2의 생성자 ***" << endl;
	cout << "c = " << c << endl;
}


CON2::~CON2()
{
	cout << "*** CON2 소멸자 ***" << endl;
}