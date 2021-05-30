// 100보다 큰 값인가?

#include <iostream>
using namespace std;

int main()
{
	int a = 123;
	//(1) 방법
	//cout << "a > 100의 결과 : " << (a > 100) << endl; // a > 100의 결과 : 1
	//(2) 방법

	if (a > 100)
		cout << "100보다 크다" << endl; // 100보다 크다

	return 0;
}