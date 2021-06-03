//����ü�� ������ ���� (call by reference)

#include <iostream>
using namespace std;

typedef struct
{
	char name[30];
	int age;
} PERSON;

// �Լ� ���� : PERSON�� ������ ������ �Ű������� �����
int TEST2(PERSON* p);

int main()
{
	PERSON a = { "�谩��", 17 };

	cout << "main name : " << a.name << endl;
	cout << "main age : " << a.age << endl;

	TEST2(&a);

	cout << "***********************" << endl;

	cout << "main name : " << a.name << endl;
	cout << "main age : " << a.age << endl;

	return 0;
}

int TEST2(PERSON* p)
{
	cout << "***********************" << endl;
	
	cout << "TEST2 : " << p->name << endl;
	cout << "TEST2 : " << p->age << endl;

	strcpy_s(p->name, 30, "����ȣ");	// main�� �ִ� a�� �����Ͽ� ����� ���� �����Ѵ�.
	p->age = 20;

	cout << "TEST2 : " << p->name << endl;
	cout << "TEST2 : " << p->age << endl;

	return 0;
}

//main name : �谩��
//main age : 17
//* **********************
//TEST2 : �谩��
//TEST2 : 17
//TEST2 : ����ȣ
//TEST2 : 20
//* **********************
//main name : ����ȣ
//main age : 20
