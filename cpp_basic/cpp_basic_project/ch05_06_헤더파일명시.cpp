#include "config.h"	//��� ���� ���
int main()
{
	SAM Friend;

	strcpy_s(Friend.Name, 30, "�谩��");
	strcpy_s(Friend.MPhoneNum, 20, "010-1234-5687");

	SAM Friend1;

	Friend1 = Friend;

	cout << Friend.Name << endl;
	cout << Friend.MPhoneNum << endl;

	cout << Friend1.Name << endl;
	cout << Friend1.MPhoneNum << endl;

	return 0;

 }


//�谩��
//010 - 1234 - 5687
//�谩��
//010 - 1234 - 5687