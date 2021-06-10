//������� ������ : ��� ������ ����� �����ϴ� ��
//setw : ��� ���� ������
//setprecision : �Ҽ��� ���� �ڸ��� ����
//fixed : �Ǽ����� ���� ���·� ���
//showpoint : �Ҽ��� ���

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a = 1234;

	cout << "a = " << a << endl;
	cout << "a = " << setw(5) << a << endl; // 5�ڸ��� �������� ���
	cout << "a = " << hex << setw(5) << a << endl;	// 16���� ���·� ���
	cout << "a = " << dec << setw(5) << a << endl;	// 10���� ���·� ��� (dec�� ǥ������ ������ ��� hex ���·� ��µ�)

	double b = 45.8769;
	cout << "b = " << b << endl;
	cout << "b = " << fixed << b << endl;	//�Ҽ��� ���� ������ �ڸ��� ��� ��� (�� 6�ڸ� ǥ����)

	cout << "b = " << setprecision(2) << b << endl;	//�Ҽ��� ���� �� �ڸ� ���

	double c = 123.;
	cout << "c = " << c << endl;	//  24�࿡�� setprecision(2) �ߴ� �� �״�� �����ȴ�.
	cout << "c = " << setprecision(0) << c << endl;	// �Ҽ��� ���� �ڸ��� ����
	cout << "c = " << showpoint << c << endl;	//�Ҽ����� �ݵ�� ǥ����
	cout << 987.0 << endl;

	return 0;
}

//a = 1234
//a =  1234
//a = 4d2
//a = 1234
//b = 45.8769
//b = 45.876900
//b = 45.88
//c = 123.00
//c = 123
//c = 123.
//987.