#include <iostream>
#include <string>
using namespace std;

int main()
{
	// ±¸Á¶Ã¼Çü ¼±¾ð
	typedef struct
	{
		char Name[30];
		char MPhoneNum[20];
	} SAM;

	SAM Friend;

	strcpy_s(Friend.Name, 30, "±è°©µ¹");
	strcpy_s(Friend.MPhoneNum, 20, "010-1234-5687");

	SAM Friend2;

	Friend2 = Friend;

	cout << Friend.Name << endl;
	cout << Friend.MPhoneNum << endl;

	cout << Friend2.Name << endl;
	cout << Friend2.MPhoneNum << endl;

	return 0;
}

//±è°©µ¹
//010 - 1234 - 5687
//±è°©µ¹
//010 - 1234 - 5687