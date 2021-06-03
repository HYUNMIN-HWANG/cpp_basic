//����ü�� �Ϲ� ���� (call by value)

#include <iostream>
using namespace std;

// ����ü�� PERSON ���� 
typedef struct
{
	char name[30];
	int age;
} PERSON;

// �Լ� ���� : TEST1�� �Ű������� PERSON�� �Ϲ� ���� �� ��.
int TEST1(PERSON p);

int main()
{
	PERSON a = { "�谩��", 18 };

	cout << "main name : " << a.name << endl;
	cout << "main age : " << a.age << endl;

	TEST1(a);	// �Լ� ȣ�� (����ü�� ������ �ִ´�.)

	cout << "*************************" << endl;

	cout << "main name : " << a.name << endl;
	cout << "main age : " << a.age << endl;

	return 0;
}

int TEST1(PERSON p)
{
	cout << "*************************" << endl;

	cout << "TEST1 name : " << p.name << endl;
	cout << "TEST1 age : " << p.age << endl;

	strcpy_s(p.name, 30, "����ȣ");
	p.age = 16;

	cout << "TEST1 name : " << p.name << endl;
	cout << "TEST1 age : " << p.age << endl;

	return 0;
}


//main name : �谩��
//main age : 18
//* ************************
//TEST1 name : �谩��
//TEST1 age : 18
//TEST1 name : ����ȣ  <<<<<<<<< PERSON ����ü ������ ����� ���� main()�� �ִ� a�� ������ ���� �ʴ´�.
//TEST1 age : 16
//* ************************
//main name : �谩��
//main age : 18