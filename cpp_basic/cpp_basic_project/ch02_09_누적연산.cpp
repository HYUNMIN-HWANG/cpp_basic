//������ ������ ���� ���� �����ϱ�

#include <iostream>
using namespace std;

int main()
{
	int i_add, i_mul; //���� ����
	i_add = 0;	// ���� �ʱ�ȭ
	i_mul = 1;

	i_add += 5; // ���� ����
	i_add += 5; // ���� ����
	i_add += 5; // ���� ����

	i_mul *= 5;	// ���� ����
	i_mul *= 5;	// ���� ����
	i_mul *= 5;	// ���� ����

	cout << "���� ���� ���: " << i_add << endl; // 15
	cout << "���� ���� ���: " << i_mul << endl; // 125

	int a = 10;
	a++;	// ��ġ ������

	cout << "a= " << a << endl;		// 11
	cout << "a++= " << a++ << endl;	// 11

	cout << "++a= " << ++a << endl;	// 13
	cout << "a= " << a << endl;		// 13

	return 0;
	return 0;
}