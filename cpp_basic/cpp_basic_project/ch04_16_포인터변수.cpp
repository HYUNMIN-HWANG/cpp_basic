//��� �����ͺ����� ũ�� 4����Ʈ

#include <iostream>
using namespace std;

int main()
{
	int* pi;
	char* pc;
	float* pf;
	double* pd;

	cout << "������ ������ ũ�� : " << sizeof(pi) << endl;
	cout << "������ ������ ũ�� : " << sizeof(pc) << endl;
	cout << "�Ǽ��� ������ ũ�� : " << sizeof(pf) << endl;
	cout << "�������� ������ ũ�� : " << sizeof(pd) << endl;

	return 0;
}

//������ ������ ũ�� : 4
//������ ������ ũ�� : 4
//�Ǽ��� ������ ũ�� : 4
//�������� ������ ũ�� : 4