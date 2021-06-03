// �Լ��� �Ű����� : �Լ� ȣ�⿡�� �Լ� ���࿡ �ʿ��� ���� ����
// (1) Call by Value : ���� ���� ����
// (2) Call by Reference : ������ ������ �������� �� �ּҸ� ����

#include <iostream>
using namespace std;

int TestFunc1(int a);
int TestFunc2(int& a);
int TestFunc3(int *a);

int main()
{
	int b = 200;
	cout << "b = " << b << endl;
	TestFunc1(b);	 // (1) Call by Value
	cout << "b = " << b << endl;
	TestFunc1(199);	// (1) Call by Value
	cout << "*******************" << endl;

	int c = 200;
	int& r_c = c;
	TestFunc2(r_c);
	cout << "*******************" << endl;

	TestFunc3(&c);
	cout << "c = " << c << endl;

	return 0;
}

int TestFunc1(int a)
{
	cout << "a = " << a << endl;
	a = 100;
	cout << "a = " << a << endl;

	return 0;
}

int TestFunc2(int& a)
{
	cout << "c = " << a << endl;
	a = 777;
	cout << "c = " << a << endl;

	return 0;
}

int TestFunc3(int* a)
{
	cout << "d = " << *a << endl;
	*a = 999;
	cout << "d = " << *a << endl;

	return 0;
}

//b = 200
//a = 200
//a = 100
//b = 200
//a = 199
//a = 100
//* ******************
//c = 200
//c = 777
//* ******************
//d = 777
//d = 999
//c = 999