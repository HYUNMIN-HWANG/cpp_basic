// ���迬����, ��������

#include <iostream>
using namespace std;

int main()
{
	bool a;

	a = 10 > 3;
	cout << "10 > 3 ��� " << a << endl;	// 1

	a = 13 <= 10;
	cout << "13 <= 10 ��� " << a << endl;	// 0

	a = 20 != 20;
	cout << "20 != 20 ��� " << a << endl;	// 0

	a = (3 + 10) && (4 < 3);
	cout << " (3 + 10) && (4 < 3) ��� " << a << endl;	// 0

	a = (3 + 10) || (4 < 3);
	cout << " (3 + 10) || (4 < 3) ��� " << a << endl;	// 1

	a = !3;	//������, �ݴ�� ����						
	cout << "!3 ��� " << a << endl;	// 0 : 3�� 0�� �ƴϱ� ������ True, �̰� �����ؾ� �ϹǷ� False�� �ȴ�.

	return 0;
}