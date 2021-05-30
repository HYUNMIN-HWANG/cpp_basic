#include <iostream>
using namespace std;

int main()
{
	int a;

	cout << "a 정수를 입력하세요 : ";
	cin >> a;

	if (a > 100)
		cout << a << "는 100보다 크다." << endl;
	else
	{
		if (a < 100)
			cout << a << "는 100보다 작다." << endl;
		else
			cout << a << "는 100이다." << endl;
	}
		

	return 0;
}

//a 정수를 입력하세요 : 20
//20는 100보다 작다.

//a 정수를 입력하세요 : 300
//300는 100보다 크다.

//a 정수를 입력하세요 : 100
//100는 100이다.