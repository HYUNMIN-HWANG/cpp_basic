// ����, ���� ������, �� ������
// 1 �� True / 0 ���� False
// ���� (bool) 1 ����Ʈ - true, false

#include <iostream>
using namespace std;

int main()
{
	bool a = true;

	cout << "a = " << a << endl;	//1
	a = false;
	cout << "a = " << a << endl;	//0
	a = -98;
	cout << "a = " << a << endl;	//1
	a = 0;
	cout << "a= " << a << endl;		//0

	return 0;
}