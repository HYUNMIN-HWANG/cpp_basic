// switch ~ case
// 조건에 의한 사례가 상수로 나올 때

#include <iostream>
using namespace std;

int main()
{
	int num;

	cout << "숫자 입력 : ";
	cin >> num;

	switch (num)
	{
		case 1:
			cout << "1이 입력되었습니다." << endl;
			cout << "*******************" << endl;
			break; // break를 넣지 않는다면 아래 실행문이 모두 실행된다.
		case 2 :
			cout << "2가 입력되었습니다." << endl;
			cout << "*******************" << endl;
			break;
		default:
			cout << "1 또는 2가 아닌 값이 입력되었습니다." << endl;
			cout << "*******************" << endl;
	}
	return 0;
}

//숫자 입력 : 1
//1이 입력되었습니다.
//********************

//숫자 입력 : 10
//1 또는 2가 아닌 값이 입력되었습니다.
//* ******************