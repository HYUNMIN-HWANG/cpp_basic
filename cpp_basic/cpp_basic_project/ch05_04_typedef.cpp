//typedef : �̹� ���ǵ� ������ �ٽ� �����ϴ� ����

//(1)
//typedef [�̹� ���ǵ� ����] [���� �����ؼ� ����� ����];

//(2)
//typedef struct 
//{
//     ����ü ��� ����;
//} ������ �̸�;

#include <iostream>
#include <string>
using namespace std;

int main()
{
	struct sam
	{
		char Name[30];
		char MPhoneNum[20];
	};

	typedef struct sam SAM; //sam�� SAM���� ������

	SAM Friend, Friend1;

	strcpy_s(Friend.Name, 30, "�谩��");
	strcpy_s(Friend.MPhoneNum, 20, "010-1234-5687");

	Friend1 = Friend;

	cout << Friend.Name << endl;
	cout << Friend.MPhoneNum << endl;

	cout << Friend1.Name << endl;
	cout << Friend1.MPhoneNum << endl;

	return 0;

}