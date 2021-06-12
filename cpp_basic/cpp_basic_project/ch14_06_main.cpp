#include "ch14_06_sung.h"

int main()
{
	try
	{
		Sung p1(10, 30, -10);	// 세번째 매개변수가 음수 -> GetTotal에서 throw가 실행됨
		cout << "총점 : " << p1.GetTotal() << endl;
		cout << "평균 : " << p1.GetAver() << endl;
	}
	catch (SungException &e)
	{
		cout << e.what() << endl;
		cout << "전달된 총점 : " << e.GetTotal() << endl;
		cout << "전달된 과목 수 : " << e.GetNum() << endl;
	}
	return 0;
}

//잘못된 인수 값
//전달된 총점 : 0
//전달된 과목 수 : 3