#include <iostream>
using namespace std;

int main()
{
	int a, i;
	int r = 1;
	char flag = 'y';

	do {
		if (flag == 'n')
			cout << "양수를 입력하세요" << endl;
		cout << "정수 입력 : ";
		cin >> a;
		flag = 'n';
	} while (a < 0);

	for (i = 1; i <= a; i++)
		r = r * i;
	cout << a << "! = " << r << endl;

	return 0;
}

//정수 입력 : 5
//5!= 120

//정수 입력 : -3
//양수를 입력하세요
//정수 입력 : 0
//0!= 1