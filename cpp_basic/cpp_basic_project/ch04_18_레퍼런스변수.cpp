// ���۷��� ���� : �̹� ����� ������ �ٸ� �̸����� �θ� ����
// � ������ �ٸ� �̸����� �θ��� ��
// �ڷ��� & ���� �̸� = ����;

#include <iostream>
using namespace std;

int main()
{
	int a = 100;
	int &ra = a;

	cout << "a = " << a << endl;
	cout << "ra = " << ra << endl;

	cout << "********************" << endl;

	ra = 200;
	cout << "a = " << a << endl;
	cout << "ra = " << ra << endl;

	return 0;
}


//a = 100
//ra = 100
//* *******************
//a = 200
//ra = 200