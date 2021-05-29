// 관계연산자, 논리연산자

#include <iostream>
using namespace std;

int main()
{
	bool a;

	a = 10 > 3;
	cout << "10 > 3 결과 " << a << endl;	// 1

	a = 13 <= 10;
	cout << "13 <= 10 결과 " << a << endl;	// 0

	a = 20 != 20;
	cout << "20 != 20 결과 " << a << endl;	// 0

	a = (3 + 10) && (4 < 3);
	cout << " (3 + 10) && (4 < 3) 결과 " << a << endl;	// 0

	a = (3 + 10) || (4 < 3);
	cout << " (3 + 10) || (4 < 3) 결과 " << a << endl;	// 1

	a = !3;	//논리부정, 반대로 연산						
	cout << "!3 결과 " << a << endl;	// 0 : 3은 0이 아니기 때문에 True, 이걸 부정해야 하므로 False가 된다.

	return 0;
}