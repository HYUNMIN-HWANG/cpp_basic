#include "config.h"	//Çì´õ ÆÄÀÏ ¸í½Ã
int main()
{
	SAM Friend;

	strcpy_s(Friend.Name, 30, "±è°©µ¹");
	strcpy_s(Friend.MPhoneNum, 20, "010-1234-5687");

	SAM Friend1;

	Friend1 = Friend;

	cout << Friend.Name << endl;
	cout << Friend.MPhoneNum << endl;

	cout << Friend1.Name << endl;
	cout << Friend1.MPhoneNum << endl;

	return 0;

 }


//±è°©µ¹
//010 - 1234 - 5687
//±è°©µ¹
//010 - 1234 - 5687