//����ü�� ����
//����ü�� ������ ����ϸ� ����ü���� ���Ե� ����� �� ���� �� �ٸ� ����ü�� ������ �Ҵ��� �� �ִ�.

#include <iostream>
#include <string>
using namespace std;

//�Ϲ� ������ ������� ��, 
//Name, Name1, MPhoneNum, MPhoneNum1�� ���� ��������� �Ѵ�.
/*
int main()
{
	char Name[30] = "";
	char MPhoneNum[20] = "";

	char Name1[30] = "";
	char MPhoneNum1[20] = "";

	strcpy_s(Name, 30, "�谩��");
	strcpy_s(MPhoneNum, 20, "010-1234-5678");

	strcpy_s(Name1, 30, Name);
	strcpy_s(MPhoneNum1, 20, MPhoneNum);

	cout << Name << endl;
	cout << MPhoneNum << endl;

	cout << Name1 << endl;
	cout << MPhoneNum << endl;

	return 0;
}
*/

int main()
{
	struct
	{
		char Name[30];
		char MPhoneNum[20];
	} Friend, Friend1;

	strcpy_s(Friend.Name, 30, "�谩��");
	strcpy_s(Friend.MPhoneNum, 20, "010-1234-5689");

	Friend1 = Friend;

	cout << Friend.Name << endl;
	cout << Friend.MPhoneNum << endl;

	cout << Friend1.Name << endl;
	cout << Friend1.MPhoneNum << endl;

	return 0;
}

//�谩��
//010 - 1234 - 5689
//�谩��
//010 - 1234 - 5689