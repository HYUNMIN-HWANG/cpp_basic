//����Ʈ �Ű����� : �Լ� ���𿡼� �Լ��� �Ű������� �ʱ갪�� ���س��� �Լ� ȣ�⿡�� �Լ��� �Ű������� �������� ���� ��� �ش� �ʱ갪�� ȣ���ϴ� �Լ�

#include <iostream>
using namespace std;

int TestFunc1(int a);
int TestFunc4(int a = 888);	// ����Ʈ �� a=888

int main()
{
	int b = 200;

	cout << "b = " << b << endl;
	TestFunc1(b);
	cout << "b = " << b << endl;

	TestFunc1(999);
	TestFunc1(b);

	cout << "*****************************" << endl;

	TestFunc4(999);
	TestFunc4(b);
	TestFunc4();	// ����Ʈ ���� a=888�� ����.

	cout << "*****************************" << endl;

	return 0;
}

int TestFunc1(int a)
{
	cout << "a = " << a << endl;
	a = 100;
	cout << "a = " << a << endl;
	return 0;
}

int TestFunc4(int a)
{
	cout << "a = " << a << endl;
	a = 100;
	cout << "a = " << a << endl;
	return 0;
}

//b = 200
//a = 200
//a = 100
//b = 200
//a = 999
//a = 100
//a = 200
//a = 100
//* ****************************
//a = 999
//a = 100
//a = 200
//a = 100
//a = 888
//a = 100
//* ****************************