// ����ü ������
// (*����ü�� ������ ����).���

#include <iostream>
using namespace std;

typedef struct
{
	char Name[30];
	char MPhoneNum[20];
} SAM;

int main()
{
	SAM a = { "���ູ", "010-1234-5678" };
	SAM* pa;
	
	pa = &a;

	cout << "�̸� : " << a.Name << endl;
	//cout << "�̸� : " << (*pa).Name << endl;
	//�߰�ȣ�� ���� ���ŷӴ� !!

	cout << "�̸� : " << pa->Name << endl;
	cout << "��ȭ��ȣ : " << pa->MPhoneNum << endl;


	return 0;

}

//�̸�: ���ູ
//�̸� : ���ູ
//��ȭ��ȣ : 010 - 1234 - 5678