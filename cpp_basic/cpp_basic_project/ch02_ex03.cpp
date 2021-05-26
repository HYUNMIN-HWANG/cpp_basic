//실수와 반올림할 자릿수를 입력하여 반올림 값을 구하는 프로그램

#include <iostream>
using namespace::std;

int main()
{
	float su;
	int n, i, imsi;

	cout << "실수 입력 : ";
	cin >> su;

	cout << "반올림 자릿수 입력 : ";
	cin >> n;

	for (i = 0; i < n; i++)
		su = su * 10;	// 10을 n 번 곱해준다.

	su = su + 5;			// 반올림을 수행하기 위해서 5를 더해준다.
	imsi = (int)su / 10;	// 반올림할 자릿수로 이동한다.
	su = (float)imsi;

	for (i = 0; i < n - 1; i++)
		su = su / 10;

	cout << "반올림 결과값 : " << su << endl;

	return 0;
}