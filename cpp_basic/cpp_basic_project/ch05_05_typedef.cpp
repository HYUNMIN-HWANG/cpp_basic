#include <iostream>
#include <string>
using namespace std;

int main()
{
	// ����ü�� ����
	typedef struct
	{
		char Name[30];
		char MPhoneNum[20];
	} SAM;

	SAM Friend;

	strcpy_s(Friend.Name, 30, "�谩��");
	strcpy_s(Friend.MPhoneNum, 20, "010-1234-5687");

	SAM Friend2;

	Friend2 = Friend;

	cout << Friend.Name << endl;
	cout << Friend.MPhoneNum << endl;

	cout << Friend2.Name << endl;
	cout << Friend2.MPhoneNum << endl;

	return 0;
}

//�谩��
//010 - 1234 - 5687
//�谩��
//010 - 1234 - 5687